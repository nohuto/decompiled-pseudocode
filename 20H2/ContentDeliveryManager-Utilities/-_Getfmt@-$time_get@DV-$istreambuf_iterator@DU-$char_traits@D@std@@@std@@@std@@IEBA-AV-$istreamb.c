/*
 * XREFs of ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800C8050
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800CA970 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800B1FFC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B4E10 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B7574 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct std::_Facet_base *v14; // r15
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _BYTE *v16; // rsi
  char v17; // al
  _DWORD *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  unsigned __int8 *v21; // r8
  __int64 v22; // rcx
  unsigned __int8 *v23; // r8
  int v24; // eax
  int v25; // eax
  int v27; // [rsp+38h] [rbp-80h]
  int v28; // [rsp+40h] [rbp-78h]
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-38h] BYREF

  v11 = a5;
  v12 = **(_QWORD **)(a5 + 64);
  a5 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = std::use_facet<std::ctype<char>>(&a5);
  if ( v12 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  v16 = a8;
  v17 = *a8;
  v18 = a6;
  if ( *a8 )
  {
    v19 = a7;
    do
    {
      if ( v17 == 37 )
      {
        ++v16;
        v29 = *(_OWORD *)a4;
        v30 = *a3;
        LOBYTE(v28) = 0;
        LOBYTE(v27) = *v16;
        *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                           a1,
                           v31,
                           &v30,
                           &v29,
                           v11,
                           v18,
                           v19,
                           v27,
                           v28);
      }
      else if ( v17 == 32 )
      {
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v22 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v23 = **(unsigned __int8 ***)(v22 + 56)) == 0LL ? (v13 = 0LL) : (v13 = **(unsigned int **)(v22 + 80)),
                  (int)v13 <= 0
                ? (v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 48LL))(v22))
                : (v24 = *v23),
                  v24 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v24;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v14 + 3) + 2LL * *((unsigned __int8 *)a3 + 9)) & 0x48) == 0 )
            break;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
      }
      else
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v20 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v21 = **(unsigned __int8 ***)(v20 + 56)) == 0LL ? (v13 = 0LL) : (v13 = **(unsigned int **)(v20 + 80)),
                (int)v13 <= 0 ? (v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20)) : (v25 = *v21),
                v25 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v25;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        LOBYTE(v13) = *((_BYTE *)a3 + 9);
        if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(
               v14,
               v13,
               0LL) != *v16 )
        {
          *v18 |= 2u;
          break;
        }
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      }
      v17 = *++v16;
    }
    while ( *v16 );
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v18 |= 1u;
  *a2 = *a3;
  return a2;
}
