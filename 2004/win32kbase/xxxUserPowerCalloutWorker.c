/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C0064450
 * Callers:
 *     <none>
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00645F0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x1C0064674 (IsxxxSetInformationThreadSupported.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00646A0 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  __int64 v1; // rdi
  int v2; // eax
  struct tagPOWERREQUEST *v3; // rbx
  __int64 v4; // r9
  struct _WIN32_POWEREVENT_PARAMETERS *v5; // rcx
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h]

  v0 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v1 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0 )
      goto LABEL_26;
    v2 = (int)qword_1C0252508;
    if ( qword_1C0252508 )
      v2 = qword_1C0252508(-2LL, 7LL, &v10, 24LL);
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
      v9 = 0LL;
      v8 = 0LL;
      if ( qword_1C0251EC0 )
        qword_1C0251EC0(v3, &v8, CancelPowerRequest, v4);
      gpPowerRequestCurrent = v3;
      v5 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v3 + 8);
      if ( v5 )
        v6 = xxxUserPowerEventCalloutWorker(v5);
      else
        v6 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v3 + 14) = v6;
      gpPowerRequestCurrent = 0LL;
      if ( qword_1C0251ED0 )
        qword_1C0251ED0(&v8);
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
  if ( v0 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C0252508 )
    qword_1C0252508(-2LL, 9LL, &v10, 24LL);
  return 1LL;
}
