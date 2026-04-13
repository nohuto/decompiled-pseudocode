/*
 * XREFs of _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002DF90
 * Callers:
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180031860 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x18003B290 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 * Callees:
 *     _anonymous_namespace_::SplitString @ 0x18002DDE0 (_anonymous_namespace_--SplitString.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180032C14 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180034458 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800344DC (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180034D70 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x180034F30 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800384D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18003AD20 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800B104C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::GetImpressionEventExpirationTime(void *Src, _WORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  _BYTE v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[12]; // [rsp+E0h] [rbp-20h] BYREF
  void *v20[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v21; // [rsp+150h] [rbp+50h]
  unsigned __int64 v22; // [rsp+158h] [rbp+58h]

  v17 = -2LL;
  v14 = 0LL;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  std::wstring::assign(v20, a2);
  anonymous_namespace_::SplitString(&v15, (__int64)v20, (__int64)L"`");
  if ( v22 >= 8 )
    operator delete(v20[0]);
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v6 = v16;
  v7 = v15;
  if ( (unsigned __int64)((v16 - v15) >> 5) > 6 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v15 + 192);
    std::basic_istream<unsigned short>::operator>>(v18, &v14);
    v8 = v14;
    std::wistringstream::~wistringstream(v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    if ( v8 )
    {
      v9 = v8 + 600000000;
      goto LABEL_15;
    }
    v6 = v16;
    v7 = v15;
  }
  v10 = 86400;
  v13 = 86400;
  if ( (unsigned __int64)((v6 - v7) >> 5) > 4 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v7 + 128);
    std::basic_istream<unsigned short>::operator>>(v18, &v13);
    v11 = v13;
    if ( !v13 )
      v11 = 86400;
    v13 = v11;
    std::wistringstream::~wistringstream(v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    v10 = v13;
  }
  v9 = a3 + 10000000 * (v10 + 600LL);
LABEL_15:
  if ( Src )
    anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(Src);
  std::vector<std::wstring>::~vector<std::wstring>(&v15);
  return v9;
}
