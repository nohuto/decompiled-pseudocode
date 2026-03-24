/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000D1D4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0077390 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000BCAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000CF7C (HUBFDO_GetPortStatusForDebugging.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00749E4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  __int64 v5; // r12
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  _WORD *v16; // rcx
  int v17; // eax
  KIRQL v18; // al
  KIRQL v19; // r11
  __int64 v20; // rcx
  char v21; // dl
  unsigned __int64 v22; // r14
  _QWORD *v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // r12d
  unsigned int j; // r10d
  _BYTE *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // edx
  bool v36; // sf
  const EVENT_DESCRIPTOR *v37; // rdx
  int v38; // edx
  PKSPIN_LOCK *v39; // r8
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  void *v43; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-30h]
  __int64 v45; // [rsp+40h] [rbp-28h]
  PKSPIN_LOCK SpinLock[2]; // [rsp+48h] [rbp-20h] BYREF

  v5 = a2;
  v45 = a2;
  v43 = 0LL;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C0066170);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v5,
          a3,
          &v43,
          0LL);
  if ( (v11 & 0x80000000) == 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v43, 35LL, a3);
    if ( (v11 & 0x80000000) == 0 )
    {
      v8 = *(unsigned __int16 *)v43;
      memset(v43, 0, a3);
      for ( i = *(_QWORD **)(v10 + 2360); ; i = (_QWORD *)*i )
      {
        v13 = i - 31;
        if ( (_QWORD *)(v10 + 2360) == i )
          goto LABEL_9;
        if ( *((unsigned __int16 *)v13 + 100) == v8 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_9:
        *(_DWORD *)((char *)v43 + 31) = 3;
        goto LABEL_10;
      }
      *(_DWORD *)((char *)v43 + 31) = *((_DWORD *)v13 + 356);
LABEL_10:
      if ( *(_BYTE *)(v10 + 12) )
        HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16),
              0LL,
              1LL);
      if ( !v14 )
        goto LABEL_39;
      do
      {
        if ( v14 != *(_QWORD *)(v10 + 2656)
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v14,
                                     off_1C00660D0)
                                 + 48) == v8 )
        {
          break;
        }
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                v14,
                1LL);
      }
      while ( v14 );
      if ( v14 )
      {
        v15 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v14,
                            off_1C00660D0)
                        + 24);
        *(_DWORD *)v43 = v8;
        v16 = v43;
        *(_OWORD *)((char *)v43 + 4) = *(_OWORD *)(v15 + 1988);
        v16[10] = *(_WORD *)(v15 + 2004);
        *(_DWORD *)((char *)v43 + 27) = 0;
        v17 = *(_DWORD *)(v15 + 172);
        if ( a5 )
        {
          if ( v17 == 3 )
            *((_BYTE *)v43 + 23) = 2;
          else
            *((_BYTE *)v43 + 23) = v17;
        }
        else
        {
          *((_BYTE *)v43 + 23) = v17 == 0;
        }
        *(_WORD *)((char *)v43 + 25) = *(_WORD *)(v15 + 1648);
        if ( (*(_DWORD *)(v15 + 1632) & 2) != 0 )
          *((_BYTE *)v43 + 24) = 1;
        SpinLock[0] = (PKSPIN_LOCK)(v15 + 40);
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 40));
        v19 = v18;
        if ( (*(_DWORD *)(v15 + 1636) & 0x10) != 0 && (v20 = *(_QWORD *)(v15 + 48)) != 0 )
        {
          v21 = *(_BYTE *)(v20 + 37);
          v22 = a3 - 35;
          v44 = 0;
          *((_BYTE *)v43 + 22) = v21;
          *(_DWORD *)((char *)v43 + 27) = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 8LL);
          v23 = (_QWORD *)(*(_QWORD *)(v15 + 48) + 16LL);
          v24 = *v23 - 8LL;
          if ( v23 != (_QWORD *)*v23 )
          {
            v25 = v44;
            do
            {
              if ( v22 < 0xB )
                break;
              for ( j = 0; j < *(_DWORD *)(v24 + 24); *(_DWORD *)((char *)v43 + v29 + 42) = 0 )
              {
                if ( v22 < 0xB )
                  break;
                v27 = v43;
                v22 -= 11LL;
                v28 = v25++;
                v29 = 11 * v28;
                v30 = j++;
                v31 = *(_QWORD *)(v24 + 72 * (v30 + 1));
                *(_DWORD *)((char *)v43 + v29 + 35) = *(_DWORD *)v31;
                *(_WORD *)&v27[v29 + 39] = *(_WORD *)(v31 + 4);
                v27[v29 + 41] = *(_BYTE *)(v31 + 6);
              }
              v32 = *(_QWORD *)(v24 + 8);
              v24 = v32 - 8;
            }
            while ( *(_QWORD *)(v15 + 48) + 16LL != v32 );
            v5 = v45;
          }
          KeReleaseSpinLock(SpinLock[0], v19);
          v33 = a3 - v22;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 40), v18);
          v33 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          v33);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
      }
      else
      {
LABEL_39:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          35LL);
        v11 = 0;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2520),
      2u,
      3u,
      0x29u,
      (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
      v11);
  }
  if ( a5 == 1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v11);
    *(_OWORD *)SpinLock = 0LL;
    v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v35 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v34, SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v11);
    v36 = v35 < 0;
    v37 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v11);
    *(_OWORD *)SpinLock = 0LL;
    v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v38 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v34, SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v11);
    v36 = v38 < 0;
    v37 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  v39 = SpinLock;
  if ( v36 )
    v39 = 0LL;
  LODWORD(v42) = v11;
  LODWORD(v41) = v8;
  McTemplateK0pqq_EtwWriteTransfer(v34, v37, (const GUID *)v39, *(_QWORD *)(v10 + 248), v41, v42);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v5,
           v11);
}
