/*
 * XREFs of _RtlpSetProcessDebugInformationRemote@4 @ 0x4B337C70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 */

void __stdcall __noreturn RtlpSetProcessDebugInformationRemote(PRTL_DEBUG_INFORMATION Buffer)
{
  int v1; // ecx
  PRTL_PROCESS_MODULES Modules; // eax
  int OffsetFree_high; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // esi

  v1 = *((_DWORD *)&Buffer->ViewBaseTarget + 1);
  if ( v1 )
  {
    Modules = Buffer->Modules;
    if ( Modules )
      Buffer->Modules = (PRTL_PROCESS_MODULES)((char *)Modules - v1);
    OffsetFree_high = HIDWORD(Buffer->OffsetFree);
    if ( OffsetFree_high )
      HIDWORD(Buffer->OffsetFree) = OffsetFree_high - v1;
  }
  v4 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, (ULONG)Buffer->TargetProcessId, Buffer);
  Buffer->ViewBaseTarget = 0;
  v5 = v4;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, Buffer);
  RtlExitUserThread(v5);
}
