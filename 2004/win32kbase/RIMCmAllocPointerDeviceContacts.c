/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C0180ABC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C016BD60 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0180D64 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rax
  unsigned int i; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // esi
  _QWORD *v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r11
  _QWORD *v25; // r8

  v5 = 0;
  v6 = *(unsigned int *)(a1 + 720);
  v7 = a2;
  v8 = *(unsigned int *)(a1 + 24);
  v9 = v6 - 1;
  if ( (_DWORD)v8 != 7 )
    v9 = v6;
  if ( (unsigned int)v6 < v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, v8, a4);
    v6 = *(unsigned int *)(a1 + 720);
    v8 = *(unsigned int *)(a1 + 24);
  }
  v10 = v6 - 1;
  if ( (_DWORD)v8 != 7 )
    v10 = v6;
  if ( (unsigned int)v6 > v10 + 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, v8, a4);
    v6 = *(unsigned int *)(a1 + 720);
  }
  if ( !(_DWORD)v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, v8, a4);
    LODWORD(v6) = *(_DWORD *)(a1 + 720);
  }
  v11 = 10;
  if ( (unsigned int)v6 <= 0xA )
    v11 = v6;
  *(_DWORD *)(a1 + 944) = v11;
  v12 = 2840LL * *(unsigned int *)(a1 + 720);
  *(_QWORD *)(a1 + 936) = 0LL;
  v13 = Win32AllocPoolZInit(v12, v7);
  *(_QWORD *)(a1 + 912) = v13;
  if ( v13 && (v16 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 944), v7), (*(_QWORD *)(a1 + 936) = v16) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 944); *v19 = v19 )
    {
      v18 = i++;
      v19 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 16 * v18);
      v19[1] = v19;
    }
    v20 = *(_DWORD *)(a1 + 720);
    v21 = (_QWORD *)(a1 + 920);
    *(_QWORD *)(a1 + 928) = a1 + 920;
    *(_QWORD *)(a1 + 920) = a1 + 920;
    v22 = *(_DWORD *)(a1 + 24) == 7;
    if ( v22 < v20 )
    {
      v23 = a1 + 920;
      v24 = a1 + 920;
      while ( 1 )
      {
        v25 = (_QWORD *)(2840LL * v22 + *(_QWORD *)(a1 + 912) + 16LL);
        if ( v24 != v23 )
          __fastfail(3u);
        *v25 = v23;
        ++v22;
        v25[1] = v21;
        *v21 = v25;
        *(_QWORD *)(a1 + 928) = v25;
        if ( v22 >= v20 )
          break;
        v24 = *v25;
        v21 = v25;
      }
    }
  }
  else
  {
    RIMCmFreePointerDeviceContacts(a1, v14, v15);
    return (unsigned int)-1073741670;
  }
  return v5;
}
