/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C01CF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C002F9D4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GreLockDwmState @ 0x1C00A5990 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00A59D0 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C00A78E0 (UserReferenceDwmApiPort.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00A7DA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  __int64 v6; // rdx
  PVOID v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rsi
  int v11; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(
         a2,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v3 = (CompositionObject *)Object;
  if ( Object && *((_DWORD *)Object + 9) != 195 )
  {
    v4 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState();
    v10 = 0LL;
    Object = 0LL;
    if ( v3 )
    {
      v11 = CompositionObject::OpenDwmHandle(v3, &Object, v8, v9);
      v10 = Object;
      v4 = v11;
    }
    if ( v4 >= 0 )
    {
      v7 = UserReferenceDwmApiPort();
      if ( qword_1C02519F0 )
        v4 = qword_1C02519F0(v7, a1, v10);
      else
        v4 = -1073741637;
    }
    GreUnlockDwmState((__int64)v7, v6, v8);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
