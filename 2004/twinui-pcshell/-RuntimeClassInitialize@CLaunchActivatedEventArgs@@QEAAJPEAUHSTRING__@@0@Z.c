/*
 * XREFs of ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049D3C
 * Callers:
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180049C94 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180049D9C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::RuntimeClassInitialize(
        CLaunchActivatedEventArgs *this,
        HSTRING a2,
        HSTRING a3)
{
  int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v9; // [rsp+38h] [rbp+10h] BYREF
  HSTRING v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v4 = Windows::Internal::String::Initialize((CLaunchActivatedEventArgs *)((char *)this + 272), &v9);
  if ( v4 < 0 )
  {
    v6 = 37LL;
  }
  else
  {
    v4 = Windows::Internal::String::Initialize((CLaunchActivatedEventArgs *)((char *)this + 280), &v10);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return (unsigned int)v4;
}
