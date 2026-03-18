/*
 * XREFs of xxxResetDisplayDevice @ 0x1C006F460
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C013BE64 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00165D8 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00166B8 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C006F748 (IsPostIAMShellHookMessageExSupported.c)
 *     IsCreateBitmapStripSupported @ 0x1C006F774 (IsCreateBitmapStripSupported.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006F7A0 (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C006F840 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C006F8C0 (SnapshotMonitorRects.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int16 v6; // bp
  int updated; // r14d
  int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  void (__fastcall *v14)(__int128 *); // rax
  int v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  char v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 3498);
  v21 = 0LL;
  v20 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 && qword_1C024FEC0 )
      qword_1C024FEC0(v3, &v20, Win32FreePool);
  }
  DestroyMonitorDCs();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
  updated = UpdateUserScreen();
  if ( updated < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
    return (unsigned int)updated;
  }
  v8 = -1073741637;
  if ( qword_1C0250A28 )
    v9 = qword_1C0250A28();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C0250A30 )
    qword_1C0250A30();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
  if ( qword_1C0250A38 )
    v10 = qword_1C0250A38();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C0250A40 )
    qword_1C0250A40(a1, v6 != *((_WORD *)gpsi + 3498), a3);
  ResetSystemColors();
  if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C0250A60 )
    qword_1C0250A60();
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange();
  }
  if ( qword_1C0250A68 )
    v12 = qword_1C0250A68();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C0250A70 )
    qword_1C0250A70(a1);
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 264);
    if ( v11 )
    {
      Win32FreePool(v11);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( !a3 )
    goto LABEL_34;
  v17 = qword_1C0250A78 ? qword_1C0250A78() : -1073741637;
  if ( v17 < 0 )
    goto LABEL_34;
  v18 = (int)qword_1C0250A80;
  if ( qword_1C0250A80 )
    v18 = qword_1C0250A80(a1);
  if ( v18 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v11, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
    *(_QWORD *)(a1 + 264) = v3;
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0250A90 )
      qword_1C0250A90(a1, 35LL, 1LL);
    if ( qword_1C0250A98 )
      v19 = qword_1C0250A98();
    else
      v19 = -1073741637;
    if ( v19 >= 0 && qword_1C0250AA0 )
      qword_1C0250AA0(a1, 0LL, 2LL);
    if ( !v3 )
      goto LABEL_45;
    v14 = (void (__fastcall *)(__int128 *))qword_1C024FED0;
  }
  else
  {
LABEL_34:
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0250A90 )
      qword_1C0250A90(a1, 35LL, 0LL);
    if ( qword_1C0250AA8 )
      v13 = qword_1C0250AA8();
    else
      v13 = -1073741637;
    if ( v13 >= 0 && qword_1C0250AB0 )
      qword_1C0250AB0(a1, v3, v6, 0LL);
    if ( !v3 )
      goto LABEL_45;
    v14 = (void (__fastcall *)(__int128 *))qword_1C024FFE8;
  }
  if ( v14 )
    v14(&v20);
LABEL_45:
  if ( qword_1C0250AB8 )
    v15 = qword_1C0250AB8();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C0250AC0 )
    qword_1C0250AC0(a1, 1LL);
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) )
  {
    if ( qword_1C0250AC8 )
      v8 = qword_1C0250AC8();
    if ( v8 >= 0 && qword_1C0250AD0 )
      qword_1C0250AD0(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
  }
  if ( !a3 && qword_1C0250780 )
    qword_1C0250780();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  return (unsigned int)updated;
}
