/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180009198
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x180008A00 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180036790 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003DD00 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x18003DE20 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x18003DF60 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x18003E060 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x1800801E0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000932C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int *a10,
        __int64 a11)
{
  int *v12; // rbx
  int v16; // edi
  DWORD v17; // ebx
  int v19; // eax
  char v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+64h] [rbp-9Ch] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+100h] [rbp+0h] BYREF
  int *v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  char *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  int *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  int *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+160h] [rbp+60h] BYREF

  v12 = a10;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0538, 0, 0, 2u, &v34);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( a10 && ((unsigned int)*a10 >= 0x10 || a6 != 6) )
    goto LABEL_17;
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( a6 == 6 && !a10 )
      {
        v21 = -1;
        MEMORY[0] = MEMORY[0] & 0xF;
        v12 = &v21;
      }
      goto LABEL_7;
    }
LABEL_17:
    v16 = -1073741583;
    goto LABEL_9;
  }
  if ( (a7 & 1) != a7 )
    goto LABEL_17;
LABEL_7:
  v16 = HampClientCreate(a1, a2, a3, a4, a5, a6, a7, 0LL, 0LL, v12, a11);
  if ( v16 >= 0 )
    v16 = 0;
LABEL_9:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    if ( *(_QWORD *)a11 )
      v19 = *(_DWORD *)(*(_QWORD *)a11 + 148LL);
    else
      v19 = 0;
    v22 = v19;
    v33 = 4LL;
    v32 = &v21;
    v31 = 4LL;
    v30 = &v22;
    v27 = 4LL;
    v28 = &v20;
    v21 = v16;
    v26 = (int *)&v23;
    v20 = a6;
    v23 = a2;
    v29 = 1LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009FEA0, 0, 0, 6u, &v25);
  }
  return (unsigned int)v16;
}
