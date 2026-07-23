/*
 * XREFs of MiInitializeKernelCfg @ 0x140A5485C
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x14037134C (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FAD28 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407560C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x14076F114 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408DA100 (MiProcessKernelCfgAddressTakenImports.c)
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

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v1 = qword_140C4F9A8;
  v2 = MiReservePtes((__int64)&qword_140C4EDC0, 0x20u);
  if ( !v2 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v1, (__int64)(v2 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140C4CAB8 = v1;
    qword_140C4CAB0 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v1 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140C4CAC0 = 0LL;
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      guard_icall_bitmap = qword_140C4CAB8 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
