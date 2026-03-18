/*
 * XREFs of xxxResetDisplayDevice @ 0x1C00AB4F0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C0144504 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     DestroyMonitorDCs @ 0x1C0049D20 (DestroyMonitorDCs.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 *     SnapshotMonitorRects @ 0x1C00AB1F0 (SnapshotMonitorRects.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00AB3EC (-ResetSystemColors@@YAXXZ.c)
 *     IsCreateBitmapStripSupported @ 0x1C00AB48C (IsCreateBitmapStripSupported.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00AB4B8 (IsPostIAMShellHookMessageExSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00ADAC8 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C00ADB00 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00ADBA8 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rsi
  unsigned __int16 v6; // bp
  int updated; // r14d
  int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  void (__fastcall *v17)(__int128 *); // rax
  int v18; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  char v26; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 3498);
  v24 = 0LL;
  v23 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_DWORD **)(a1 + 264)) != 0LL )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 && qword_1C0257E80 )
      qword_1C0257E80(v3, &v23, Win32FreePool);
  }
  DestroyMonitorDCs();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
  updated = UpdateUserScreen();
  if ( updated < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
    return (unsigned int)updated;
  }
  v8 = -1073741637;
  if ( qword_1C02589E8 )
    v9 = qword_1C02589E8();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02589F0 )
    qword_1C02589F0();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
  if ( qword_1C02589F8 )
    v10 = qword_1C02589F8();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C0258A00 )
    qword_1C0258A00(a1, v6 != *((_WORD *)gpsi + 3498), a3);
  ResetSystemColors();
  if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C0258A20 )
    qword_1C0258A20();
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v14 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v14);
  }
  if ( qword_1C0258A28 )
    v15 = qword_1C0258A28();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C0258A30 )
    qword_1C0258A30(a1);
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 264);
    if ( v12 )
    {
      Win32FreePool(v12, v11, v13);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( !a3 )
    goto LABEL_34;
  v20 = qword_1C0258A38 ? qword_1C0258A38() : -1073741637;
  if ( v20 < 0 )
    goto LABEL_34;
  v21 = (int)qword_1C0258A40;
  if ( qword_1C0258A40 )
    v21 = qword_1C0258A40(a1);
  if ( v21 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v12, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
    *(_QWORD *)(a1 + 264) = v3;
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0258A50 )
      qword_1C0258A50(a1, 35LL, 1LL);
    if ( qword_1C0258A58 )
      v22 = qword_1C0258A58();
    else
      v22 = -1073741637;
    if ( v22 >= 0 && qword_1C0258A60 )
      qword_1C0258A60(a1, 0LL, 2LL);
    if ( !v3 )
      goto LABEL_45;
    v17 = (void (__fastcall *)(__int128 *))qword_1C0257E90;
  }
  else
  {
LABEL_34:
    if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0258A50 )
      qword_1C0258A50(a1, 35LL, 0LL);
    if ( qword_1C0258A68 )
      v16 = qword_1C0258A68();
    else
      v16 = -1073741637;
    if ( v16 >= 0 && qword_1C0258A70 )
      qword_1C0258A70(a1, v3, v6, 0LL);
    if ( !v3 )
      goto LABEL_45;
    v17 = (void (__fastcall *)(__int128 *))qword_1C0257FA8;
  }
  if ( v17 )
    v17(&v23);
LABEL_45:
  if ( qword_1C0258A78 )
    v18 = qword_1C0258A78();
  else
    v18 = -1073741637;
  if ( v18 >= 0 && qword_1C0258A80 )
    qword_1C0258A80(a1, 1LL);
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) )
  {
    if ( qword_1C0258A88 )
      v8 = qword_1C0258A88();
    if ( v8 >= 0 && qword_1C0258A90 )
      qword_1C0258A90(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
  }
  if ( !a3 && qword_1C0258740 )
    qword_1C0258740();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  return (unsigned int)updated;
}
