/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C001B7F4
 * Callers:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001B764 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01D48D0 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01D6084 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::ResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, int a4, PVOID Object)
{
  _QWORD *v5; // rsi
  NTSTATUS v7; // ebx
  _QWORD **v8; // rdi

  v5 = Object;
  Object = 0LL;
  *v5 = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD **)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v8[1] + 16LL))(v8[1]) == a4 )
        *v5 = v8;
      else
        v7 = -1073741788;
    }
    else
    {
      v7 = -1073741816;
    }
    if ( v7 < 0 )
      ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
