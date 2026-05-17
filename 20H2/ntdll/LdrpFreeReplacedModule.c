/*
 * XREFs of LdrpFreeReplacedModule @ 0x180066618
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x1800666E4 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180066784 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x1800666E4 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1, v2, v3, v4);
}
