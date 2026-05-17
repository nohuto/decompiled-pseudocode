/*
 * XREFs of _LdrGetDllHandleByName@12 @ 0x4B2CF2C0
 * Callers:
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 */

int __stdcall LdrGetDllHandleByName(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v5; // [esp+10h] [ebp-24h] BYREF
  int v6; // [esp+14h] [ebp-20h] BYREF
  int LoadedDllByName; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  LoadedDllByName = -1073741823;
  ms_exc.registration.TryLevel = 0;
  LoadedDllByName = LdrpFindLoadedDllByName(0, &v6, &v5);
  if ( LoadedDllByName >= 0 )
  {
    if ( v5 < 7 )
    {
      LoadedDllByName = -1073741515;
      v3 = v6;
    }
    else
    {
      v3 = v6;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v6);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_DWORD *)(v3 + 24);
    }
    LdrpDereferenceModule(v3);
  }
  ms_exc.registration.TryLevel = -2;
  return LoadedDllByName;
}
