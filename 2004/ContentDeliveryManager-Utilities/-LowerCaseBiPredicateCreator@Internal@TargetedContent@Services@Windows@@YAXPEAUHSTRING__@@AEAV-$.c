/*
 * XREFs of ?LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180071E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001AFD0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Services::TargetedContent::Internal::LowerCaseBiPredicateCreator(
        HSTRING a1,
        void **a2,
        _DWORD *a3)
{
  WCHAR *v5; // rdi
  PCWSTR StringRawBuffer; // rax
  PCWSTR v7; // rsi
  const char *v8; // r9
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rdx
  LPWSTR v12; // rcx
  signed __int64 v13; // rsi
  WCHAR v14; // ax
  LPWSTR v15; // rax
  void *v16; // rsi
  DWORD LastError; // ebx
  LPWSTR lpsz; // [rsp+28h] [rbp-18h] BYREF
  DWORD cchLength[2]; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  *a3 = 0;
  v5 = 0LL;
  lpsz = 0LL;
  *(_QWORD *)cchLength = 0LL;
  v20 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v7 = StringRawBuffer;
  v8 = 0LL;
  if ( StringRawBuffer )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( StringRawBuffer[v9] );
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
            (__int64)&lpsz,
            v9);
    v8 = (const char *)(unsigned int)v10;
    v5 = lpsz;
    if ( v10 < 0 )
    {
      v9 = *(_QWORD *)cchLength;
      goto LABEL_18;
    }
    v11 = v9 + 1;
    if ( v9 > 0x7FFFFFFE )
    {
      if ( v9 != -1LL )
        *lpsz = 0;
    }
    else
    {
      v12 = lpsz;
      v13 = (char *)v7 - (char *)lpsz;
      do
      {
        if ( v11 == 1 )
          break;
        v14 = *(LPWSTR)((char *)v12 + v13);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v11;
      }
      while ( v11 );
      v15 = v12 - 1;
      if ( v11 )
        v15 = v12;
      *v15 = 0;
    }
  }
  else
  {
    v9 = 0LL;
    v20 = 0LL;
  }
  *(_QWORD *)cchLength = v9;
LABEL_18:
  if ( (int)v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      v8);
    JUMPOUT(0x180072028LL);
  }
  if ( v9 == -1LL )
  {
    if ( v5 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v5[v9] );
    }
    else
    {
      v9 = 0LL;
    }
  }
  CharLowerBuffW(v5, v9);
  if ( v9 == -1LL )
  {
    if ( v5 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v5[v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  *a3 = 2 * v9 + 2;
  lpsz = 0LL;
  v20 = 0LL;
  *(_QWORD *)cchLength = 0LL;
  v16 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v16);
    SetLastError(LastError);
  }
  *a2 = v5;
}
