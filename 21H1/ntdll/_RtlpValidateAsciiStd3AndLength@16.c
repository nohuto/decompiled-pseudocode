/*
 * XREFs of _RtlpValidateAsciiStd3AndLength@16 @ 0x4B2E5A9B
 * Callers:
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 * Callees:
 *     _FindEmailAt@8 @ 0x4B3651DC (_FindEmailAt@8.c)
 *     _ValidateStd3Range@4 @ 0x4B3655A6 (_ValidateStd3Range@4.c)
 */

char __fastcall RtlpValidateAsciiStd3AndLength(unsigned __int16 *a1, int a2, char a3, char a4)
{
  unsigned int v5; // edi
  char v6; // al
  char *v7; // ecx
  unsigned __int16 *v8; // esi
  unsigned __int16 *v9; // edx
  int EmailAt; // eax
  unsigned __int16 *v12; // [esp+10h] [ebp-8h]
  char *v13; // [esp+14h] [ebp-4h]

  LOWORD(v5) = 46;
  v6 = a3;
  v7 = (char *)(a1 - 1);
  v13 = v7;
  v8 = &a1[a2];
  if ( a3 )
  {
    EmailAt = FindEmailAt(a1, a2);
    v7 = (char *)(a1 - 1);
    v12 = &a1[EmailAt];
    v6 = a3;
  }
  else
  {
    v12 = (unsigned __int16 *)v7;
  }
  if ( v12 != v8 && a2 > 0 )
  {
    v9 = a1;
    if ( a1 == v8 )
    {
LABEL_15:
      if ( a3
        || (int)(((char *)v8 - v7) & 0xFFFFFFFE) <= 128
        && v8 - v12 <= ((_WORD)v5 == 46) + 255
        && (!a4 || (_WORD)v5 != 45) )
      {
        return 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = *v9;
        if ( v5 >= 0x7F )
          break;
        if ( v5 == (v6 != 0 ? 64 : 46) )
        {
          if ( a3 )
          {
            if ( v9 == a1 )
              return 0;
            a3 &= (v9 == v12 - 1) - 1;
          }
          else if ( v9 == (unsigned __int16 *)(v13 + 2)
                 || (int)(((char *)v9 - v13) & 0xFFFFFFFE) > 128
                 || a4 && v9 > a1 && *(v9 - 1) == 45 )
          {
            return 0;
          }
          v7 = (char *)v9;
          v13 = (char *)v9;
        }
        else
        {
          if ( a3 )
          {
            if ( !(_WORD)v5 )
              return 0;
          }
          else if ( a4
                 && ((_WORD)v5 == 45 && v9 == (unsigned __int16 *)(v13 + 2) || !(unsigned __int8)ValidateStd3Range(*v9))
                 || v5 < 0x20 )
          {
            return 0;
          }
          v7 = v13;
        }
        if ( ++v9 == v8 )
          goto LABEL_15;
        v6 = a3;
      }
    }
  }
  return 0;
}
