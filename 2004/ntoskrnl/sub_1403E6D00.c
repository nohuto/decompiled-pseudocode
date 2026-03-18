/*
 * XREFs of sub_1403E6D00 @ 0x1403E6D00
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x14035D760 (MmFreePagesFromMdl.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403E6D00(void *a1)
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
