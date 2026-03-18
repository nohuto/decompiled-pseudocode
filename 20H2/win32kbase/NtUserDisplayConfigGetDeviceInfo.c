/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C000D570
 * Callers:
 *     <none>
 * Callees:
 *     _DeviceInfoTranslateStatusDefault @ 0x1C000DCE8 (_DeviceInfoTranslateStatusDefault.c)
 *     DrvSampleDisplayState @ 0x1C000DFC0 (DrvSampleDisplayState.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009715C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     SetLastNtError @ 0x1C00D234C (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  unsigned int *v2; // r14
  const void *v3; // r13
  __int64 v4; // rcx
  int DeviceInfoInternal; // ebx
  unsigned int *v6; // rdx
  size_t v7; // rsi
  SIZE_T v8; // r12
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // eax
  bool v12; // zf
  unsigned int v13; // eax
  volatile void *v14; // rsi
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // r12d
  __int64 v27; // r15
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v36; // [rsp+40h] [rbp-D8h]
  __int64 v37; // [rsp+44h] [rbp-D4h]
  signed int v38; // [rsp+4Ch] [rbp-CCh]
  __int64 v39; // [rsp+78h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+80h] [rbp-98h]
  __int128 v41; // [rsp+98h] [rbp-80h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-70h]
  __int128 v43; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-58h]

  v2 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v3 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v38 = 0;
  v37 = 0LL;
  v36 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 0x14 )
    ExRaiseStatus(-1073741811);
  v8 = *v6;
  v2 = (unsigned int *)Win32AllocPoolWithQuota(v7, 1665430357LL);
  if ( !v2 )
  {
    v22 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    if ( *v22 == -21 && (_DWORD)v7 == 2056 )
    {
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 504) = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)(a1 + 2028) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 506) = 1144084230;
    }
    v23 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v23 + 24) = v7;
    *(_QWORD *)(v23 + 32) = 1144084230LL;
    WdLogEvent5_WdError(v23, v24);
    ExRaiseStatus(-1073741801);
  }
  if ( qword_1C024FEC0 )
    qword_1C024FEC0(v2, &v43, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v7] > MmUserProbeAddress || &a1[v7] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, v7);
  v2[1] = v7;
  v10 = *v2;
  v11 = *v2 + 24;
  if ( v11 > 0x1E || (v4 = 1547905053LL, !_bittest((const int *)&v4, v11)) )
  {
    if ( v10 == 100 )
    {
LABEL_69:
      v12 = (_DWORD)v7 == 24;
      goto LABEL_34;
    }
    if ( gfSwitchInProgress )
    {
LABEL_2:
      DeviceInfoInternal = -1073741823;
      goto LABEL_104;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession() )
    {
      DeviceInfoInternal = -1073741790;
      goto LABEL_104;
    }
  }
  if ( v10 > 100 )
    goto LABEL_35;
  if ( v10 == 100 )
    goto LABEL_69;
  if ( v10 > -7 )
  {
    if ( v10 > 3 )
    {
      v15 = v10 - 4;
      if ( v15 )
      {
        v16 = v15 - 2;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 2;
            if ( !v18 )
              goto LABEL_45;
            if ( v18 != 2 )
              goto LABEL_35;
          }
        }
        goto LABEL_69;
      }
      v12 = (_DWORD)v7 == 276;
    }
    else
    {
      switch ( v10 )
      {
        case 3:
          v12 = (_DWORD)v7 == 80;
          break;
        case -5:
          goto LABEL_44;
        case -3:
LABEL_45:
          v12 = (_DWORD)v7 == 32;
          break;
        case -2:
          goto LABEL_62;
        case 1:
          v12 = (_DWORD)v7 == 84;
          break;
        case 2:
          v12 = (_DWORD)v7 == 420;
          break;
        default:
          goto LABEL_35;
      }
    }
