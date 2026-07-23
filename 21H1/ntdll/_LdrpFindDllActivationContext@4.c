/*
 * XREFs of _LdrpFindDllActivationContext@4 @ 0x4B2E4C0D
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __thiscall LdrpFindDllActivationContext(int this)
{
  int v1; // esi
  _WORD *v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  if ( LdrpManifestProberRoutine && (!NtCurrentPeb()->ActivationContextData || this != LdrpImageEntry) )
  {
    v3 = *(_WORD **)(this + 40);
    if ( this == LdrpImageEntry
      && *v3 == 92
      && v3[1] == 63
      && v3[2] == 63
      && v3[3] == 92
      && v3[4]
      && v3[5] == 58
      && v3[6] == 92 )
    {
      v3 += 4;
    }
    v4 = LdrpManifestProberRoutine(LdrpManifestProberRoutine, *(_DWORD *)(this + 24), v3, &v7);
    v1 = v4;
    if ( v4 < 0
      && (v4 == -1073741686
       || v4 == -1073741685
       || v4 == -1073741687
       || v4 == -1073741809
       || v4 == -1073741308
       || v4 == -1073741822
       || v4 == -1073741637) )
    {
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrsnap.c",
          718,
          "LdrpFindDllActivationContext",
          2,
          "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
          this + 36,
          v4);
      v1 = 0;
    }
    v5 = v7;
    if ( v7 )
    {
      if ( *(_DWORD *)(this + 72) )
      {
        RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(this + 72));
        v5 = v7;
      }
      *(_DWORD *)(this + 72) = v5;
    }
    if ( v1 < 0 )
    {
      if ( (ShowSnaps & 3) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrsnap.c",
          747,
          "LdrpFindDllActivationContext",
          0,
          "Querying the active activation context failed with status 0x%08lx\n",
          v1);
      if ( (ShowSnaps & 0x10) != 0 )
        __debugbreak();
    }
  }
  return v1;
}
