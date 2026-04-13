/*
 * XREFs of ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180037230
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18003492C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 * Callees:
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180038A10 (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180038B18 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(
        __int64 a1,
        _QWORD *a2,
        char a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r8

  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(a1);
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  v6 = (4 * ((a3 & 1) == 0)) | 2;
  if ( (a3 & 2) != 0 )
    v6 = 4 * ((a3 & 1) == 0);
  v7 = v6 | 8;
  if ( (a3 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x10;
  if ( (a3 & 4) == 0 )
    v8 = v7;
  v9 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = v8;
  if ( v9 )
    std::wstringbuf::_Init(a1, a2);
  return a1;
}
