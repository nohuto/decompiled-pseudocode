/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C007574C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C002443C (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeSpecificDev @ 0x1C0075854 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0077AA8 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r9

  v3 = (__int64 *)(a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v10 = *(_DWORD *)(v8 + 184);
      if ( (v10 & 0x2000) == 0 )
      {
        *(_DWORD *)(v8 + 184) = v10 | 8;
        rimOnPnpRemoveComplete(a1, *v6, v8, v9);
        v15 = *v6;
        if ( *(_QWORD *)(*v6 + 248) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
          v15 = *v6;
        }
        *v6 = *(_QWORD *)(v15 + 40);
        *(_QWORD *)(v15 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v15);
        rimDoRimDevChange(a1, v15, 3LL, v16);
        RIMFreeSpecificDev(a1, v15);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
