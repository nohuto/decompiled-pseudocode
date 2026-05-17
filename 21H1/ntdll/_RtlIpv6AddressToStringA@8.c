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
  USHORT v14; // ax
  USHORT v15; // ax
  const char *v16; // edx
  int v17; // eax
  signed int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h]
  PSTR v20; // [esp+14h] [ebp-Ch]
  signed int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v18 = 8;
  v20 = S + 46;
  if ( !Addr->u.Word[0] && !Addr->u.Word[1] && !Addr->u.Word[2] && !Addr->u.Word[3] && Addr->u.Word[6] )
  {
    v14 = Addr->u.Word[4];
    if ( v14 )
    {
      if ( v14 == 0xFFFF && !Addr->u.Word[5] )
      {
        v17 = sprintf_s(
                S,
                0x2Eu,
                "::ffff:0:%u.%u.%u.%u",
                Addr->u.Byte[12],
                Addr->u.Byte[13],
                Addr->u.Byte[14],
                Addr->u.Byte[15]);
        return &S[v17];
      }
    }
    else
    {
      v15 = Addr->u.Word[5];
      if ( !v15 )
      {
        v16 = (const char *)&dword_4B2850A4;
        goto LABEL_33;
      }
      if ( v15 == 0xFFFF )
      {
        v16 = "ffff:";
LABEL_33:
        v17 = sprintf_s(
                S,
                0x2Eu,
                "::%hs%u.%u.%u.%u",
                v16,
                Addr->u.Byte[12],
                Addr->u.Byte[13],
                Addr->u.Byte[14],
                Addr->u.Byte[15]);
        return &S[v17];
      }
    }
  }
  v3 = 0;
  v4 = 0;
  v22 = 0;
  v19 = 0;
  if ( (Addr->u.Word[4] & 0xFFFD) == 0 && Addr->u.Word[5] == 0xFE5E )
    v18 = 6;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( Addr->u.Word[v5] )
    {
      v4 = v5 + 1;
      v19 = v5 + 1;
    }
    else
    {
      v7 = v5 - v4 + 1;
      v4 = v19;
      if ( v7 <= v22 - v6 )
      {
        v3 = v22;
      }
      else
      {
        v3 = v5 + 1;
        v6 = v19;
        v22 = v5 + 1;
      }
    }
    ++v5;
  }
  while ( v5 < v18 );
  v21 = v6;
  v8 = v3 - v6;
  v9 = S;
  if ( v8 <= 1 )
  {
    v3 = 0;
    v10 = 0;
    v22 = 0;
    v21 = 0;
  }
  else
  {
    v10 = v21;
  }
  do
  {
    if ( v10 > v2 || v2 >= v3 )
    {
      if ( v2 && v2 != v3 )
        v9 += sprintf_s(v9, v20 - v9, ":");
      LOBYTE(v11) = HIBYTE(Addr->u.Word[v2]);
      HIBYTE(v11) = Addr->u.Word[v2];
      v12 = sprintf_s(v9, v20 - v9, "%x", v11);
      v3 = v22;
    }
    else
    {
      v12 = sprintf_s(v9, v20 - v9, "::");
      v3 = v22;
      v2 = v22 - 1;
    }
    v9 += v12;
    v10 = v21;
    ++v2;
  }
  while ( v2 < v18 );
  if ( (unsigned int)v18 < 8 )
    v9 += sprintf_s(
            v9,
            v20 - v9,
            ":%u.%u.%u.%u",
            Addr->u.Byte[12],
            Addr->u.Byte[13],
            Addr->u.Byte[14],
            Addr->u.Byte[15]);
  return v9;
}
