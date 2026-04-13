/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800AF6AC
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800ADB10 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AE10 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003B158 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003B1C0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<wchar_t>>(
        __int64 a1,
        __int64 a2,
        size_t a3,
        _BYTE *a4)
{
  char v8; // dl
  _BYTE *v9; // rcx
  size_t v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  size_t v13; // r14
  char v15; // al
  void **v16; // rax
  void **v17; // rax
  char v18; // al
  void **v19; // rdx
  char v20; // cl
  char v21; // cl
  char v22; // [rsp+20h] [rbp-40h]
  unsigned int v23; // [rsp+24h] [rbp-3Ch]
  void *v24[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-18h]

  if ( *a4 )
  {
    v8 = *a4;
    v9 = a4;
    do
    {
      v10 = a3 + 1;
      if ( v8 != *a4 )
        v10 = a3;
      a3 = v10;
      v8 = *++v9;
    }
    while ( *v9 );
  }
  v25 = 15LL;
  v24[2] = 0LL;
  LOBYTE(v24[0]) = 0;
  std::string::assign(v24, a3, 0);
  v23 = -2;
  v11 = 1LL;
  while ( 2 )
  {
    v22 = 0;
    v12 = 0LL;
    v13 = 0LL;
    if ( !a3 )
      break;
    do
    {
      while ( 1 )
      {
        v15 = a4[v12];
        if ( !v15 || v15 == *a4 )
          break;
        ++v12;
      }
      v16 = v24;
      if ( v25 >= 0x10 )
        v16 = (void **)v24[0];
      if ( !*((_BYTE *)v16 + v13) )
      {
        v12 += v11;
        v18 = a4[v12];
        if ( v18 == *a4 || !v18 )
        {
          v19 = v24;
          if ( v25 >= 0x10 )
            v19 = (void **)v24[0];
          v23 = v13;
          goto LABEL_39;
        }
        if ( !*(_BYTE *)(a1 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a1);
        if ( !*(_BYTE *)(a2 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
        if ( *(_QWORD *)a1 )
        {
          if ( *(_QWORD *)a2 )
          {
LABEL_28:
            v19 = v24;
            if ( v25 >= 0x10 )
              v19 = (void **)v24[0];
LABEL_39:
            v21 = 127;
            if ( v11 < 0x7F )
              v21 = v11;
            *((_BYTE *)v19 + v13) = v21;
            goto LABEL_42;
          }
        }
        else if ( !*(_QWORD *)a2 )
        {
          goto LABEL_28;
        }
        if ( !*(_BYTE *)(a1 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a1);
        if ( (char)a4[v12] == *(unsigned __int16 *)(a1 + 10) )
        {
          v20 = 1;
          v22 = 1;
          goto LABEL_43;
        }
        goto LABEL_28;
      }
      v17 = v24;
      if ( v25 >= 0x10 )
        v17 = (void **)v24[0];
      v12 += *((char *)v17 + v13);
LABEL_42:
      v20 = v22;
LABEL_43:
      ++v13;
    }
    while ( v13 < a3 );
    if ( v20 )
    {
      if ( !*(_BYTE *)(a1 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a1);
      if ( !*(_BYTE *)(a2 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)a2 )
          goto LABEL_53;
      }
      else if ( *(_QWORD *)a2 )
      {
LABEL_53:
        ++v11;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a1);
        v23 = -1;
        continue;
      }
    }
    break;
  }
  if ( v25 >= 0x10 )
    operator delete(v24[0]);
  return v23;
}
