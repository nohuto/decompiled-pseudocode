/*
 * XREFs of _NtGdiMonoBitmap@4 @ 0x21E1CE
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QBEHXZ @ 0xA6110 (-bIsMonochrome@XEPALOBJ@@QBEHXZ.c)
 */

BOOL __stdcall NtGdiMonoBitmap(int a1)
{
  int v1; // edx
  BOOL IsMonochrome; // esi
  int v3; // edx

  v1 = HmgShareLockCheck(a1, 5);
  if ( !v1 )
    return 0;
  a1 = *(_DWORD *)(v1 + 88);
  IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a1);
  DEC_SHARE_REF_CNT(v3);
  return IsMonochrome;
}
