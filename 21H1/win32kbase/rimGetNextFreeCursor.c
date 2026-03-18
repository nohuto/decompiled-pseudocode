/*
 * XREFs of rimGetNextFreeCursor @ 0x1C0186CC4
 * Callers:
 *     RIMCmActivateContact @ 0x1C01863A4 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rdx

  v1 = *(_DWORD *)(a1 + 976);
  v3 = *(unsigned int *)(a1 + 980);
  v4 = 0;
  v5 = v3;
  if ( v1 >= (unsigned int)v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    v3 = *(unsigned int *)(a1 + 980);
    v5 = *(_DWORD *)(a1 + 980);
    v1 = *(_DWORD *)(a1 + 976);
  }
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 968);
    v8 = v5;
    while ( 1 )
    {
      v9 = v1 % v5;
      v1 = v1 % v5 + 1;
      if ( !*(_DWORD *)(v7 + 12LL * (unsigned int)v9 + 8) )
        break;
      ++v6;
      v8 = v3;
      if ( v6 >= (unsigned int)v3 )
      {
        v5 = v3;
        goto LABEL_9;
      }
    }
    v3 = 3 * v9;
    v4 = *(_DWORD *)(v7 + 12 * v9 + 4);
    *(_DWORD *)(a1 + 976) = v1 % v8;
    *(_DWORD *)(v7 + 12 * v9 + 8) = 1;
    v5 = *(_DWORD *)(a1 + 980);
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 976) >= v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  return v4;
}
