/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x140888820
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x140888820 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x1408880A0 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x140888820 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v6; // dl
  char *Buffer; // rax
  char *v8; // rbx
  _STRING v9; // xmm1
  __int16 v10; // ax
  unsigned int v12; // r8d
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  _STRING RemainingName; // [rsp+20h] [rbp-48h] BYREF
  _STRING FirstName; // [rsp+30h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  if ( DbcsName->Length )
  {
    if ( WildCardsPermissible )
    {
      if ( Length == 1 )
      {
        v6 = *DbcsName->Buffer;
        if ( v6 == 46 || v6 == 34 )
          return 1;
      }
      if ( Length == 2 )
      {
        Buffer = DbcsName->Buffer;
        if ( *(_WORD *)Buffer == 11822 || *Buffer == 34 && Buffer[1] == 34 )
          return 1;
      }
    }
    v8 = DbcsName->Buffer;
    if ( *v8 != 92 )
      goto LABEL_14;
    if ( LeadingBackslashPermissible )
    {
      if ( Length <= 1u )
        return 1;
      ++v8;
      --Length;
      DbcsName->Buffer = v8;
      --DbcsName->MaximumLength;
      DbcsName->Length = Length;
LABEL_14:
      if ( PathNamePermissible )
      {
        v9 = *DbcsName;
        v10 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
        FirstName = 0LL;
        RemainingName = v9;
        if ( v10 )
        {
          while ( *(_BYTE *)_mm_srli_si128((__m128i)v9, 8).m128i_i8[0] != 92 )
          {
            Path = v9;
            FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
            Path = FirstName;
            if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
              break;
            if ( !RemainingName.Length )
              return 1;
            v9 = RemainingName;
          }
          return 0;
        }
      }
      else
      {
        if ( Length > 0xFFu )
          return 0;
        v12 = 0;
        if ( Length )
        {
          do
          {
            v13 = (unsigned __int8)v8[v12];
            if ( (unsigned __int8)v13 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v13] )
            {
              if ( v12 == Length - 1 )
                return 0;
              ++v12;
            }
            else if ( (v13 & 0x80u) == 0LL
                   && ((WildCardsPermissible != 0 ? 10 : 2) & *((unsigned __int8 *)qword_140011B50 + v13)) == 0 )
            {
              return 0;
            }
            ++v12;
          }
          while ( v12 < Length );
          if ( (unsigned __int8)v13 <= 0x2Eu )
          {
            v14 = 0x400500000000LL;
            if ( _bittest64(&v14, v13) )
              return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
