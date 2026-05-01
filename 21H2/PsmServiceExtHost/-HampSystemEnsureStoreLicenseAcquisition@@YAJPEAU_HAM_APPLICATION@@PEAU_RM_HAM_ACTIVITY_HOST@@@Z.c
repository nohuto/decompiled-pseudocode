/*
 * XREFs of ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035638
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000DB28 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180045664 (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemEnsureStoreLicenseAcquisition(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rdx

  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    v3 = HampAppTryReferenceMixedHost(a1);
    v4 = v3;
    v5 = 0LL;
    if ( v3 )
      v5 = *((_QWORD *)v3 + 72);
    v6 = EnsureStoreLicenseForPackageActivation2(
           (char *)a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
           *((_QWORD *)a1 + 11) + 228LL,
           v5);
    if ( v6 >= 0 )
      v6 = 0;
    if ( v4 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v4 + 74))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64), v7);
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
