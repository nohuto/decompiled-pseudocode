/*
 * XREFs of LdrpLogDllState @ 0x18001A6CC
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x18001A514 (LdrpApplyFileNameRedirection.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DBFC (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     LdrpAllocatePlaceHolder @ 0x18006B21C (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNode @ 0x18006C014 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x180076DA0 (ApiSetQueryApiSetPresence.c)
 *     LdrpCorProcessImports @ 0x180084854 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax
  int v6; // esi
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = NtCurrentPeb();
  v6 = a1;
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(a1, a2);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (struct _PEB *)LdrpLogEtwEvent(a3, v6, 0, 0, a2, 0LL);
    }
  }
  return result;
}
