/*
 * XREFs of EtwpTrackProviderRegistration @ 0x14066DEF0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x14074F950 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpProviderArrivalCallback @ 0x1406FAA60 (EtwpProviderArrivalCallback.c)
 */

void __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r13
  bool v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned int *v17; // r14

  v1 = *(_WORD *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (v1 & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  if ( (v1 & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      v12 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 392), *(unsigned __int16 *)(v3 + 88), 0);
      v14 = (unsigned int *)v12;
      if ( v12 )
      {
        EtwpProviderArrivalCallback(v12, v4, a1, v13);
        EtwpReleaseLoggerContext(v14, 0);
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
        v9 = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v7 + v3 + 134), 0);
        v11 = (unsigned int *)v9;
        if ( v9 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(v9 + 832) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(v9, v4, a1, v10);
          EtwpReleaseLoggerContext(v11, 0);
        }
      }
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 102)) != 0 )
      {
        v15 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v7 + 134),
                0);
        v17 = (unsigned int *)v15;
        if ( v15 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(v15 + 832) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(v15, v4, a1, v16);
          EtwpReleaseLoggerContext(v17, 0);
        }
      }
      v6 = __ROL4__(v6, 1);
      v7 += 32LL;
      --v8;
    }
    while ( v8 );
  }
}
