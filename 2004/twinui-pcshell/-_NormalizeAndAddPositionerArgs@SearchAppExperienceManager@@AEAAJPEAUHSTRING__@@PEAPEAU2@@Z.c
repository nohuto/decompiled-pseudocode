/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18004FDA4
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180050660 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011C60 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180033218 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180085C40 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1800E0938 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     _alloca_probe @ 0x1800EEE40 (_alloca_probe.c)
 */

__int64 __fastcall SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(
        SearchAppExperienceManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  PCWSTR StringRawBuffer; // rax
  char *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  HRESULT v12; // eax
  HSTRING v13; // rax
  HSTRING v14; // rcx
  __int64 v16; // rdx
  UINT32 length; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v20; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR sourceString[2088]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  *a3 = 0LL;
  string1 = 0LL;
  v20 = a2;
  if ( !a2 )
  {
    v8 = Microsoft::WRL::Wrappers::HString::Set(
           (Microsoft::WRL::Wrappers::HString *)&string1,
           L"StartMode=MergedHome",
           0x14u);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_6;
    v16 = 725LL;
    goto LABEL_17;
  }
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  v5 = (char *)StringRawBuffer;
  if ( StringRawBuffer && length )
  {
    v6 = length - 1;
    v7 = (unsigned int)v6;
    if ( StringRawBuffer[v6] == 47 )
    {
      memset_0(sourceString, 0, 0x1048uLL);
      v8 = StringCchCopyNW((char *)sourceString, 2084LL, v5, v7);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v20 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString)
                         + 24);
        v8 = Microsoft::WRL::Wrappers::HString::Set(&string1, &v20);
        v9 = v8;
        if ( v8 >= 0 )
          goto LABEL_6;
        v16 = 738LL;
      }
      else
      {
        v16 = 737LL;
      }
    }
    else
    {
      v8 = Microsoft::WRL::Wrappers::HString::Set(&string1, &v20);
      v9 = v8;
      if ( v8 >= 0 )
        goto LABEL_6;
      v16 = 742LL;
    }
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      length);
    goto LABEL_9;
  }
LABEL_6:
  v20 = (HSTRING)L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v20, v10);
  v12 = WindowsConcatString(string1, (HSTRING)v11[1].Reserved.Reserved1, &newString);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      length);
    v14 = newString;
  }
  else
  {
    v13 = newString;
    v14 = 0LL;
    newString = 0LL;
    v9 = 0;
    *a3 = v13;
  }
  WindowsDeleteString(v14);
  newString = 0LL;
LABEL_9:
  WindowsDeleteString(string1);
  return v9;
}
