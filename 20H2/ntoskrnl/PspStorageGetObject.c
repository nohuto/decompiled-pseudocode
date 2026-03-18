/*
 * XREFs of PspStorageGetObject @ 0x1402005B0
 * Callers:
 *     PsGetSiloContext @ 0x140200580 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x140908280 (PsFreeSiloContextSlot.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx

  if ( a2 < 0x20 )
    goto LABEL_2;
  a2 -= 32;
  if ( a2 < 0x100 )
  {
    a1 = *(_QWORD *)(a1 + 512);
    if ( !a1 )
      return 3221226021LL;
LABEL_2:
    v4 = a1 + 16LL * a2;
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 )
      ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease(v4);
    if ( v5 )
    {
      *a3 = v5;
      return 0LL;
    }
    return 3221226021LL;
  }
  return 3221225485LL;
}
