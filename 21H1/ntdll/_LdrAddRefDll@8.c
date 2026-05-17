/*
 * XREFs of _LdrAddRefDll@8 @ 0x4B2D20F0
 * Callers:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 */

int __stdcall LdrAddRefDll(int a1, unsigned int a2)
{
  int LoadedDllByHandle; // esi
  _DWORD *v3; // edi
  int Count; // eax
  int v6; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v7; // [esp+Ch] [ebp-4h] BYREF

  if ( (a1 & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, (int *)&v7, &v6);
  if ( LoadedDllByHandle >= 0 )
  {
    v3 = v7;
    if ( (a1 & 1) != 0 )
      Count = LdrpPinModule(v7);
    else
      Count = LdrpIncrementModuleLoadCount(v7);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule((int)v3);
  }
  return LoadedDllByHandle;
}
