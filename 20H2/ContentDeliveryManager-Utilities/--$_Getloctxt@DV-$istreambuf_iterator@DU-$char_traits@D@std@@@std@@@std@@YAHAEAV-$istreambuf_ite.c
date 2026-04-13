/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800B1CB4
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800B6720 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B6720.c)
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800CA970 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800CB660 (-do_get_monthname@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800CB910 (-do_get_weekday@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003A320 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B4E10 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B7574 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CD721 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<char>>(__int64 *a1, __int64 a2, size_t a3, _BYTE *a4)
{
  char v7; // dl
  _BYTE *v8; // rcx
  size_t v9; // rax
  unsigned __int64 v10; // r12
  void **v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  char v15; // al
  void **v16; // rax
  void **v17; // rax
  char v18; // al
  __int64 v19; // rcx
  unsigned __int8 *v20; // r8
  int v21; // edx
  int v22; // eax
  char v23; // cl
  bool v24; // cf
  void **v25; // rdx
  char v26; // cl
  char v27; // [rsp+20h] [rbp-40h]
  unsigned int v28; // [rsp+24h] [rbp-3Ch]
  void *v30[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]

  if ( *a4 )
  {
    v7 = *a4;
    v8 = a4;
    do
    {
      v9 = a3 + 1;
      if ( v7 != *a4 )
        v9 = a3;
      a3 = v9;
      v7 = *++v8;
    }
    while ( *v8 );
  }
  v31 = 15LL;
  v30[2] = 0LL;
  LOBYTE(v30[0]) = 0;
  std::string::assign(v30, a3, 0);
  v28 = -2;
  v10 = 1LL;
  v11 = (void **)v30[0];
LABEL_7:
  v27 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = a4[v12];
        if ( !v15 || v15 == *a4 )
          break;
        ++v12;
      }
      v16 = v30;
      if ( v31 >= 0x10 )
        v16 = v11;
      if ( *((_BYTE *)v16 + v13) )
        break;
      v12 += v10;
      v18 = a4[v12];
      if ( v18 == *a4 || !v18 )
      {
        v24 = v31 < 0x10;
        v28 = v13;
LABEL_39:
        v25 = v30;
        if ( !v24 )
          v25 = v11;
        v26 = 127;
        if ( v10 < 0x7F )
          v26 = v10;
        *((_BYTE *)v25 + v13) = v26;
        v11 = (void **)v30[0];
LABEL_44:
        v23 = v27;
        goto LABEL_45;
      }
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
        goto LABEL_37;
      if ( !*((_BYTE *)a1 + 8) )
      {
        v19 = *a1;
        if ( !*a1
          || ((v20 = **(unsigned __int8 ***)(v19 + 56)) == 0LL ? (v21 = 0) : (v21 = **(_DWORD **)(v19 + 80)),
              v21 <= 0 ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19)) : (v22 = *v20),
              v22 == -1) )
        {
          *a1 = 0LL;
        }
        else
        {
          *((_BYTE *)a1 + 9) = v22;
        }
        *((_BYTE *)a1 + 8) = 1;
      }
      if ( a4[v12] != *((_BYTE *)a1 + 9) )
      {
LABEL_37:
        v24 = v31 < 0x10;
        goto LABEL_39;
      }
      v23 = 1;
      v27 = 1;
LABEL_45:
      if ( ++v13 >= a3 )
      {
        if ( v23 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
        {
          ++v10;
          std::istreambuf_iterator<char>::_Inc(a1);
          v28 = -1;
          goto LABEL_7;
        }
        goto LABEL_8;
      }
    }
    v17 = v30;
    if ( v31 >= 0x10 )
      v17 = v11;
    v12 += *((char *)v17 + v13);
    goto LABEL_44;
  }
LABEL_8:
  if ( v31 >= 0x10 )
    operator delete(v11);
  return v28;
}
