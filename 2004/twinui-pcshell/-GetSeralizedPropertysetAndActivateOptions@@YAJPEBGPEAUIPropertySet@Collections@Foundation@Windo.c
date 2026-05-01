/*
 * XREFs of ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18004B0CC
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18004A990 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x18004B224 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006ECC8 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall GetSeralizedPropertysetAndActivateOptions(
        const unsigned __int16 *a1,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        char a3,
        struct Windows::Storage::Streams::IBuffer **a4,
        _DWORD *a5)
{
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int inserted; // eax
  int v14; // eax
  struct Windows::Storage::Streams::IBuffer *v16; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v18 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, (const WCHAR **)&off_18048DF70, v9);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
          (HSTRING)v10[1].Reserved.Reserved1);
  v12 = v11;
  v20 = 0LL;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v11,
      (int)v16);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
    inserted = InsertExperienceIdAndSerialize(a2, a1, &v16);
    v12 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)inserted,
        (int)v16);
    }
    else
    {
      v14 = 16777222;
      *a5 = 16777222;
      if ( (a3 & 4) != 0 )
      {
        v14 = 150994950;
        *a5 = 150994950;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v14 |= 0x10000000u;
        *a5 = v14;
      }
      if ( (a3 & 0x20) != 0 || (a3 & 1) == 0 )
      {
        v14 |= 0x40000000u;
        *a5 = v14;
      }
      if ( (a3 & 0x40) != 0 )
      {
        v14 |= 0x400000u;
        *a5 = v14;
      }
      if ( (a3 & 8) != 0 )
        *a5 = v14 & 0xFFFFFFFB;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      *a4 = v16;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v12;
}
