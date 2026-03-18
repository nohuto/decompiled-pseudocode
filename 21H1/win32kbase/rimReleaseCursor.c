/*
 * XREFs of rimReleaseCursor @ 0x1C0186D90
 * Callers:
 *     RIMCmDeactivateContact @ 0x1C018693C (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r10

  v4 = *(unsigned int *)(a1 + 976);
  LODWORD(v5) = v4;
  v6 = *(_DWORD *)(a1 + 980);
  result = v6;
  if ( (unsigned int)v4 >= v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    v6 = *(_DWORD *)(a1 + 980);
    result = v6;
    v4 = *(unsigned int *)(a1 + 976);
    LODWORD(v5) = *(_DWORD *)(a1 + 976);
  }
  v8 = 0LL;
  if ( (_DWORD)result )
  {
    v9 = *(_QWORD *)(a1 + 968);
    while ( 1 )
    {
      result = 3 * v8;
      if ( a2 == *(_DWORD *)(v9 + 12 * v8 + 4) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v6 )
      {
        LODWORD(v5) = v4;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(v9 + 12 * v8 + 8) = 0;
    v5 = *(unsigned int *)(a1 + 976);
    result = *(_QWORD *)(a1 + 968);
    v4 = 3 * v5;
    if ( *(_DWORD *)(result + 12 * v5 + 8) )
    {
      *(_DWORD *)(a1 + 976) = v8;
      LODWORD(v5) = v8;
    }
  }
LABEL_10:
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 980) )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  return result;
}
