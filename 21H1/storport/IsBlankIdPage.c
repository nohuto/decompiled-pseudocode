/*
 * XREFs of IsBlankIdPage @ 0x1C00107A4
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C00162D8 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0010988 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C00109D8 (StorInitVPDIdEnumeration.c)
 */

char __fastcall IsBlankIdPage(__int64 a1)
{
  char result; // al
  char v2; // bl
  __int64 NextVPDIdDescriptor; // rax
  char v4; // r10
  char v5; // r11
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  result = 0;
  v2 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    if ( (unsigned __int8)StorInitVPDIdEnumeration(&v8, a1) )
    {
LABEL_3:
      while ( 1 )
      {
        NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(&v8);
        if ( !NextVPDIdDescriptor )
          break;
        v6 = *(_BYTE *)(NextVPDIdDescriptor + 3);
        v7 = 0;
        v2 = v4;
        if ( v6 )
        {
          while ( (*(_BYTE *)(v7 + NextVPDIdDescriptor + 4) & 0xDF) == 0 )
          {
            v7 += v4;
            if ( v7 >= v6 )
              goto LABEL_3;
          }
          v5 = v4;
          break;
        }
      }
      if ( v2 && !v5 )
        return v4;
    }
    return 0;
  }
  return result;
}
