/*
 * XREFs of RtlIpv6AddressToStringA @ 0x14036A390
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x140586BD0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x1403D45F0 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // edx
  __int64 i; // r8
  int v11; // r9d
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r13
  int v21; // eax
  __int16 v23; // ax
  __int16 v24; // dx
  int v25; // ecx
  const char *v26; // r9
  int v27; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( *(_DWORD *)Addr || *((_WORD *)Addr + 2) || *((_WORD *)Addr + 3) || !*((_WORD *)Addr + 6) )
    goto LABEL_5;
  v23 = *((_WORD *)Addr + 4);
  if ( v23 )
  {
    if ( v23 == -1 && !*((_WORD *)Addr + 5) )
    {
      v27 = sprintf_s(
              S,
              0x2EuLL,
              "::ffff:0:%u.%u.%u.%u",
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v4[v27];
    }
  }
  else
  {
    v24 = *((_WORD *)Addr + 5);
    if ( ((v24 + 1) & 0xFFFE) == 0 )
    {
      v25 = *((unsigned __int8 *)Addr + 14);
      v26 = &Src;
      if ( v24 )
        v26 = "ffff:";
      v27 = sprintf_s(
              v4,
              v3 - v4,
              "::%hs%u.%u.%u.%u",
              v26,
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              v25,
              *((unsigned __int8 *)Addr + 15));
      return &v4[v27];
    }
  }
LABEL_5:
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v9 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v11 = v9 + 1;
    if ( *((_WORD *)Addr + i) )
    {
      v8 = v9 + 1;
    }
    else
    {
      v12 = v6 - v7;
      v13 = v9 - v8 + 1;
      v14 = v8;
      if ( v13 <= v6 - v7 )
        v14 = v7;
      v7 = v14;
      v15 = v11;
      if ( v13 <= v12 )
        v15 = v6;
      v6 = v15;
    }
    v9 = v11;
  }
  v16 = 0;
  if ( v6 - v7 > 1 )
    v16 = v6;
  v17 = v16;
  v18 = 0;
  if ( v6 - v7 > 1 )
    v18 = v7;
  v19 = 0LL;
  v20 = v18;
  do
  {
    if ( v19 >= v17 || v20 > v19 )
    {
      if ( v19 && v19 != v17 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v21 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v19), 8));
    }
    else
    {
      v21 = sprintf_s(v4, v3 - v4, "::");
      v19 = v17 - 1;
    }
    ++v19;
    v4 += v21;
  }
  while ( v19 < v2 );
  if ( v2 < 8 )
    v4 += sprintf_s(
            v4,
            v3 - v4,
            ":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v4;
}
