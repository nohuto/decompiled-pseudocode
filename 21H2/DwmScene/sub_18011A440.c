/*
 * XREFs of sub_18011A440 @ 0x18011A440
 * Callers:
 *     sub_1801187E4 @ 0x1801187E4 (sub_1801187E4.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 * Callees:
 *     strchr @ 0x1801239A0 (strchr.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_18011A440(__int64 a1, char a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  char v8; // dl
  unsigned __int64 v9; // rcx
  __int64 v11; // r10
  char v12; // bp
  unsigned __int64 v13; // rbx
  char *v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int16 v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+2Ah] [rbp-2Eh]

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a1 + v6) );
  if ( v6 < 0x12 )
    return 0;
  v7 = 0LL;
  v8 = 2 - (v6 < 0x18);
  v9 = 16LL;
  if ( !a2 )
  {
    do
    {
      while ( v7 < v9 )
      {
        LOBYTE(a4) = *(_BYTE *)(a1 + v7);
        if ( (unsigned __int8)(a4 - 43) > 0x2Fu || (v11 = 0xFFFFFFC07FF1LL, !_bittest64(&v11, (unsigned int)(a4 - 43))) )
        {
          if ( (unsigned __int8)(a4 - 97) > 0x19u )
            return 0;
        }
        ++v7;
      }
      if ( *(_BYTE *)(a1 + v7) != 46 )
        v9 = 22LL;
      --v8;
    }
    while ( v8 );
    v12 = (v9 == 22) + 1;
    while ( *(_BYTE *)(a1 + v7) == 46 )
    {
      v13 = v7 + 1;
      if ( v13 >= v6 )
        break;
      v18 = 0LL;
      v19 = 0;
      v20 = 0;
      v14 = strchr((const char *)(a1 + v13), 46);
      v15 = (unsigned __int64)&v14[-a1 - v13];
      if ( !v14 )
        v15 = v6 - v13;
      if ( v15 > 0xB )
        break;
      o_strncpy_s(&v18, 11LL, a1 + v13, v15);
      o__set_errno(0LL);
      if ( !(unsigned int)o_strtol(&v18, 0LL, 10LL) && (_BYTE)v18 != 48 && BYTE1(v18) )
        break;
      if ( *(_DWORD *)o__errno(v17, v16) == 34 )
        break;
      v7 = v15 + v13;
      if ( v7 >= v6 )
        return v12;
    }
    return 0;
  }
  do
  {
    if ( *(_BYTE *)(a1 + v9) == 46 )
      break;
    v9 = 22LL;
    --v8;
  }
  while ( v8 );
  return v8;
}
