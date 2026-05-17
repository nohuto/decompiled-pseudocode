/*
 * XREFs of _RtlpSetProcessDebugInformationRemote@4 @ 0x4B337C70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 */

void __stdcall __noreturn RtlpSetProcessDebugInformationRemote(_DWORD *a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi

  v1 = a1[3];
  if ( v1 )
  {
    v2 = a1[18];
    if ( v2 )
      a1[18] = v2 - v1;
    v3 = a1[13];
    if ( v3 )
      a1[13] = v3 - v1;
  }
  v4 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, a1[8], (int)a1);
  a1[2] = 0;
  v5 = v4;
  NtUnmapViewOfSection(-1, (int)a1);
  RtlExitUserThread(v5);
}
