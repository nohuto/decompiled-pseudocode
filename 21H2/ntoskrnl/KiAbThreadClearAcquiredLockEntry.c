/*
 * XREFs of KiAbThreadClearAcquiredLockEntry @ 0x140355B10
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140355300 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbThreadClearAcquiredLockEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // r11
  bool v7; // zf
  __int64 result; // rax

  v4 = (*(char *)(a1 + 792) | *(char *)(a1 + 870)) ^ 0x3F;
  v5 = a2 & 0x7FFFFFFFFFFFFFFCLL;
  v6 = a1;
  v7 = !_BitScanReverse((unsigned int *)&a1, v4);
  if ( v7 )
    return 0LL;
  while ( 1 )
  {
    v4 &= ~(1 << a1);
    result = *(_QWORD *)(v6 + 800) + 96 * a1;
    if ( (*(_BYTE *)(result + 26) & 1) != 0
      && (*(_DWORD *)(result + 32) & 1) == 0
      && (*(_QWORD *)(result + 32) & 0x7FFFFFFFFFFFFFFCLL) == v5
      && *(_DWORD *)(result + 40) == a3 )
    {
      *(_BYTE *)(result + 26) &= ~1u;
      if ( *(_QWORD *)(result + 32) )
        break;
    }
    v7 = !_BitScanReverse((unsigned int *)&a1, v4);
    if ( v7 )
      return 0LL;
  }
  return result;
}
