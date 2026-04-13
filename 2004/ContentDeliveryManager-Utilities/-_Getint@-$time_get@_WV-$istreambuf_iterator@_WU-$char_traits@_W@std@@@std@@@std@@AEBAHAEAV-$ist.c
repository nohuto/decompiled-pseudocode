/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800ACFE0
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800ABA60 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 *     ?do_get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800ABFB0 (-do_get_year@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800AC1B0 (-do_get_date@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_time@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800AC9A0 (-do_get_time@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003AAD8 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003AB40 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     _Stolx @ 0x1800B09D0 (_Stolx.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  bool v7; // zf
  char *v8; // r14
  char v12; // al
  char v13; // r15
  unsigned int v14; // esi
  char *v15; // rax
  int v16; // r14d
  char v17; // al
  char *v18; // rax
  int v20; // [rsp+20h] [rbp-40h] BYREF
  char *v21; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v22; // [rsp+30h] [rbp-30h]
  char v23; // [rsp+38h] [rbp-28h] BYREF
  char v24; // [rsp+39h] [rbp-27h] BYREF
  char v25; // [rsp+57h] [rbp-9h] BYREF

  v7 = *(_BYTE *)(a2 + 8) == 0;
  v8 = &v23;
  v22 = a6;
  if ( v7 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a3 )
      goto LABEL_16;
  }
  else if ( !*(_QWORD *)a3 )
  {
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(a2 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
          a7,
          *(unsigned __int16 *)(a2 + 10),
          0LL);
  if ( v12 == 43 )
  {
    v23 = 43;
LABEL_15:
    v8 = &v24;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
    goto LABEL_16;
  }
  if ( v12 == 45 )
  {
    v23 = 45;
    goto LABEL_15;
  }
LABEL_16:
  v13 = 0;
  v14 = 1;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)a3 )
        break;
    }
    else if ( !*(_QWORD *)a3 )
    {
      break;
    }
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
           a7,
           *(unsigned __int16 *)(a2 + 10),
           0LL) != 48 )
      break;
    v13 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
  }
  if ( v13 )
    *v8++ = 48;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)a3 )
        break;
    }
    else if ( !*(_QWORD *)a3 )
    {
      break;
    }
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
            a7,
            *(unsigned __int16 *)(a2 + 10),
            0LL);
    if ( (unsigned __int8)(v17 - 48) > 9u )
      break;
    *v8 = v17;
    v13 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
    v18 = v8 + 1;
    if ( v8 >= &v25 )
      v18 = v8;
    v8 = v18;
  }
  v15 = &v23;
  if ( v13 )
    v15 = v8;
  v20 = 0;
  *v15 = 0;
  v16 = Stolx(&v23, &v21, 10LL, &v20);
  if ( !*(_BYTE *)(a2 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( *(_QWORD *)a2 )
  {
    if ( !*(_QWORD *)a3 )
LABEL_53:
      v14 = 0;
  }
  else if ( *(_QWORD *)a3 )
  {
    goto LABEL_53;
  }
  if ( v21 == &v23 || v20 || v16 < a4 || a5 < v16 )
    v14 |= 2u;
  else
    *v22 = v16;
  return v14;
}
