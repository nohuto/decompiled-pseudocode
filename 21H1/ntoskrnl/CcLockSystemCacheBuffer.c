/*
 * XREFs of CcLockSystemCacheBuffer @ 0x1404E4DD8
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14028A9B0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(void *a1, PMDL *a2, ULONG a3, int a4, int *a5)
{
  PVOID MappedSystemVa; // rsi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  int v10; // ecx

  MappedSystemVa = 0LL;
  *a5 = 0;
  Mdl = IoAllocateMdl(a1, a3, 0, 0, 0LL);
  v9 = Mdl;
  if ( !Mdl )
  {
    *a5 = -1073741670;
LABEL_10:
    if ( v9 )
    {
      MmUnlockPages(v9);
      IoFreeMdl(v9);
      v9 = 0LL;
    }
    goto LABEL_12;
  }
  MiProbeAndLockPages(Mdl, 0, a4 != 0);
  v10 = *a5;
  if ( *a5 < 0 )
    goto LABEL_10;
  if ( (v9->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = v9->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
    v10 = *a5;
  }
  if ( !MappedSystemVa )
  {
    v10 = -1073741670;
    *a5 = -1073741670;
  }
  if ( v10 < 0 )
    goto LABEL_10;
LABEL_12:
  *a2 = v9;
  return MappedSystemVa;
}
