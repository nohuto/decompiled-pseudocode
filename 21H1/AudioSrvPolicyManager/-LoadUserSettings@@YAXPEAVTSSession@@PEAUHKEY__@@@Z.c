/*
 * XREFs of ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x18002C608
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x18002CCFC (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

void __fastcall LoadUserSettings(struct TSSession *a1, HKEY a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // ebx
  unsigned int pvData; // [rsp+40h] [rbp-48h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-40h] BYREF
  unsigned int *p_pvData; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  v4 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u )
  {
    v5 = *(_DWORD *)a1;
    v12 = 0;
    pvData = v5;
    v11 = 4;
    p_pvData = &pvData;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18004BC64, 0LL, 0LL, 3u, &v9);
  }
  v6 = 1;
  pcbData = 4;
  *((_DWORD *)a1 + 80) = 1;
  if ( !RegGetValueW(a2, 0LL, L"UserDuckingPreference", 0x10u, 0LL, &pvData, &pcbData) )
  {
    if ( pvData <= 3 )
      v6 = pvData;
    *((_DWORD *)a1 + 80) = v6;
  }
}
