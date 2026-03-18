/*
 * XREFs of MiTransferPageFileOwnership @ 0x14026EDC4
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiUpdatePageFileBlockOwner @ 0x1405BC9E8 (MiUpdatePageFileBlockOwner.c)
 */

char __fastcall MiTransferPageFileOwnership(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char result; // al
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    result = (unsigned __int8)v3 >> 2;
    if ( (v3 & 4) != 0 )
    {
      HIDWORD(v5) = HIDWORD(v3);
      if ( qword_140C50780 )
      {
        if ( (v3 & 0x10) == 0 )
          v5 = ~qword_140C50780 & v3;
      }
      return MiUpdatePageFileBlockOwner(
               *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                         + 8LL * ((unsigned __int16)v3 >> 12)
                         + 16736),
               HIDWORD(v5),
               *(_QWORD *)(a1 + 8),
               a2);
    }
  }
  return result;
}
