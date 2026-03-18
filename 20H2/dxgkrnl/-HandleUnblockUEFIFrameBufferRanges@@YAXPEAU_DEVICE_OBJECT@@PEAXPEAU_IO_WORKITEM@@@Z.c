/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020C810
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGADAPTER *v11; // rsi
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v23[144]; // [rsp+30h] [rbp-B8h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject, (__int64)Context);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v22);
  v11 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v6, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    if ( v13 >= 0 )
    {
      v20 = *((_QWORD *)v11 + 338);
      if ( !v20 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v14);
        v21[5] = 0LL;
        v21[6] = 0LL;
        v21[7] = 0LL;
        v21[3] = 275LL;
        v21[4] = 7LL;
        WdLogEvent5_WdCriticalError(v21);
        v20 = *((_QWORD *)v11 + 338);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(v20 + 640) + 8LL) + 1176LL))(
        *(_QWORD *)(v20 + 648),
        Context + 1);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v11;
      v18[4] = Context->HighPart;
      v18[5] = Context->LowPart;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23, v19);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v12[3] = 0LL;
    v12[4] = Context->HighPart;
    v12[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
