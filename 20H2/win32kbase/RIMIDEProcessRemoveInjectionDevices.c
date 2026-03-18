/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C0152EC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 v2; // r9
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  _QWORD *result; // rax
  _QWORD *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-8h]

  RIMLockExclusive((__int64)&gObListLock);
  v3 = (__int64 *)gObRimDevList;
  v4 = (__int64 *)&v15;
  v16 = (__int64 *)&v15;
  v15 = &v15;
  while ( v3 != &gObRimDevList )
  {
    v5 = (__int64)(v3 + 57);
    if ( v3 == (__int64 *)16 )
      v5 = 384LL;
    if ( *(_QWORD *)v5 && *(_QWORD *)(*(_QWORD *)v5 + 88LL) == a1 )
    {
      v6 = (__int64)(v3 + 34);
      if ( v3 == (__int64 *)16 )
        v6 = 200LL;
      if ( (*(_DWORD *)v6 & 4) == 0 )
      {
        v7 = (__int64)(v3 + 26);
        if ( v3 == (__int64 *)16 )
          v7 = 136LL;
        if ( *(_QWORD *)v7 != v7 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3 - 2, v4, 200LL, v2);
          v4 = v16;
        }
        if ( (_QWORD **)*v4 != &v15 )
LABEL_23:
          __fastfail(3u);
        *(_QWORD *)(v7 + 8) = v4;
        *(_QWORD *)v7 = &v15;
        *v4 = v7;
        v16 = (__int64 *)v7;
        *(_QWORD *)(*(_QWORD *)v5 + 88LL) = 0LL;
        v4 = v16;
      }
    }
    v3 = (__int64 *)*v3;
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v8 = v15;
  while ( 1 )
  {
    result = &v15;
    if ( v8 == &v15 )
      break;
    v9 = *v8;
    v10 = v8;
    v11 = v8;
    v8 = (_QWORD *)v9;
    if ( *(_QWORD **)(v9 + 8) != v10 )
      goto LABEL_23;
    v12 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v12 != v10 )
      goto LABEL_23;
    *v12 = v9;
    *(_QWORD *)(v9 + 8) = v12;
    v10[1] = v10;
    *v10 = v10;
    v13 = *(_QWORD *)(*(v11 - 13) + 424LL);
    RIMLockExclusive(v13 + 104);
    RIMIDERemoveInjectionDevice(*(v11 - 13));
    *(_QWORD *)(v13 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a1 + 820) &= ~0x200000u;
  return result;
}
