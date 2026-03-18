/*
 * XREFs of ?IsValidFONTDIFF@@YG_NPBXKJ@Z @ 0x20A28F
 * Callers:
 *     ?IsValidFONTSIM@@YG_NPBXKJ@Z @ 0x20A2DF (-IsValidFONTSIM@@YG_NPBXKJ@Z.c)
 * Callees:
 *     <none>
 */

bool __userpurge IsValidFONTDIFF@<al>(unsigned int a1@<edx>, const void *a2, unsigned int a3, int a4)
{
  return !a2 || (int)a2 > 0 && (unsigned int)a2 < a1 && a1 > 0x14 && (unsigned int)a2 < a1 - 20;
}
