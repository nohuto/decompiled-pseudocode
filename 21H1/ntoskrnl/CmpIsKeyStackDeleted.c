/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140624560
 * Callers:
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x14069178C (CmpIsKeyDeleted.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 * Callees:
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rdx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v4 + 66) && *(_BYTE *)(v4 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 40) != -1 )
    {
      if ( !a2 )
        goto LABEL_7;
      NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 208LL, &i, 32LL);
      if ( !NextElement )
        goto LABEL_7;
      while ( 1 )
      {
        v8 = *(_DWORD *)(NextElement + 68);
        if ( v8 == 2 || v8 == 11 )
          break;
        NextElement = CmListGetNextElement(v7 + 208, &i, 32LL);
        if ( !NextElement )
          return NextElement;
      }
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) )
      {
LABEL_7:
        LOBYTE(NextElement) = 0;
        return NextElement;
      }
      break;
    }
  }
  LOBYTE(NextElement) = 1;
  return NextElement;
}
