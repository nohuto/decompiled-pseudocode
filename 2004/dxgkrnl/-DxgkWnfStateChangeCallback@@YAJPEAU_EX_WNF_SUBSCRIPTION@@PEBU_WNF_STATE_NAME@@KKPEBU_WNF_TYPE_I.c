/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01639E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        struct _EX_RUNDOWN_REF *a6)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct _KPROCESS *Count; // rcx
  struct DXGGLOBAL *v15; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 1336));
  v13 = 0;
  if ( ExAcquireRundownProtection(a6 + 4) )
  {
    Count = (struct _KPROCESS *)a6[3].Count;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(Count, &ApcState);
    v13 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, struct _EX_RUNDOWN_REF *))a6[1].Count)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    KeUnstackDetachProcess(&ApcState);
    ExReleaseRundownProtection(a6 + 4);
  }
  v15 = DXGGLOBAL::GetGlobal(v12, v11);
  ExReleasePushLockSharedEx((char *)v15 + 1336, 0LL);
  KeLeaveCriticalRegion();
  return v13;
}
