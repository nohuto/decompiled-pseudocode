/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057FA4
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001CC94 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0121730 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01219AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0173AB4 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0173B44 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x1C0173DE0 (DxgkOpmCreateHandle.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01763B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0176430 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0217530 (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        __int64 a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  unsigned int v6; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 RedirectionInfo; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *v21; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v23[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]

  v21 = 0LL;
  v6 = a3;
  v22 = 0LL;
  v9 = a4;
  if ( *((_DWORD *)a1 + 754) < 2u )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    RedirectionInfo = -1073741637LL;
LABEL_5:
    *(_QWORD *)(v10 + 24) = RedirectionInfo;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)RedirectionInfo;
  }
  v12 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
  RedirectionInfo = v12;
  if ( v12 < 0
    || (v16 = (void *)*((_QWORD *)a2 + 487),
        memset(v23, 0, sizeof(v23)),
        v24 = 0LL,
        v25 = 0,
        RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(v16, v9, &v22),
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL),
        (int)RedirectionInfo < 0) )
  {
LABEL_4:
    v10 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    goto LABEL_5;
  }
  if ( !v22 )
  {
    RedirectionInfo = -1073741637LL;
    goto LABEL_4;
  }
  v17 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  RedirectionInfo = v17;
  if ( v17 < 0 )
    goto LABEL_4;
  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 487));
  DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 487), 1LL);
  v18 = *((_DWORD *)a1 + 754);
  if ( v18 == 2 )
  {
    v19 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, _DWORD, void **))a1 + 392))(
            *((_QWORD *)a1 + 6),
            v6,
            v22,
            v23,
            v9,
            &v21);
  }
  else
  {
    if ( v18 != 3 )
    {
      LODWORD(RedirectionInfo) = -1073741637;
      goto LABEL_16;
    }
    v19 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, __int64, int, void **))a1 + 391))(
            *((_QWORD *)a1 + 6),
            v6,
            v22,
            v23,
            v9,
            15,
            &v21);
  }
  LODWORD(RedirectionInfo) = v19;
LABEL_16:
  if ( (int)RedirectionInfo >= 0 )
  {
    LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 487), v21, a5);
    if ( (int)RedirectionInfo < 0 )
      (*((void (__fastcall **)(_QWORD, void *))a1 + 390))(*((_QWORD *)a1 + 6), v21);
    else
      *a6 = v21;
  }
  DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 487));
  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 487));
  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  return (unsigned int)RedirectionInfo;
}
