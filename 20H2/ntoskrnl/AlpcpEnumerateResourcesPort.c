/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x14064ABE8
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x14064A6A0 (NtAlpcDeleteSectionView.c)
 *     AlpcpLocateSectionView @ 0x14064AB2C (AlpcpLocateSectionView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406BE4C0 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 *v4; // rdi
  __int64 **v5; // r14
  int v7; // esi
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v5 = (__int64 **)(a1 + 336);
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 328, 0LL);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = AlpcpViewSearchCallbackFunction(i + 6, a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v7;
}
