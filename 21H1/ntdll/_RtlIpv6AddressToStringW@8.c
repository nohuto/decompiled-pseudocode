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
  __int16 v3; // ax
  __int16 v4; // ax
  const wchar_t *v5; // ecx
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
  size_t v18; // [esp-1Ch] [ebp-3Ch]
  size_t v19; // [esp-18h] [ebp-38h]
  size_t v20; // [esp-18h] [ebp-38h]
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-8h] [ebp-28h]
  size_t v23; // [esp-8h] [ebp-28h]
  const wchar_t *v24; // [esp+0h] [ebp-20h]
  signed int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+10h] [ebp-10h]
  PWSTR v27; // [esp+14h] [ebp-Ch]
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
    v3 = *((_WORD *)Addr + 4);
    if ( v3 )
    {
      if ( v3 == -1 && !*((_WORD *)Addr + 5) )
      {
        HIDWORD(v19) = L"::ffff:0:%u.%u.%u.%u";
        LODWORD(v19) = 46;
        v6 = swprintf_s(
               (wchar_t *const)S,
               v19,
               (const wchar_t *const)*((unsigned __int8 *)Addr + 12),
               *((unsigned __int8 *)Addr + 13),
               *((unsigned __int8 *)Addr + 14),
               *((unsigned __int8 *)Addr + 15));
        return &S[v6];
      }
    }
    else
    {
      v4 = *((_WORD *)Addr + 5);
      if ( !v4 )
      {
        v5 = (const wchar_t *)&dword_4B2850A4;
        goto LABEL_11;
      }
      if ( v4 == -1 )
      {
        v5 = "ffff:";
LABEL_11:
        HIDWORD(v18) = L"::%hs%u.%u.%u.%u";
        LODWORD(v18) = 46;
        v6 = swprintf_s(
               (wchar_t *const)S,
               v18,
               v5,
               *((unsigned __int8 *)Addr + 12),
               *((unsigned __int8 *)Addr + 13),
               *((unsigned __int8 *)Addr + 14),
               *((unsigned __int8 *)Addr + 15));
        return &S[v6];
      }
    }
  }
  v8 = 0;
  v9 = 0;
  v29 = 0;
  v26 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v25 = 6;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( *((_WORD *)Addr + v10) )
    {
      v9 = v10 + 1;
      v26 = v10 + 1;
    }
    else
    {
      v12 = v10 - v9 + 1;
      v9 = v26;
      if ( v12 <= v29 - v11 )
      {
        v8 = v29;
      }
      else
      {
        v8 = v10 + 1;
        v11 = v26;
        v29 = v10 + 1;
      }
    }
    ++v10;
  }
  while ( v10 < v25 );
  v28 = v11;
  v13 = v8 - v11;
  v14 = (wchar_t *)S;
  if ( v13 > 1 )
  {
    v15 = v28;
  }
  else
  {
    v8 = 0;
    v15 = 0;
    v29 = 0;
    v28 = 0;
  }
  do
  {
    if ( v15 > v2 || v2 >= v8 )
    {
      if ( v2 && v2 != v8 )
      {
        HIDWORD(v23) = L":";
        LODWORD(v23) = ((char *)v27 - (char *)v14) >> 1;
        v14 += swprintf_s(v14, v23, v24);
      }
      LOBYTE(v17) = HIBYTE(*((_WORD *)Addr + v2));
      HIBYTE(v17) = *((_WORD *)Addr + v2);
      HIDWORD(v21) = L"%x";
      LODWORD(v21) = ((char *)v27 - (char *)v14) >> 1;
      v16 = swprintf_s(v14, v21, (const wchar_t *const)v17);
      v8 = v29;
    }
    else
    {
      HIDWORD(v22) = L"::";
      LODWORD(v22) = ((char *)v27 - (char *)v14) >> 1;
      v16 = swprintf_s(v14, v22, v24);
      v8 = v29;
      v2 = v29 - 1;
    }
    v14 += v16;
    v15 = v28;
    ++v2;
  }
  while ( v2 < v25 );
  if ( (unsigned int)v25 < 8 )
  {
    HIDWORD(v20) = L":%u.%u.%u.%u";
    LODWORD(v20) = ((char *)v27 - (char *)v14) >> 1;
    v14 += swprintf_s(
             v14,
             v20,
             (const wchar_t *const)*((unsigned __int8 *)Addr + 12),
             *((unsigned __int8 *)Addr + 13),
             *((unsigned __int8 *)Addr + 14),
             *((unsigned __int8 *)Addr + 15));
  }
  return (PWSTR)v14;
}
