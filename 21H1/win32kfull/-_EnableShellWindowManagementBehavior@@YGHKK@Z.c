/*
 * XREFs of ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A
 * Callers:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z @ 0x92328 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     ?Registered@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E98 (-Registered@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z.c)
 *     ?ValidateBehaviors@ShellWindowManagement@@YG_NK@Z @ 0xF4F18 (-ValidateBehaviors@ShellWindowManagement@@YG_NK@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YGJK@Z @ 0x19F2DD (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YGJK@Z.c)
 */

int __userpurge _EnableShellWindowManagementBehavior@<eax>(
        ShellWindowManagement *a1@<edi>,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  unsigned int v7; // edx
  void *v8; // edi
  int v9; // [esp-4h] [ebp-Ch]
  WindowGroupingFeature *v11; // [esp-4h] [ebp-Ch]
  ShellWindowManagement *v12; // [esp+0h] [ebp-8h]
  ShellWindowManagement *v13; // [esp+0h] [ebp-8h]
  unsigned int v14; // [esp+0h] [ebp-8h]
  unsigned int v15; // [esp+4h] [ebp-4h]
  const struct tagDESKTOP *v16; // [esp+4h] [ebp-4h]

  v3 = *(_DWORD *)(_gptiCurrent + 248);
  v4 = *(_DWORD *)(v3 + 204);
  if ( !IAMThreadAccessGranted(_gptiCurrent) )
  {
    v9 = 5;
LABEL_3:
    v5 = v9;
LABEL_4:
    UserSetLastError((struct _NT_TIB *)v5);
    return 0;
  }
  if ( !ShellWindowManagement::ValidateBehaviors(v12, v15) )
  {
    v9 = 87;
    goto LABEL_3;
  }
  v7 = a3 & a2 | v4 & ~a2;
  if ( v7 && !ShellWindowManagement::Registered(v13, v16) )
  {
    *(_DWORD *)(v3 + 204) = 0;
    v5 = 5023;
    goto LABEL_4;
  }
  *(_DWORD *)(v3 + 204) = v7;
  if ( ((v7 ^ v4) & 0x80u) != 0 )
  {
    v8 = ***(void ****)(v3 + 4);
    if ( ShellWindowManagement::BehaviorEnabled(a1, v13, (unsigned int)v16) )
      WindowGroupingFeature::InitializeWindowGroupFunctionality(v11, v14);
    else
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(v8);
  }
  return 1;
}
