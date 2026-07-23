/*
 * XREFs of _RtlpQueryProcessDebugInformationRemote@4 @ 0x4B337A60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 */

void __stdcall __noreturn RtlpQueryProcessDebugInformationRemote(PRTL_DEBUG_INFORMATION Buffer)
{
  int ProcessDebugInformation; // ebx
  int v2; // ecx
  int OffsetFree; // eax
  int OffsetFree_high; // eax
  unsigned int *CommitSize; // edx
  unsigned int v6; // ebx
  _DWORD *v7; // edi
  int v8; // eax
  int CommitSize_high; // eax
  PRTL_PROCESS_MODULES Modules; // eax
  int v11; // [esp+Ch] [ebp-4h]

  ProcessDebugInformation = RtlQueryProcessDebugInformation(
                              NtCurrentTeb()->ClientId.UniqueProcess,
                              (ULONG)Buffer->TargetProcessId,
                              Buffer);
  v11 = ProcessDebugInformation;
  if ( ProcessDebugInformation >= 0 )
  {
    v2 = *((_DWORD *)&Buffer->ViewBaseTarget + 1);
    if ( v2 )
    {
      OffsetFree = Buffer->OffsetFree;
      if ( OffsetFree )
        LODWORD(Buffer->OffsetFree) = v2 + OffsetFree;
      OffsetFree_high = HIDWORD(Buffer->OffsetFree);
      if ( OffsetFree_high )
        HIDWORD(Buffer->OffsetFree) = v2 + OffsetFree_high;
      CommitSize = (unsigned int *)Buffer->CommitSize;
      if ( CommitSize )
      {
        v6 = 0;
        LODWORD(Buffer->CommitSize) = (char *)CommitSize + v2;
        if ( *CommitSize )
        {
          v7 = CommitSize + 16;
          do
          {
            v8 = *(v7 - 1);
            if ( v8 )
              *(v7 - 1) = v2 + v8;
            if ( *v7 )
              *v7 += v2;
            ++v6;
            v7 += 16;
          }
          while ( v6 < *CommitSize );
        }
        ProcessDebugInformation = v11;
      }
      CommitSize_high = HIDWORD(Buffer->CommitSize);
      if ( CommitSize_high )
        HIDWORD(Buffer->CommitSize) = v2 + CommitSize_high;
      Modules = Buffer->Modules;
      if ( Modules )
        Buffer->Modules = (PRTL_PROCESS_MODULES)((char *)Modules + v2);
    }
  }
  Buffer->ViewBaseTarget = 0;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, Buffer);
  RtlExitUserThread(ProcessDebugInformation);
}
