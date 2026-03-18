/*
 * XREFs of CcDecrementPrivateVolumeUseCount @ 0x140538C04
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14053BE0C (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDecrementPrivateVolumeUseCount(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    KeBugCheckEx(0x34u, 0x1C18uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
