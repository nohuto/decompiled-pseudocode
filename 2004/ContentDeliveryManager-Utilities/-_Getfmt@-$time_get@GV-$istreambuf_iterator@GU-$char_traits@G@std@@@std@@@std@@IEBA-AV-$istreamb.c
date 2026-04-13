/*
 * XREFs of ?_Getfmt@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800BE058
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800C3900 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18003A4A4 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003AB40 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18003ACE8 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003C694 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getfmt(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // r13
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _BYTE *v15; // rsi
  char v16; // al
  _DWORD *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rcx
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rax
  int v23; // [rsp+38h] [rbp-80h]
  int v24; // [rsp+40h] [rbp-78h]
  __int128 v25; // [rsp+60h] [rbp-58h] BYREF
  __int128 v26; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-38h] BYREF

  v11 = a5;
  v12 = **(_QWORD **)(a5 + 64);
  a5 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<unsigned short>>(&a5);
  if ( v12 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  v15 = a8;
  v16 = *a8;
  v17 = a6;
  if ( *a8 )
  {
    v18 = a7;
    do
    {
      if ( v16 == 37 )
      {
        ++v15;
        v25 = *a4;
        v26 = *(_OWORD *)a3;
        LOBYTE(v24) = 0;
        LOBYTE(v23) = *v15;
        *(_OWORD *)a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                                     a1,
                                     v27,
                                     &v26,
                                     &v25,
                                     v11,
                                     v17,
                                     v18,
                                     v23,
                                     v24);
      }
      else
      {
        v19 = (__int64)a3;
        if ( v16 == 32 )
        {
          while ( !std::istreambuf_iterator<wchar_t>::equal(v19, (__int64)a4) )
          {
            v21 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
            if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                    v13,
                    72LL,
                    *v21) )
              break;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            v19 = (__int64)a3;
          }
        }
        else
        {
          v20 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
          if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                 v13,
                 *v20,
                 0LL) != *v15 )
          {
            *v17 |= 2u;
            break;
          }
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
      }
      v16 = *++v15;
    }
    while ( *v15 );
  }
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    *v17 |= 1u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
