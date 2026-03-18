/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0209770
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
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
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    if ( v13 >= 0 )
    {
      v20 = *((_QWORD *)v11 + 335);
      if ( !v20 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v14);
        v21[5] = 0LL;
        v21[6] = 0LL;
        v21[7] = 0LL;
        v21[3] = 275LL;
        v21[4] = 7LL;
        WdLogEvent5_WdCriticalError(v21);
        v20 = *((_QWORD *)v11 + 335);
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
