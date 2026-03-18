/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D1854
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D1268 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0013E30 (IsCurrentDesktopComposed.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C011E29C (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01D0AB0 (-IsExtendTopology@@YAHXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C0274814 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rcx
  int v11; // esi
  void *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v20; // rax
  unsigned int v22; // [rsp+50h] [rbp-69h] BYREF
  int v23; // [rsp+54h] [rbp-65h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v25[4]; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-49h] BYREF
  _DWORD *v27; // [rsp+90h] [rbp-29h]
  __int64 v28; // [rsp+98h] [rbp-21h]
  int *v29; // [rsp+A0h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-11h]
  int *v31; // [rsp+B0h] [rbp-9h]
  __int64 v32; // [rsp+B8h] [rbp-1h]
  int *v33; // [rsp+C0h] [rbp+7h]
  __int64 v34; // [rsp+C8h] [rbp+Fh]

  v6 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v25, gRotationProcessLock);
  if ( grpdeskRitInput && (v7 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v8 = *(_DWORD *)(v7 + 56);
  else
    v8 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
  EtwTraceSmoothRotationStart(v6, a3, v8);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v9 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  if ( v11 && !v9 )
  {
    v12 = (void *)ReferenceDwmApiPort(v10);
    DwmAsyncNotifyRotationModeChange(v12);
    v15 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v16 = UserReferenceDwmApiPort(v15, gdwInAtomicOperation, v13, v14);
    UserSessionSwitchLeaveCrit(v17);
    DwmSyncFlushAndWaitForBatch(v16);
    EnterCrit(0LL, 1LL);
  }
  v19 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v11 != 0 ? 24 : 8);
  if ( v11 && !v9 )
  {
    v20 = (void *)ReferenceDwmApiPort(v18);
    DwmAsyncNotifyRotationModeChange(v20);
  }
  EtwTraceSmoothRotationStop(v6, a3);
  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x200000000001LL) != 0
    && (qword_1C032A410 & 0x200000000001LL) == qword_1C032A410 )
  {
    v22 = v19;
    v33 = (int *)&v22;
    v23 = v11;
    v31 = &v23;
    v24 = a3;
    v29 = (int *)&v24;
    v25[0] = v6;
    v27 = v25;
    v34 = 4LL;
    v32 = 4LL;
    v30 = 4LL;
    v28 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A3F8, (int)&dword_1C02EEAA5, 0, 0, 6u, &v26);
  }
  return v19;
}
