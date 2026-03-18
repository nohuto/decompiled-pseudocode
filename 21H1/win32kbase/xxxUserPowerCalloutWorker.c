/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C005BA70
 * Callers:
 *     <none>
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C005BC10 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x1C005BC94 (IsxxxSetInformationThreadSupported.c)
 *     EtwTraceCompletePowerRequest @ 0x1C005BCC0 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  __int64 v1; // rdi
  int v2; // eax
  struct tagPOWERREQUEST *v3; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  v0 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v1 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0 )
      goto LABEL_26;
    v2 = (int)qword_1C02584C8;
    if ( qword_1C02584C8 )
      v2 = qword_1C02584C8(-2LL, 7LL, &v9, 24LL);
    if ( v2 < 0 )
LABEL_26:
      v1 = 0LL;
    else
      v0 = 1;
  }
  gpPowerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v3 = UnqueuePowerRequest();
    if ( !v3 )
      break;
    if ( v1 )
    {
      v8 = 0LL;
      v7 = 0LL;
      if ( qword_1C0257E80 )
        qword_1C0257E80(v3, &v7, CancelPowerRequest);
      gpPowerRequestCurrent = v3;
      v4 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v3 + 8);
      if ( v4 )
        v5 = xxxUserPowerEventCalloutWorker(v4);
      else
        v5 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v3 + 14) = v5;
      gpPowerRequestCurrent = 0LL;
      if ( qword_1C0257E90 )
        qword_1C0257E90(&v7);
    }
    if ( *((_BYTE *)v3 + 72) )
    {
      KeSetEvent((PRKEVENT)((char *)v3 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v3, *((unsigned int *)v3 + 14));
      Win32FreePool(v3);
    }
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C02584C8 )
    qword_1C02584C8(-2LL, 9LL, &v9, 24LL);
  return 1LL;
}
