/*
 * XREFs of _NtGdiGetDCforBitmap@4 @ 0x9DD2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetDCforBitmap(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = 0;
  v2 = HmgShareLockCheck(a1, 5);
  if ( v2 )
  {
    v1 = *(_DWORD *)(v2 + 108);
    DEC_SHARE_REF_CNT(v2);
  }
  return v1;
}
