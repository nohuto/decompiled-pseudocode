/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C01CCD20
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0066E10 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0067000 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0094F24 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  PVOID v6; // rsi
  int v7; // eax
  PVOID v8; // rcx
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
    v6 = 0LL;
    Object = 0LL;
    if ( v3 )
    {
      v7 = CompositionObject::OpenDwmHandle(v3, &Object);
      v6 = Object;
      v4 = v7;
    }
    if ( v4 >= 0 )
    {
      v8 = UserReferenceDwmApiPort();
      if ( qword_1C024F9F0 )
        v4 = qword_1C024F9F0(v8, a1, v6);
      else
        v4 = -1073741637;
    }
    GreUnlockDwmState();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
