/*
 * XREFs of _RtlIpv6AddressToStringW@8 @ 0x4B361DF0
 * Callers:
 *     _RtlIpv6AddressToStringExW@20 @ 0x4B361CE0 (_RtlIpv6AddressToStringExW@20.c)
 * Callees:
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

PWSTR __stdcall RtlIpv6AddressToStringW(const struct in6_addr *Addr, PWSTR S)
{
  signed int v2; // edi
  USHORT v3; // ax
  USHORT v4; // ax
  int *v5; // ecx
  int v6; // eax
  signed int v8; // ecx
  int v9; // eax
  signed int v10; // edx
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  wchar_t *v14; // ebx
  signed int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // cx
  signed int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h]
  PWSTR v20; // [esp+14h] [ebp-Ch]
  signed int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v18 = 8;
  v20 = S + 46;
  if ( !Addr->u.Word[0] && !Addr->u.Word[1] && !Addr->u.Word[2] && !Addr->u.Word[3] && Addr->u.Word[6] )
  {
    v3 = Addr->u.Word[4];
    if ( v3 )
    {
      if ( v3 == 0xFFFF && !Addr->u.Word[5] )
      {
        v6 = swprintf_s(
               S,
               0x2Eu,
               L"::ffff:0:%u.%u.%u.%u",
               Addr->u.Byte[12],
               Addr->u.Byte[13],
               Addr->u.Byte[14],
               Addr->u.Byte[15]);
        return &S[v6];
      }
    }
    else
    {
      v4 = Addr->u.Word[5];
      if ( !v4 )
      {
        v5 = &dword_4B2850A4;
        goto LABEL_11;
      }
      if ( v4 == 0xFFFF )
      {
        v5 = (int *)"ffff:";
LABEL_11:
        v6 = swprintf_s(
               S,
               0x2Eu,
               L"::%hs%u.%u.%u.%u",
               v5,
               Addr->u.Byte[12],
               Addr->u.Byte[13],
               Addr->u.Byte[14],
               Addr->u.Byte[15]);
        return &S[v6];
      }
    }
  }
  v8 = 0;
  v9 = 0;
  v22 = 0;
  v19 = 0;
  if ( (Addr->u.Word[4] & 0xFFFD) == 0 && Addr->u.Word[5] == 0xFE5E )
    v18 = 6;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( Addr->u.Word[v10] )
    {
      v9 = v10 + 1;
      v19 = v10 + 1;
    }
    else
    {
      v12 = v10 - v9 + 1;
      v9 = v19;
      if ( v12 <= v22 - v11 )
      {
        v8 = v22;
      }
      else
      {
        v8 = v10 + 1;
        v11 = v19;
        v22 = v10 + 1;
      }
    }
    ++v10;
  }
  while ( v10 < v18 );
  v21 = v11;
  v13 = v8 - v11;
  v14 = S;
  if ( v13 > 1 )
  {
    v15 = v21;
  }
  else
  {
    v8 = 0;
    v15 = 0;
    v22 = 0;
    v21 = 0;
  }
  do
  {
    if ( v15 > v2 || v2 >= v8 )
    {
      if ( v2 && v2 != v8 )
        v14 += swprintf_s(v14, v20 - v14, L":");
      LOBYTE(v17) = HIBYTE(Addr->u.Word[v2]);
      HIBYTE(v17) = Addr->u.Word[v2];
      v16 = swprintf_s(v14, v20 - v14, L"%x", v17);
      v8 = v22;
    }
    else
    {
      v16 = swprintf_s(v14, v20 - v14, L"::");
      v8 = v22;
      v2 = v22 - 1;
    }
    v14 += v16;
    v15 = v21;
    ++v2;
  }
  while ( v2 < v18 );
  if ( (unsigned int)v18 < 8 )
    v14 += swprintf_s(
             v14,
             v20 - v14,
             L":%u.%u.%u.%u",
             Addr->u.Byte[12],
             Addr->u.Byte[13],
             Addr->u.Byte[14],
             Addr->u.Byte[15]);
  return v14;
}
