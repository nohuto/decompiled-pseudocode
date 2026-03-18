/*
 * XREFs of ?IsValidFONTSIGNATURE@@YG_NPBXKJ@Z @ 0x20A2B7
 * Callers:
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __userpurge IsValidFONTSIGNATURE@<al>(unsigned int a1@<edx>, const void *a2, unsigned int a3, int a4)
{
  return !a2 || (int)a2 > 0 && (unsigned int)a2 < a1 && a1 > 0x18 && (unsigned int)a2 < a1 - 24;
}
