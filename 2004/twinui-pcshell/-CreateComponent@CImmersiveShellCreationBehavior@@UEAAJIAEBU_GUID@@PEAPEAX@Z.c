/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180213BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x180213CD0 (-CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@A.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180216238 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  CImmersiveShellCreationBehavior *v4; // rbp
  __int64 v5; // rdi
  int ComponentWithSxs; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v4 = (CImmersiveShellCreationBehavior *)((char *)this - 32);
  v5 = a2;
  ComponentWithSxs = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( ComponentWithSxs < 0 )
  {
    v9 = 675LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)ComponentWithSxs);
    return (unsigned int)ComponentWithSxs;
  }
  if ( (unsigned int)v5 >= 0x89 )
  {
    ComponentWithSxs = -2147483637;
    v9 = 676LL;
    goto LABEL_3;
  }
  ComponentWithSxs = CImmersiveShellCreationBehavior::CreateComponentWithSxs(
                       v4,
                       3 * (unsigned __int8)v5,
                       (const struct IMMERSIVE_SHELL_COMPONENT *)(&off_1805C3270 + 3 * v5),
                       a3,
                       a4);
  if ( ComponentWithSxs < 0 )
  {
    v9 = 677LL;
    goto LABEL_3;
  }
  return 0LL;
}
