/*
 * XREFs of ?IsValidFONTSIM@@YG_NPBXKJ@Z @ 0x20A2DF
 * Callers:
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     ?IsValidFONTDIFF@@YG_NPBXKJ@Z @ 0x20A28F (-IsValidFONTDIFF@@YG_NPBXKJ@Z.c)
 */

bool __userpurge IsValidFONTSIM@<al>(unsigned int a1@<edx>, int a2@<ecx>, char *a3, unsigned int a4, int a5)
{
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // [esp+0h] [ebp-8h]
  unsigned int v10; // [esp+0h] [ebp-8h]
  unsigned int v11; // [esp+0h] [ebp-8h]
  int v12; // [esp+4h] [ebp-4h]
  int v13; // [esp+4h] [ebp-4h]
  int v14; // [esp+4h] [ebp-4h]

  return !a3
      || (int)a3 > 0
      && (unsigned int)a3 < a1
      && a1 > 0xC
      && (unsigned int)a3 < a1 - 12
      && IsValidFONTDIFF(a1, *(const void **)&a3[a2], v9, v12)
      && IsValidFONTDIFF(v7, *(const void **)&a3[a2 + 4], v10, v13)
      && IsValidFONTDIFF(v8, *(const void **)&a3[a2 + 8], v11, v14);
}
