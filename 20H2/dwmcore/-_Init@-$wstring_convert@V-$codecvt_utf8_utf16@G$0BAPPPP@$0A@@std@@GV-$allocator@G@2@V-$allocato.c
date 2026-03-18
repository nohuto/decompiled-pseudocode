/*
 * XREFs of ?_Init@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@2@@Z @ 0x180197988
 * Callers:
 *     ??0?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180196DF0 (--0-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??1locale@std@@QEAA@XZ @ 0x180196EDC (--1locale@std@@QEAA@XZ.c)
 */

void __fastcall std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init(
        __int64 a1,
        struct std::locale::facet *a2)
{
  std::locale::_Locimp *v4; // rdi
  unsigned __int64 v5; // rax
  std::locale::_Locimp *v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // r8
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  std::locale::_Locimp *v11; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  v11 = std::locale::_Locimp::_New_Locimp(*(const struct std::locale::_Locimp **)(a1 + 24));
  v4 = v11;
  if ( a2 )
  {
    v5 = std::locale::id::operator unsigned __int64(std::codecvt<unsigned short,char,_Mbstatet>::id);
    std::locale::_Locimp::_Addfac(v11, a2, v5);
    *((_DWORD *)v11 + 8) = 0;
    std::_Yarn<char>::operator=((char *)v4 + 40, "*");
  }
  v6 = *(std::locale::_Locimp **)(a1 + 24);
  if ( v6 != v4 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(std::locale::_Locimp *))(*(_QWORD *)v6 + 16LL))(v6);
    v9 = v7;
    if ( v7 )
      (**v7)(v7, 1LL);
    *(_QWORD *)(a1 + 24) = v4;
    (*(void (__fastcall **)(std::locale::_Locimp *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v4 + 8LL))(
      v4,
      v8,
      v9);
  }
  std::locale::~locale((std::locale *)v10);
  *(_QWORD *)(a1 + 112) = 0LL;
}
