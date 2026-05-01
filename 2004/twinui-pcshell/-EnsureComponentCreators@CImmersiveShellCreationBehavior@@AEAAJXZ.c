/*
 * XREFs of ?EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1802140C0
 * Callers:
 *     ?CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x180213CD0 (-CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveComponentCreator@@@Z @ 0x1802137D4 (--$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreato.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::EnsureComponentCreators(CImmersiveShellCreationBehavior *this)
{
  LPVOID *ppv; // rdi
  HRESULT Instance; // edi
  __int64 v4; // rdx
  int InstanceImmersiveShellComponent; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 72);
  if ( !*((_QWORD *)this + 9) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    Instance = CoCreateInstance(
                 &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 ppv);
    if ( Instance < 0 )
    {
      v4 = 592LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  if ( !*((_QWORD *)this + 11) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    Instance = CoCreateInstance(
                 &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 (LPVOID *)this + 11);
    if ( Instance < 0 )
    {
      v4 = 596LL;
      goto LABEL_4;
    }
  }
  if ( !*((_QWORD *)this + 10) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    Instance = CoCreateInstance(
                 &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 (LPVOID *)this + 10);
    if ( Instance < 0 )
    {
      v4 = 600LL;
      goto LABEL_4;
    }
  }
  if ( *((_QWORD *)this + 12) )
    return 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  InstanceImmersiveShellComponent = Microsoft::WRL::Details::MakeAndInitialize<CoCreateInstanceImmersiveShellComponentCreator,IImmersiveComponentCreator,>((__int64 *)this + 12);
  v7 = InstanceImmersiveShellComponent;
  if ( InstanceImmersiveShellComponent >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25C,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)InstanceImmersiveShellComponent);
  return v7;
}
