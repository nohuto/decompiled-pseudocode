/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01CEF60
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

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, __int64 *a2, void *a3)
{
  ULONG64 v5; // r8
  __int64 v6; // rbx
  int v7; // edi
  CompositionObject *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  PVOID v12; // rcx
  int v13; // r8d
  PVOID v14; // rdi
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v5 > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v6 = *a2;
  Object = 0LL;
  LOBYTE(v5) = 1;
  v7 = DirectComposition::ResourceObject::ResolveHandle(
         a3,
         1LL,
         v5,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 195 )
    {
      GreLockDwmState();
      Object = 0LL;
      v7 = CompositionObject::OpenDwmHandle(v8, &Object, v9, v10);
      if ( v7 >= 0 )
      {
        v14 = Object;
        v12 = UserReferenceDwmApiPort();
        if ( qword_1C02519D8 )
          v7 = qword_1C02519D8(v12, a1, v6, v14);
        else
          v7 = -1073741637;
      }
      GreUnlockDwmState((__int64)v12, v11, v13);
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
