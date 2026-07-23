/*
 * XREFs of EtwpTrackProviderRegistration @ 0x140637C90
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x14060964C (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  char v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r14

  result = *(unsigned __int16 *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (result & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  if ( (result & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      result = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 392), *(unsigned __int16 *)(v3 + 88), 0LL);
      v10 = result;
      if ( result )
      {
        EtwpProviderArrivalCallback(result, v4, a1);
        return EtwpReleaseLoggerContext(v10, 0LL);
      }
    }
  }
  else
  {
    v6 = 1;
    v7 = 0LL;
    v8 = 8LL;
    do
    {
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 100)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v7 + v3 + 134), 0LL);
        v9 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(result + 832) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(result, v4, a1);
          result = EtwpReleaseLoggerContext(v9, 0LL);
        }
      }
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 102)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(
                   EtwpHostSiloState,
                   *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v7 + 134),
                   0LL);
        v11 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(result + 832) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(result, v4, a1);
          result = EtwpReleaseLoggerContext(v11, 0LL);
        }
      }
      v6 = __ROL4__(v6, 1);
      v7 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
