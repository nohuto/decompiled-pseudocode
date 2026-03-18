/*
 * XREFs of PiSwFindBusRelations @ 0x14072C714
 * Callers:
 *     PiSwFindChildren @ 0x14072C6EC (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
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
