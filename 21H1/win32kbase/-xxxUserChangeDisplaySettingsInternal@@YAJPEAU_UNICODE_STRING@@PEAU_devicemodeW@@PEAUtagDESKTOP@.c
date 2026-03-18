/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C003EB00 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     IszzzUpdateCursorImageSupported @ 0x1C00504B4 (IszzzUpdateCursorImageSupported.c)
 *     PowerDimUndimResend @ 0x1C0053CF0 (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C005425C (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0054278 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1C0054320 (DrvQueryMDEVPowerState.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C009C4A0 (DrvChangeDisplaySettings.c)
 *     LogDiagCDS @ 0x1C009C7A4 (LogDiagCDS.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C009CA1C (DrvChangeDisplaySettingsPreValidate.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     SafeEnableMDEV @ 0x1C00CBEC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBF40 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0123338 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 *     DrvSetPruneFlag @ 0x1C0151B50 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0151C90 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        const UNICODE_STRING *String1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  const UNICODE_STRING *v9; // r12
  int v10; // r13d
  int v11; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r14d
  int v16; // r12d
  _DWORD *v17; // rax
  char v18; // dl
  enum _MODE v19; // r15d
  int v20; // edi
  int v21; // eax
  int v22; // r8d
  void *v23; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  const UNICODE_STRING *v27; // rsi
  __int64 v28; // rdx
  const UNICODE_STRING *v29; // rcx
  int v30; // eax
  wchar_t *v31; // rdx
  ULONG TimeIncrement; // eax
  unsigned int v33; // r8d
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rdx
  int v39; // [rsp+28h] [rbp-A1h]
  char v40; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v41; // [rsp+8Ch] [rbp-3Dh]
  int v42; // [rsp+90h] [rbp-39h]
  int v43; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v44; // [rsp+98h] [rbp-31h]
  int v45; // [rsp+9Ch] [rbp-2Dh]
  __int64 v46; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-21h]
  __int64 v48; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-1h]
  PCUNICODE_STRING String1a; // [rsp+118h] [rbp+4Fh]
  struct _devicemodeW *v52; // [rsp+120h] [rbp+57h]
  __int64 v53; // [rsp+130h] [rbp+67h] BYREF

  v52 = a2;
  String1a = String1;
  v46 = 0LL;
  LOBYTE(v53) = 0;
  v50 = 0LL;
  v9 = String1;
  v49 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(String1, &ChangeDisplayModeStart, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      12,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        13,
        (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
    }
  }
  v41 = a4 & 1;
  if ( (a4 & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      14,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      15,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  v42 = a4 & 4;
  if ( (a4 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      16,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      17,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 0x10) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      18,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  LODWORD(v47) = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      19,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  v44 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      20,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 0x10000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      21,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  v10 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      22,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 0x100) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      23,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 0x200) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      14,
      24,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_25;
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
  {
    if ( gbMDEVDisabled )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_141;
      v39 = 1;
    }
    else
    {
      LOBYTE(String1) = (a4 & 0x10000008) != 0;
      if ( ((unsigned __int8)String1 & ((a4 & 1) == 0)) != 0
        || (String1 = (const UNICODE_STRING *)(a4 & 0x60000000), (a4 & 0x10000000) != 0) && (_DWORD)String1
        || (v13 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (_DWORD)String1
        || (_DWORD)String1 == 1610612736
        || (a4 & 0x100) != 0 && a4 != 256
        || (a4 & 0x200) != 0 && a4 != 512 )
      {
LABEL_25:
        v11 = -4;
        goto LABEL_26;
      }
      if ( (gdwPUDFlags & 0x20000000) != 0 )
      {
        if ( (PVOID)PsGetCurrentProcess(String1, 2147483652LL) != gpepCSRSS )
          goto LABEL_141;
        v30 = (int)qword_1C0258F10;
        if ( qword_1C0258F10 )
          v30 = qword_1C0258F10(String1, v13);
        if ( !v30 )
          goto LABEL_141;
      }
      if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
        a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
      if ( (PVOID)PsGetCurrentProcess(String1, v13) == gpepCSRSS )
      {
        if ( !a3 )
          a3 = grpdeskRitInput;
LABEL_38:
        if ( (a4 & 0x100) != 0 )
        {
          v14 = 0LL;
        }
        else
        {
          if ( (a4 & 0x200) == 0 )
          {
            v15 = a4 & 0x10000002;
            v16 = a4 & 0x80;
            v45 = (a4 & 0x10000002) == 0;
            v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
            v18 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
            String1 = (const UNICODE_STRING *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
            if ( !v18 )
              String1 = (const UNICODE_STRING *)DispBroker::DispBrokerClient::s_pSessionBroker;
            v19 = a6;
            if ( *(_DWORD *)&String1->Length == 3 )
            {
              v48 = 0LL;
              v31 = *(wchar_t **)(*(_QWORD *)(gpDispInfo + 96) + 232LL);
              v43 = 1;
              v11 = DrvChangeDisplaySettingsPreValidate(String1a, v31, (__int64)v52, a6, v41, (wchar_t **)&v48, &v43);
              if ( v11 )
                goto LABEL_26;
              if ( v43 )
              {
                v47 = MEMORY[0xFFFFF78000000320];
                TimeIncrement = KeQueryTimeIncrement();
                v33 = a4;
                v27 = String1a;
                v34 = v47 * TimeIncrement;
                v11 = xxxDispBrokerChangeDisplaySettings(String1a, v52, v33, v19 == UserMode);
                LogDiagCDS((__int64)String1a, v52, v48, v19, v41, v45, v16, v44, v34, v11, v11, 11, 0, 0LL);
LABEL_81:
                if ( v11 >= 0 && v10 )
                  v11 = DrvSetVideoParameters(v27, 0);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v25) = 4;
                  WPP_RECORDER_SF_d(
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    v25,
                    14,
                    25,
                    (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids,
                    v11);
                }
                goto LABEL_26;
              }
              goto LABEL_46;
            }
            if ( v18 )
              v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
            if ( *v17 != 2 )
            {
LABEL_46:
              v20 = -1073741637;
              if ( v15 )
                goto LABEL_55;
              if ( CreateCachedMonitor() )
              {
                if ( qword_1C0258498 )
                  qword_1C0258498(0LL);
                if ( qword_1C0258A98 )
                  v21 = qword_1C0258A98();
                else
                  v21 = -1073741637;
                if ( v21 >= 0 && qword_1C0258AA0 )
                  qword_1C0258AA0();
LABEL_55:
                if ( qword_1C0253310 )
                {
                  v35 = qword_1C0258AA8 ? qword_1C0258AA8() : -1073741637;
                  if ( v35 >= 0 && qword_1C0258AB0 )
                    qword_1C0258AB0();
                }
                if ( qword_1C0257950 )
                  v20 = qword_1C0257950();
                if ( v20 >= 0 && qword_1C0257958 )
                  qword_1C0257958(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
                v22 = -((a4 & 0x40) == 0);
                if ( a3 )
                  v23 = (void *)***((_QWORD ***)a3 + 1);
                else
                  v23 = 0LL;
                v24 = a7;
                v11 = DrvChangeDisplaySettings(
                        String1a,
                        *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL),
                        (__int64)v52,
                        v23,
                        v19,
                        v41,
                        v45,
                        *(struct _MDEV **)(gpDispInfo + 16),
                        (struct _MDEV **)&v46,
                        v22,
                        v16,
                        v44,
                        v42,
                        &v53,
                        (__int64)a7);
                if ( qword_1C0257E80 )
                  qword_1C0257E80(a3, &v49, CompositionObject::Release);
                if ( a3 )
                  ObfReferenceObject(a3);
                if ( v15 )
                  goto LABEL_78;
                if ( v11 == 2 )
                {
                  TrackFullscreenMode(v42);
                  if ( (_DWORD)v47 )
                  {
                    if ( (unsigned int)SafeDisableMDEV(1LL) )
                      SafeEnableMDEV(1LL);
                    if ( qword_1C02584F8 )
                      qword_1C02584F8(v37, v36);
                  }
                  v11 = 0;
                }
                else
                {
                  if ( v11 )
                  {
                    if ( v11 >= 0 )
                      goto LABEL_71;
                    if ( qword_1C02584F8 )
                      qword_1C02584F8(String1, v25);
                    if ( !(_BYTE)v53 )
                      goto LABEL_71;
                    v40 = 0;
                    v38 = a3 ? (void *)***((_QWORD ***)a3 + 1) : 0LL;
                    if ( (int)DrvSetDisplayConfig(
                                0,
                                0LL,
                                2447LL,
                                2u,
                                v38,
                                0,
                                0LL,
                                0LL,
                                *(struct _MDEV **)(gpDispInfo + 16),
                                (struct _MDEV **)&v46,
                                0LL,
                                0LL,
                                &v40,
                                0LL,
                                (__int64)v24) < 0 )
                      goto LABEL_71;
                    TrackFullscreenMode(0);
                    if ( v40 )
                      goto LABEL_71;
                    v28 = 0LL;
                    *(_QWORD *)(gpDispInfo + 16) = v46;
                  }
                  else
                  {
                    TrackFullscreenMode(v42);
                    *(_QWORD *)(gpDispInfo + 16) = v46;
                    PowerDimUndimResend();
                    v28 = (unsigned int)v42;
                  }
                  xxxResetDisplayDevice(a3, v28, 0LL);
                }
LABEL_71:
                if ( a3 )
                {
                  v26 = (_QWORD *)*((_QWORD *)a3 + 1);
                  if ( (*(_DWORD *)(*v26 + 64LL) & 1) == 0 )
                  {
                    if ( qword_1C02589A0 )
                      qword_1C02589A0(v26[3], 1LL, 66693LL);
                  }
                }
                if ( qword_1C0258498 )
                  qword_1C0258498(1LL);
                if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C0258AC0 )
                  qword_1C0258AC0();
LABEL_78:
                if ( qword_1C0257F98 )
                  qword_1C0257F98(&v49);
                v27 = String1a;
                goto LABEL_81;
              }
LABEL_141:
              v11 = -1;
              goto LABEL_26;
            }
            if ( (a4 & 0x20) == 0 )
              goto LABEL_141;
            v39 = 0;
            v29 = String1a;
LABEL_140:
            v11 = DrvSetVideoParameters(v29, v39);
            if ( v11 >= 0 )
              goto LABEL_26;
            goto LABEL_141;
          }
          LOBYTE(v14) = 1;
        }
        v11 = DrvSetPruneFlag(v9, v14, (unsigned int)a6);
        goto LABEL_26;
      }
      if ( a3 == grpdeskRitInput )
        goto LABEL_38;
      if ( (a4 & 0x20) == 0 )
        goto LABEL_141;
      v39 = 0;
    }
    v29 = v9;
    goto LABEL_140;
  }
  if ( (a4 & 0x20) == 0 || (v11 = DrvSetVideoParameters(v9, 1), v11 < 0) )
    v11 = -5;
LABEL_26:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(String1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
