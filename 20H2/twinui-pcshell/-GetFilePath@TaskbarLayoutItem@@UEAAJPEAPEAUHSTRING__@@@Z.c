/*
 * XREFs of ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A3480
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002A268 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetFilePath(TaskbarLayoutItem *this, HSTRING *a2)
{
  HRESULT String; // ebx
  __int64 v3; // rdx
  __int64 v5; // r9
  HSTRING *v6; // r10
  const WCHAR *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    String = -2147319767;
    v3 = 45LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)this + 5);
  v7 = &szAgent;
  if ( *(_QWORD *)v5 )
    v7 = *(const WCHAR **)v5;
  String = WindowsCreateString(v7, *(_DWORD *)(v5 + 8), v6);
  if ( String < 0 )
  {
    v3 = 46LL;
    goto LABEL_3;
  }
  return 0LL;
}
