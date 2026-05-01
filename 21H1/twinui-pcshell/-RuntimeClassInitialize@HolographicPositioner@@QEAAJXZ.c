/*
 * XREFs of ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x18021FBFC
 * Callers:
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x18021A0D4 (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801C3658 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801C5870 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall HolographicPositioner::RuntimeClassInitialize(HolographicPositioner *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5[4]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v6; // [rsp+30h] [rbp-88h]
  GUID v7; // [rsp+40h] [rbp-78h]
  __int128 v8; // [rsp+50h] [rbp-68h]
  GUID v9; // [rsp+60h] [rbp-58h]
  __int128 v10; // [rsp+70h] [rbp-48h]
  GUID v11; // [rsp+80h] [rbp-38h]
  __int128 v12; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *(GUID *)v5 = GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa;
  v6 = 0LL;
  v7 = GUID_334a8e75_f9cf_4161_9035_68246f9ea21d;
  v8 = 0LL;
  v9 = GUID_538317c5_5bad_4847_962d_42da294f5e0a;
  v10 = 0LL;
  v11 = GUID_5090de35_ed23_43be_9714_586c5041026a;
  v12 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (HolographicPositioner *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         4LL);
  if ( v2 < 0 )
  {
    v3 = 346LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 57);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 57);
  if ( v2 < 0 )
  {
    v3 = 348LL;
    goto LABEL_3;
  }
  return 0LL;
}
