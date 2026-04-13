/*
 * XREFs of ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x180034F48
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800322CC (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180044F74 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004A8E4 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180028300 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180038688 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AEAE0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::basic_istream<unsigned short>::basic_istream<unsigned short>(_QWORD *a1, __int64 a2)
{
  char *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // r8
  __int64 v9; // r14
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h]

  v13 = 0;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  v4 = (char *)a1 + *(int *)(*a1 + 4LL);
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 6) = 513;
  *((_QWORD *)v4 + 4) = 6LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  std::ios_base::clear((std::ios_base *)v4, 0, 0);
  v5 = (__int64 *)operator new(8uLL);
  if ( v5 )
    *v5 = (__int64)std::locale::_Init(1);
  else
    v5 = 0LL;
  *((_QWORD *)v4 + 8) = v5;
  *((_QWORD *)v4 + 9) = a2;
  *((_QWORD *)v4 + 10) = 0LL;
  v6 = *v5;
  v12 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v9 = std::use_facet<std::ctype<unsigned short>>(&v12);
  if ( v6 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v8 = v10;
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  LOBYTE(v7) = 32;
  *((_WORD *)v4 + 44) = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v9 + 96LL))(
                          v9,
                          v7,
                          v8);
  if ( !*((_QWORD *)v4 + 9) )
    std::ios_base::clear((std::ios_base *)v4, v4[16] | 4, 0);
  return a1;
}
