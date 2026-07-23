/*
 * XREFs of PiSwFindBusRelations @ 0x140747244
 * Callers:
 *     PiSwCloseDescendants @ 0x140739024 (PiSwCloseDescendants.c)
 *     PiSwFindChildren @ 0x14074721C (PiSwFindChildren.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int64 a1)
{
  bool v1; // zf
  _OWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  Buffer[1] = 0LL;
  if ( v1 )
    return 0LL;
  Buffer[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, Buffer);
}
