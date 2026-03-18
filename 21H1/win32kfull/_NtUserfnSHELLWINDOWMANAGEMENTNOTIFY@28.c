/*
 * XREFs of _NtUserfnSHELLWINDOWMANAGEMENTNOTIFY@28 @ 0x16CC7A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserfnSHELLWINDOWMANAGEMENTNOTIFY(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
