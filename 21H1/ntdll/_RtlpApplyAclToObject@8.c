/*
 * XREFs of _RtlpApplyAclToObject@8 @ 0x4B2A8EDE
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 */

void __fastcall RtlpApplyAclToObject(int a1, GENERIC_MAPPING *a2)
{
  unsigned int v3; // ecx
  char *v4; // esi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  int GenericAll; // eax
  GENERIC_MAPPING *v8; // [esp+4h] [ebp-8h]
  unsigned int i; // [esp+8h] [ebp-4h]

  v8 = a2;
  if ( a1 )
  {
    v3 = 0;
    v4 = (char *)(a1 + 8);
    for ( i = 0; v3 < *(unsigned __int16 *)(a1 + 4); i = v3 )
    {
      v5 = *v4;
      if ( ((unsigned __int8)*v4 <= 8u || v5 <= 0xAu || (unsigned __int8)(v5 - 13) <= 1u) && (v4[1] & 8) == 0 )
      {
        RtlMapGenericMask((PACCESS_MASK)v4 + 1, a2);
        v6 = *v4;
        if ( !*v4 || v6 == 1 || v6 == 4 || v6 == 5 || v6 == 6 || v6 == 9 || v6 == 10 )
        {
          a2 = v8;
          GenericAll = v8->GenericAll;
        }
        else
        {
          a2 = v8;
          GenericAll = v8->GenericAll | 0x1000000;
        }
        v3 = i;
        *((_DWORD *)v4 + 1) &= GenericAll;
      }
      ++v3;
      v4 += *((unsigned __int16 *)v4 + 1);
    }
  }
}
