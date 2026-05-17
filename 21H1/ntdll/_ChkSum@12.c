/*
 * XREFs of _ChkSum@12 @ 0x4B35A6BB
 * Callers:
 *     _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF (_LdrVerifyMappedImageMatchesChecksum@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ChkSum(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int i; // edi
  int v5; // eax

  for ( i = a3; i; --i )
  {
    v5 = *a2++;
    a1 = ((v5 + a1) >> 16) + (unsigned __int16)(v5 + a1);
  }
  return a1 + HIWORD(a1);
}
