/*
 * XREFs of MiInitializeKernelCfg @ 0x140A4E4DC
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiProcessKernelCfgImage @ 0x14036E7CC (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x1404F6E48 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140745960 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x14075E734 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408D2F70 (MiProcessKernelCfgAddressTakenImports.c)
 */

NTSTATUS MiInitializeKernelCfg()
{
  NTSTATUS result; // eax
  unsigned __int64 v1; // rbx
  ULONG_PTR v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  PVOID v5; // rcx
  PIMAGE_NT_HEADERS v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v1 = qword_140C4FA68;
  v2 = MiReservePtes((__int64)&qword_140C4EE80, 32LL);
  if ( !v2 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v1, (__int64)(v2 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140C4CB78 = v1;
    qword_140C4CB70 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v1 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140C4CB80 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
      {
        if ( ((_DWORD)i[13] & 0x2000) == 0 )
        {
          v5 = i[6];
          if ( v5 == PsNtosImageBase )
          {
            v6 = RtlImageNtHeader(v5);
            MiMarkKernelImageCfgBits((__int64)i, (__int64)v6);
            *((_DWORD *)i + 26) |= 0x2000u;
          }
          else
          {
            MiProcessKernelCfgImageLoadConfig((__int64)i, 0LL);
            MiProcessKernelCfgImage((__int64)i, 0, 0LL);
          }
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
      guard_icall_bitmap = qword_140C4CB78 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
