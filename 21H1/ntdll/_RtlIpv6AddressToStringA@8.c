/*
 * XREFs of _RtlIpv6AddressToStringA@8 @ 0x4B2F2780
 * Callers:
 *     _RtlIpv6AddressToStringExA@20 @ 0x4B361AC0 (_RtlIpv6AddressToStringExA@20.c)
 * Callees:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  signed int v2; // esi
  signed int v3; // ecx
  int v4; // eax
  signed int v5; // edx
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  char *v9; // ebx
  signed int v10; // eax
  unsigned __int16 v11; // cx
  int v12; // eax
  __int16 v14; // ax
  __int16 v15; // ax
  const char *v16; // edx
  int v17; // eax
  size_t v18; // [esp-1Ch] [ebp-3Ch]
  size_t v19; // [esp-18h] [ebp-38h]
  size_t v20; // [esp-18h] [ebp-38h]
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-8h] [ebp-28h]
  size_t v23; // [esp-8h] [ebp-28h]
  const char *v24; // [esp+0h] [ebp-20h]
  signed int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+10h] [ebp-10h]
  PSTR v27; // [esp+14h] [ebp-Ch]
  signed int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v25 = 8;
  v27 = S + 46;
  if ( !*(_WORD *)Addr
    && !*((_WORD *)Addr + 1)
    && !*((_WORD *)Addr + 2)
    && !*((_WORD *)Addr + 3)
    && *((_WORD *)Addr + 6) )
  {
    v14 = *((_WORD *)Addr + 4);
    if ( v14 )
    {
      if ( v14 == -1 && !*((_WORD *)Addr + 5) )
      {
        HIDWORD(v19) = "::ffff:0:%u.%u.%u.%u";
        LODWORD(v19) = 46;
        v17 = sprintf_s(
                S,
                v19,
                (const char *const)*((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &S[v17];
      }
    }
    else
    {
      v15 = *((_WORD *)Addr + 5);
      if ( !v15 )
      {
        v16 = (const char *)&dword_4B2850A4;
        goto LABEL_33;
      }
      if ( v15 == -1 )
      {
        v16 = "ffff:";
LABEL_33:
        HIDWORD(v18) = "::%hs%u.%u.%u.%u";
        LODWORD(v18) = 46;
        v17 = sprintf_s(
                S,
                v18,
                v16,
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &S[v17];
      }
    }
  }
  v3 = 0;
  v4 = 0;
  v29 = 0;
  v26 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v25 = 6;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( *((_WORD *)Addr + v5) )
    {
      v4 = v5 + 1;
      v26 = v5 + 1;
    }
    else
    {
      v7 = v5 - v4 + 1;
      v4 = v26;
      if ( v7 <= v29 - v6 )
      {
        v3 = v29;
      }
      else
      {
        v3 = v5 + 1;
        v6 = v26;
        v29 = v5 + 1;
      }
    }
    ++v5;
  }
  while ( v5 < v25 );
  v28 = v6;
  v8 = v3 - v6;
  v9 = S;
  if ( v8 <= 1 )
  {
    v3 = 0;
    v10 = 0;
    v29 = 0;
    v28 = 0;
  }
  else
  {
    v10 = v28;
  }
  do
  {
    if ( v10 > v2 || v2 >= v3 )
    {
      if ( v2 && v2 != v3 )
      {
        HIDWORD(v22) = ":";
        LODWORD(v22) = v27 - v9;
        v9 += sprintf_s(v9, v22, v24);
      }
      LOBYTE(v11) = HIBYTE(*((_WORD *)Addr + v2));
      HIBYTE(v11) = *((_WORD *)Addr + v2);
      HIDWORD(v21) = "%x";
      LODWORD(v21) = v27 - v9;
      v12 = sprintf_s(v9, v21, (const char *const)v11);
      v3 = v29;
    }
    else
    {
      HIDWORD(v23) = "::";
      LODWORD(v23) = v27 - v9;
      v12 = sprintf_s(v9, v23, v24);
      v3 = v29;
      v2 = v29 - 1;
    }
    v9 += v12;
    v10 = v28;
    ++v2;
  }
  while ( v2 < v25 );
  if ( (unsigned int)v25 < 8 )
  {
    HIDWORD(v20) = ":%u.%u.%u.%u";
    LODWORD(v20) = v27 - v9;
    v9 += sprintf_s(
            v9,
            v20,
            (const char *const)*((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  }
  return v9;
}
