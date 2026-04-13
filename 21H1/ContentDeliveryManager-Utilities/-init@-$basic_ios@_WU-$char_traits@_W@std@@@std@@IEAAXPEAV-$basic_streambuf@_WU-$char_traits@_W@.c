/*
 * XREFs of ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x180077A0C
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180075080 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800919C0 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800993DC (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180028300 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180077B94 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AEAE0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::wios::init(std::ios_base *this, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // r8
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 513;
  *((_QWORD *)this + 4) = 6LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::ios_base::clear(this, 0, 0);
  v4 = (__int64 *)operator new(8uLL);
  if ( v4 )
    *v4 = (__int64)std::locale::_Init(1);
  else
    v4 = 0LL;
  *((_QWORD *)this + 8) = v4;
  *((_QWORD *)this + 9) = a2;
  *((_QWORD *)this + 10) = 0LL;
  v5 = *v4;
  v10 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = std::use_facet<std::ctype<wchar_t>>(&v10);
  if ( v5 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v8 = v9;
    if ( v9 )
      (**v9)(v9, 1LL);
  }
  LOBYTE(v6) = 32;
  *((_WORD *)this + 44) = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v7 + 96LL))(
                            v7,
                            v6,
                            v8);
  if ( !*((_QWORD *)this + 9) )
    std::ios_base::clear(this, *((_BYTE *)this + 16) | 4, 0);
}
