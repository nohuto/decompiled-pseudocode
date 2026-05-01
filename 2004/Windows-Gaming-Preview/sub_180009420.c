/*
 * XREFs of sub_180009420 @ 0x180009420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 */

char __fastcall sub_180009420(__int64 a1, void **a2, size_t *a3, _QWORD *a4, size_t *a5, int *a6)
{
  char v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = sub_180005394(*(_QWORD *)(a1 + 24), *a2, *a3, *a4, *a5, *a6), v8 = 0, v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
