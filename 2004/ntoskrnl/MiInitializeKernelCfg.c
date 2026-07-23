/*
 * XREFs of MiInitializeKernelCfg @ 0x140A541DC
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiProcessKernelCfgImage @ 0x14036F3FC (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x1404F7498 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407474E0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408D42C0 (MiProcessKernelCfgAddressTakenImports.c)
 */

NTSTATUS __fastcall MiInitializeKernelCfg(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  PVOID v9; // rcx
  PIMAGE_NT_HEADERS v10; // rax

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v5 = qword_140C4F928;
  v6 = MiReservePtes((__int64)&qword_140C4ED40, 0x20u, a3, a4);
  if ( !v6 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v5, (__int64)(v6 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140C4CA38 = v5;
    qword_140C4CA30 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v5 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140C4CA40 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
      {
        if ( ((_DWORD)i[13] & 0x2000) == 0 )
        {
          v9 = i[6];
          if ( v9 == PsNtosImageBase )
          {
            v10 = RtlImageNtHeader(v9);
            MiMarkKernelImageCfgBits((__int64)i, (__int64)v10);
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
      guard_icall_bitmap = qword_140C4CA38 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
