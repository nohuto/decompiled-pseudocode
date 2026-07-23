/*
 * XREFs of _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238
 * Callers:
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     _LdrpAllocatePlaceHolder@28 @ 0x4B2D0889 (_LdrpAllocatePlaceHolder@28.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

signed int __fastcall LdrpFindOrPrepareLoadingModule(
        _UNICODE_STRING *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        int a7)
{
  int v8; // ecx
  int LoadedDllByName; // eax
  int PlaceHolder; // edi
  char v12; // al
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  _UNICODE_STRING *v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v8 = 0;
  v15 = a2;
  v14 = a1;
  *a6 = 0;
  v13 = 0;
  if ( (a3 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0, a3, a6, &v13);
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(0, &a1->Length, a3, a6, &v13);
LABEL_4:
    v8 = v13;
    PlaceHolder = LoadedDllByName;
    a1 = v14;
    a2 = v15;
    goto LABEL_5;
  }
  PlaceHolder = -1073741515;
LABEL_5:
  if ( PlaceHolder == -1073741515 )
  {
    PlaceHolder = LdrpAllocatePlaceHolder(&a1->Length, a2, a3, a4, a5, a6, a7);
    if ( PlaceHolder >= 0 )
      return LdrpLoadKnownDll(*(_DWORD *)(*a6 + 92));
  }
  else if ( v8 < 0 )
  {
    v12 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrmap.c",
        2979,
        "LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *(_DWORD *)(*a6 + 36),
        *(_DWORD *)(*a6 + 40),
        v8);
      v12 = ShowSnaps;
    }
    if ( (v12 & 0x10) != 0 )
      __debugbreak();
    PlaceHolder = -1073741595;
    LdrpDereferenceModule((char *)*a6);
    *a6 = 0;
  }
  else
  {
    LdrpIncrementModuleLoadCount((_DWORD *)*a6);
  }
  return PlaceHolder;
}
