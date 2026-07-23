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

int __fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *v3; // rax
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = NtCurrentPeb();
  SharedData = v3->SharedData;
  if ( SharedData && *SharedData )
  {
    v3 = NtCurrentPeb();
    v8 = (__int64)v3->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    v3 = NtCurrentPeb();
    if ( (v3->TracingFlags & 4) != 0 )
    {
      LODWORD(v3) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v3 )
      {
        v3 = NtCurrentPeb();
        v9 = (__int64)v3->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        LODWORD(v3) = LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return (int)v3;
}
