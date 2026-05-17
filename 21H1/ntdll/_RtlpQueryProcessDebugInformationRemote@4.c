/*
 * XREFs of _RtlpQueryProcessDebugInformationRemote@4 @ 0x4B337A60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 */

void __stdcall __noreturn RtlpQueryProcessDebugInformationRemote(_DWORD *a1)
{
  int ProcessDebugInformation; // ebx
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // edx
  unsigned int v6; // ebx
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+Ch] [ebp-4h]

  ProcessDebugInformation = RtlQueryProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, a1[8], (int)a1);
  v11 = ProcessDebugInformation;
  if ( ProcessDebugInformation >= 0 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      v3 = a1[12];
      if ( v3 )
        a1[12] = v2 + v3;
      v4 = a1[13];
      if ( v4 )
        a1[13] = v2 + v4;
      v5 = (unsigned int *)a1[14];
      if ( v5 )
      {
        v6 = 0;
        a1[14] = (char *)v5 + v2;
        if ( *v5 )
        {
          v7 = v5 + 16;
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
          while ( v6 < *v5 );
        }
        ProcessDebugInformation = v11;
      }
      v9 = a1[15];
      if ( v9 )
        a1[15] = v2 + v9;
      v10 = a1[18];
      if ( v10 )
        a1[18] = v2 + v10;
    }
  }
  a1[2] = 0;
  NtUnmapViewOfSection(-1, (int)a1);
  RtlExitUserThread(ProcessDebugInformation);
}
