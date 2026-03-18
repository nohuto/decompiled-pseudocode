/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BBD70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *v9; // rsi
  _QWORD *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-B8h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v16);
  v9 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    if ( v11 >= 0 )
    {
      v15 = *((_QWORD *)v9 + 350);
      if ( !v15 )
      {
        WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
        v15 = *((_QWORD *)v9 + 350);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(v15 + 648) + 8LL) + 1184LL))(
        *(_QWORD *)(v15 + 656),
        Context + 1);
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
      v14[3] = v9;
      v14[4] = Context->HighPart;
      v14[5] = Context->LowPart;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = 0LL;
    v10[4] = Context->HighPart;
    v10[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
