/*
 * XREFs of _NtGdiGetColorSpaceforBitmap@4 @ 0x220E15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetColorSpaceforBitmap(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = 0;
  v2 = HmgShareLockCheck(a1, 5);
  if ( v2 )
  {
    if ( !*(_WORD *)(v2 + 64) && *(_DWORD *)(v2 + 124) )
      v1 = *(_DWORD *)(v2 + 128);
    DEC_SHARE_REF_CNT(v2);
  }
  return v1;
}
