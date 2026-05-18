/*
 * XREFs of sub_18001A250 @ 0x18001A250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CAEC @ 0x18001CAEC (sub_18001CAEC.c)
 */

char __fastcall sub_18001A250(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 *a5, _DWORD *a6)
{
  char v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = sub_18001CAEC(*(_QWORD *)(a1 + 24), *a2, *a3, *a4, *a5, *a6), v8 = 0, v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
