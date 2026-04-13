/*
 * XREFs of _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002EDEC
 * Callers:
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180031F60 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180032180 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800324A0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 * Callees:
 *     _anonymous_namespace_::SplitString @ 0x18002EA1C (_anonymous_namespace_--SplitString.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180033854 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180037918 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180037A0C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180039178 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::DecodeBatchIdFromCreativeId(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  char v7; // bl
  char v8; // bl
  _QWORD v10[5]; // [rsp+30h] [rbp-61h] BYREF
  void *v11[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v12; // [rsp+68h] [rbp-29h]
  unsigned __int64 v13; // [rsp+70h] [rbp-21h]
  void *v14[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v15; // [rsp+88h] [rbp-9h]
  unsigned __int64 v16; // [rsp+90h] [rbp-1h]
  void *v17[3]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+1Fh]

  v10[3] = -2LL;
  v10[4] = a1;
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  v4 = -1LL;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  std::wstring::assign(v11, a2);
  anonymous_namespace_::SplitString(v10, (__int64)v11, (__int64)L"`");
  if ( v13 >= 8 )
    operator delete(v11[0]);
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  if ( v10[0] == v10[1] )
  {
    v16 = 7LL;
    v15 = 0LL;
    LOWORD(v14[0]) = 0;
    if ( *a2 )
    {
      do
        ++v4;
      while ( a2[v4] );
    }
    std::wstring::assign(v14, a2);
    v6 = v14;
    v7 = 2;
  }
  else
  {
    v18 = 7LL;
    v17[2] = 0LL;
    LOWORD(v17[0]) = 0;
    std::wstring::assign(v17);
    v6 = v17;
    v7 = 1;
  }
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v6);
  v8 = v7 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v16 >= 8 )
      operator delete(v14[0]);
    v16 = 7LL;
    v15 = 0LL;
    LOWORD(v14[0]) = 0;
  }
  if ( (v8 & 1) != 0 && v18 >= 8 )
    operator delete(v17[0]);
  std::vector<std::wstring>::~vector<std::wstring>(v10);
  return a1;
}
