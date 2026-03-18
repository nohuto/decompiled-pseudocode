/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0062740
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C013E1B4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C0062A28 (IsPostIAMShellHookMessageExSupported.c)
 *     IsCreateBitmapStripSupported @ 0x1C0062A54 (IsCreateBitmapStripSupported.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C0062A80 (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C0062B20 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0062BA0 (SnapshotMonitorRects.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00BA7A8 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C00BA7E0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00BA888 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int16 v7; // bp
  int updated; // r14d
  int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  void (__fastcall *v16)(__int128 *); // rax
  int v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  char v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = *((_WORD *)gpsi + 3498);
  v23 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v4 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v4 = SnapshotMonitorRects();
    if ( v4 && qword_1C0251EC0 )
      qword_1C0251EC0(v4, &v22, Win32FreePool, a4);
  }
  DestroyMonitorDCs();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
  updated = UpdateUserScreen();
  if ( updated < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
    return (unsigned int)updated;
  }
  v9 = -1073741637;
  if ( qword_1C0252A28 )
    v10 = qword_1C0252A28();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C0252A30 )
    qword_1C0252A30();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
  if ( qword_1C0252A38 )
    v11 = qword_1C0252A38();
  else
    v11 = -1073741637;
  if ( v11 >= 0 && qword_1C0252A40 )
    qword_1C0252A40(a1, v7 != *((_WORD *)gpsi + 3498), a3);
  ResetSystemColors();
  if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C0252A60 )
    qword_1C0252A60();
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v13 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v13);
  }
  if ( qword_1C0252A68 )
    v14 = qword_1C0252A68();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0252A70 )
    qword_1C0252A70(a1);
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 264);
    if ( v12 )
    {
      Win32FreePool(v12);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( !a3 )
    goto LABEL_34;
  v19 = qword_1C0252A78 ? qword_1C0252A78() : -1073741637;
  if ( v19 < 0 )
    goto LABEL_34;
  v20 = (int)qword_1C0252A80;
  if ( qword_1C0252A80 )
    v20 = qword_1C0252A80(a1);
  if ( v20 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v12, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
    *(_QWORD *)(a1 + 264) = v4;
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0252A90 )
      qword_1C0252A90(a1, 35LL, 1LL);
    if ( qword_1C0252A98 )
      v21 = qword_1C0252A98();
    else
      v21 = -1073741637;
    if ( v21 >= 0 && qword_1C0252AA0 )
      qword_1C0252AA0(a1, 0LL, 2LL);
    if ( !v4 )
      goto LABEL_45;
    v16 = (void (__fastcall *)(__int128 *))qword_1C0251ED0;
  }
  else
  {
LABEL_34:
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0252A90 )
      qword_1C0252A90(a1, 35LL, 0LL);
    if ( qword_1C0252AA8 )
      v15 = qword_1C0252AA8();
    else
      v15 = -1073741637;
    if ( v15 >= 0 && qword_1C0252AB0 )
      qword_1C0252AB0(a1, v4, v7, 0LL);
    if ( !v4 )
      goto LABEL_45;
    v16 = (void (__fastcall *)(__int128 *))qword_1C0251FE8;
  }
  if ( v16 )
    v16(&v22);
LABEL_45:
  if ( qword_1C0252AB8 )
    v17 = qword_1C0252AB8();
  else
    v17 = -1073741637;
  if ( v17 >= 0 && qword_1C0252AC0 )
    qword_1C0252AC0(a1, 1LL);
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) )
  {
    if ( qword_1C0252AC8 )
      v9 = qword_1C0252AC8();
    if ( v9 >= 0 && qword_1C0252AD0 )
      qword_1C0252AD0(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
  }
  if ( !a3 && qword_1C0252780 )
    qword_1C0252780();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  return (unsigned int)updated;
}
