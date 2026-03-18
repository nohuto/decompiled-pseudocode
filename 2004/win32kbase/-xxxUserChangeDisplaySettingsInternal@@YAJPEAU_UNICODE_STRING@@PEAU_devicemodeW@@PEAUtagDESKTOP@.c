/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C000D480 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     IszzzUpdateCursorImageSupported @ 0x1C005DF74 (IszzzUpdateCursorImageSupported.c)
 *     DrvQueryMDEVPowerState @ 0x1C0062200 (DrvQueryMDEVPowerState.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006225C (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0062304 (-TrackFullscreenMode@@YAXH@Z.c)
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C0063B80 (PowerDimUndimResend.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     LogDiagCDS @ 0x1C00B0DAC (LogDiagCDS.c)
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C00B13D0 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     SafeEnableMDEV @ 0x1C00CC770 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC7F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C011CE78 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     DrvSetPruneFlag @ 0x1C014B800 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C014B940 (DrvSetVideoParameters.c)
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
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r9
  _QWORD *v26; // rcx
  const UNICODE_STRING *v27; // rsi
  __int64 v28; // r9
  int v29; // edx
  const UNICODE_STRING *v30; // rcx
  int v31; // eax
  ULONG TimeIncrement; // eax
  unsigned int v33; // r8d
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
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
        goto LABEL_139;
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
          goto LABEL_139;
        v31 = (int)qword_1C0252F50;
        if ( qword_1C0252F50 )
          v31 = qword_1C0252F50(String1, v13);
        if ( !v31 )
          goto LABEL_139;
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
              v43 = 1;
              v11 = DrvChangeDisplaySettingsPreValidate(String1a, v41, (__int64)&v48, (__int64)&v43);
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
                LogDiagCDS(String1a, v52, v48, (unsigned int)v19, v41, v45, v16, v44, v34, v11, v11, 11, 0, 0LL);
LABEL_79:
                if ( v11 >= 0 && v10 )
                  v11 = DrvSetVideoParameters(v27, 0);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v24) = 4;
                  WPP_RECORDER_SF_d(
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    v24,
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
                if ( qword_1C02524D8 )
                  qword_1C02524D8(0LL);
                if ( qword_1C0252AD8 )
                  v21 = qword_1C0252AD8();
                else
                  v21 = -1073741637;
                if ( v21 >= 0 && qword_1C0252AE0 )
                  qword_1C0252AE0();
LABEL_55:
                if ( qword_1C024D370 )
                {
                  v35 = qword_1C0252AE8 ? qword_1C0252AE8() : -1073741637;
                  if ( v35 >= 0 && qword_1C0252AF0 )
                    qword_1C0252AF0();
                }
                if ( qword_1C0251990 )
                  v20 = qword_1C0251990();
                if ( v20 >= 0 && qword_1C0251998 )
                  qword_1C0251998(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
                v22 = -((a4 & 0x40) == 0);
                v23 = a7;
                v11 = DrvChangeDisplaySettings(
                        String1a,
                        v19,
                        v41,
                        v45,
                        *(_QWORD *)(gpDispInfo + 16),
                        (__int64)&v46,
                        v22,
                        v16,
                        v44,
                        v42,
                        (__int64)&v53,
                        (__int64)a7);
                if ( qword_1C0251EC0 )
                  qword_1C0251EC0(a3, &v49, CompositionObject::Release, v25);
                if ( a3 )
                  ObfReferenceObject(a3);
                if ( v15 )
                  goto LABEL_76;
                if ( v11 == 2 )
                {
                  TrackFullscreenMode(v42);
                  if ( (_DWORD)v47 )
                  {
                    if ( (unsigned int)SafeDisableMDEV(1LL) )
                      SafeEnableMDEV(1LL);
                    if ( qword_1C0252538 )
                      qword_1C0252538(v37, v36);
                  }
                  v11 = 0;
                }
                else
                {
                  if ( v11 )
                  {
                    if ( v11 >= 0 )
                      goto LABEL_69;
                    if ( qword_1C0252538 )
                      qword_1C0252538(String1, v24);
                    if ( !(_BYTE)v53 )
                      goto LABEL_69;
                    v40 = 0;
                    v38 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
                    if ( (int)DrvSetDisplayConfig(
                                0,
                                0,
                                2447,
                                2,
                                v38,
                                0,
                                0LL,
                                0LL,
                                *(struct _MDEV **)(gpDispInfo + 16),
                                (__int64)&v46,
                                0LL,
                                0LL,
                                (__int64)&v40,
                                0LL,
                                (__int64)v23) < 0 )
                      goto LABEL_69;
                    TrackFullscreenMode(0);
                    if ( v40 )
                      goto LABEL_69;
                    v29 = 0;
                    *(_QWORD *)(gpDispInfo + 16) = v46;
                  }
                  else
                  {
                    TrackFullscreenMode(v42);
                    *(_QWORD *)(gpDispInfo + 16) = v46;
                    PowerDimUndimResend();
                    v29 = v42;
                  }
                  xxxResetDisplayDevice((__int64)a3, v29, 0, v28);
                }
LABEL_69:
                if ( a3 )
                {
                  v26 = (_QWORD *)*((_QWORD *)a3 + 1);
                  if ( (*(_DWORD *)(*v26 + 64LL) & 1) == 0 )
                  {
                    if ( qword_1C02529E0 )
                      qword_1C02529E0(v26[3], 1LL, 66693LL);
                  }
                }
                if ( qword_1C02524D8 )
                  qword_1C02524D8(1LL);
                if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C0252B00 )
                  qword_1C0252B00();
LABEL_76:
                if ( qword_1C0251FD8 )
                  qword_1C0251FD8(&v49);
                v27 = String1a;
                goto LABEL_79;
              }
LABEL_139:
              v11 = -1;
              goto LABEL_26;
            }
            if ( (a4 & 0x20) == 0 )
              goto LABEL_139;
            v39 = 0;
            v30 = String1a;
LABEL_138:
            v11 = DrvSetVideoParameters(v30, v39);
            if ( v11 >= 0 )
              goto LABEL_26;
            goto LABEL_139;
          }
          LOBYTE(v14) = 1;
        }
        v11 = DrvSetPruneFlag(v9, v14, (unsigned int)a6);
        goto LABEL_26;
      }
      if ( a3 == grpdeskRitInput )
        goto LABEL_38;
      if ( (a4 & 0x20) == 0 )
        goto LABEL_139;
      v39 = 0;
    }
    v30 = v9;
    goto LABEL_138;
  }
  if ( (a4 & 0x20) == 0 || (v11 = DrvSetVideoParameters(v9, 1), v11 < 0) )
    v11 = -5;
LABEL_26:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(String1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
