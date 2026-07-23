/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140712920
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140649EA0 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 * Callees:
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v4; // rcx
  char *NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  _QWORD *i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 < 2 ? *(_QWORD *)(a1 + 8LL * v2 + 8) : *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16);
    if ( *(_WORD *)(v4 + 66) && *(_BYTE *)(v4 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 40) != -1 )
    {
      if ( !a2 )
        goto LABEL_17;
      NextElement = CmListGetNextElement((_QWORD **)(*(_QWORD *)(a1 + 8) + 208LL), &i, 32);
      if ( !NextElement )
        goto LABEL_17;
      while ( 1 )
      {
        v8 = *((_DWORD *)NextElement + 17);
        if ( v8 == 2 || v8 == 11 )
          break;
        NextElement = CmListGetNextElement((_QWORD **)(v6 + 208), &i, 32);
        if ( !NextElement )
          return (char)NextElement;
      }
      if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v7) )
      {
LABEL_17:
        LOBYTE(NextElement) = 0;
        return (char)NextElement;
      }
      break;
    }
  }
  LOBYTE(NextElement) = 1;
  return (char)NextElement;
}