LABEL_34:
    if ( !v12 )
      goto LABEL_35;
    goto LABEL_71;
  }
  if ( v10 == -7 )
  {
    v12 = (_DWORD)v7 == 940;
    goto LABEL_34;
  }
  if ( v10 > -13 )
  {
    if ( v10 != -12 )
    {
      if ( v10 == -11 )
        goto LABEL_62;
      if ( v10 == -10 )
      {
LABEL_44:
        v12 = (_DWORD)v7 == 28;
        goto LABEL_34;
      }
      if ( v10 != -9 )
      {
        v12 = (_DWORD)v7 == 536;
        goto LABEL_34;
      }
    }
    goto LABEL_69;
  }
  switch ( v10 )
  {
    case -13:
      v12 = (_DWORD)v7 == 36;
      goto LABEL_34;
    case -24:
      goto LABEL_45;
    case -22:
      goto LABEL_44;
    case -21:
LABEL_62:
      v12 = (_DWORD)v7 == 2056;
      goto LABEL_34;
    case -20:
      v12 = (_DWORD)v7 == 56;
      goto LABEL_34;
  }
  if ( v10 != -15 )
  {
    if ( v10 == -14 )
    {
      v12 = (_DWORD)v7 == 40;
      goto LABEL_34;
    }
LABEL_35:
    DeviceInfoInternal = -1073741811;
    goto LABEL_104;
  }
  if ( (_DWORD)v7 != 32 )
    goto LABEL_35;
  v13 = v2[5];
  if ( !v13 )
  {
LABEL_71:
    v14 = 0LL;
    goto LABEL_72;
  }
  v3 = (const void *)Win32AllocPoolWithQuota(v13, 1665430357LL);
  if ( !v3 )
  {
    DeviceInfoInternal = -1073741801;
LABEL_104:
    if ( v36 )
    {
      v39 = 0LL;
      v40 = 0;
      DrvSampleDisplayState(&v39);
      v25 = (unsigned int)v39;
      if ( v37 == __PAIR64__(v40, v39) )
      {
        v26 = 1;
        v27 = DeviceInfoInternal;
        v28 = v38;
      }
      else
      {
        v26 = 0;
        if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)(a1 + 2028) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *((_DWORD *)a1 + 506) = 0;
        v29 = (_QWORD *)WdLogNewEntry5_WdError();
        v29[3] = (unsigned int)v37;
        v29[4] = HIDWORD(v37);
        v29[5] = v25;
        v29[6] = v40;
        v28 = v38;
        v29[7] = v38;
        WdLogEvent5_WdError(v29, v30);
        v31 = WdLogNewEntry5_WdError();
        v27 = DeviceInfoInternal;
        *(_QWORD *)(v31 + 24) = DeviceInfoInternal;
        *(_QWORD *)(v31 + 32) = v38;
        WdLogEvent5_WdError(v31, v32);
      }
      if ( dword_1C02523F8 || !v26 )
      {
        v33 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v33 + 24) = v27;
        *(_QWORD *)(v33 + 32) = v28;
        WdLogEvent5_WdError(v33, v34);
      }
      else
      {
        dword_1C02523F8 = 1;
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _BYTE))qword_1C024AB10)(
          403LL,
          2061LL,
          v27,
          v28,
          0LL,
          0);
      }
    }
    goto LABEL_115;
  }
  if ( qword_1C024FEC0 )
    qword_1C024FEC0(v3, &v41, Win32FreePool);
  v14 = (volatile void *)*((_QWORD *)v2 + 3);
  *((_QWORD *)v2 + 3) = v3;
LABEL_72:
  if ( *v2 == -21 )
  {
    v37 = *((_QWORD *)v2 + 252);
    *((_QWORD *)v2 + 252) = 0LL;
    v36 = 1;
  }
  DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
  if ( DeviceInfoInternal < 0 && v36 )
  {
    v19 = v2[506];
    v38 = v2[506];
  }
  if ( *v2 == 3 )
    v2[7] = 0;
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*v2, (unsigned int)DeviceInfoInternal);
  }
  if ( *v2 == -15 )
  {
    *((_QWORD *)v2 + 3) = v14;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
        ProbeForWrite(v14, v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v14, v3, v2[5]);
      }
    }
  }
  v21 = PsGetCurrentProcessWow64Process(v19);
  ProbeForWrite(a1, v8, v21 != 0 ? 1 : 4);
  memmove(a1, v2, v8);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_104;
LABEL_115:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(&v41);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(&v43);
  UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)DeviceInfoInternal;
}
