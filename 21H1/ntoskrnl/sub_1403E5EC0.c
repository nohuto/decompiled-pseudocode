/*
 * XREFs of sub_1403E5EC0 @ 0x1403E5EC0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x14031FCB0 (MmFreePagesFromMdl.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmUnmapReservedMapping @ 0x14052C170 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403E5EC0(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi
  ULONG v5; // edx
  ULONG v6; // edx

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(v3, v5);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePoolWithTag(v4, v6);
}
