/*
 * XREFs of LdrAddRefDll @ 0x180010140
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x18007FD90 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2)
{
  char v2; // di
  int LoadedDllByHandle; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int Count; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, &v9, &v8);
    if ( LoadedDllByHandle >= 0 )
    {
      v4 = (v2 & 1) == 0;
      v5 = v9;
      if ( v4 )
        Count = LdrpIncrementModuleLoadCount(v9);
      else
        Count = LdrpPinModule(v9);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
