/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0030EBC (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00B48C8 (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00B5D50 (DrvSampleDisplayState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D05B0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     SetLastNtError @ 0x1C00D242C (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  unsigned int *v2; // r14
  const void *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int DeviceInfoInternal; // ebx
  unsigned int *v9; // rdx
  size_t v10; // rsi
  SIZE_T v11; // r12
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  unsigned int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  volatile void *v20; // rsi
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v27; // rax
  char *v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  int v35; // r12d
  __int64 v36; // r15
  __int64 v37; // rsi
  _DWORD *v38; // rdx
  char *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  int v47; // [rsp+40h] [rbp-D8h]
  __int64 v48; // [rsp+44h] [rbp-D4h]
  signed int v49; // [rsp+4Ch] [rbp-CCh]
  __int64 v50; // [rsp+78h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+80h] [rbp-98h]
  __int128 v52; // [rsp+98h] [rbp-80h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-70h]
  __int128 v54; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-58h]

  v2 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v3 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v49 = 0;
  v48 = 0LL;
  v47 = 0;
  EnterSharedCrit(0LL, 1);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  if ( (unsigned int)v10 < 0x14 )
    ExRaiseStatus(-1073741811);
  v11 = *v9;
  v2 = (unsigned int *)Win32AllocPoolWithQuota(v10, 0x63447355u);
  if ( !v2 )
  {
    v28 = (char *)MmUserProbeAddress;
    v29 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    if ( *v29 == -21 && (_DWORD)v10 == 2056 )
    {
      v14 = a1 + 2016;
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v14 = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v12 = a1 + 2024;
      v28 = a1 + 2028;
      if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v28 > MmUserProbeAddress )
      {
        v28 = (char *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *v12 = 1144084230;
    }
    v30 = WdLogNewEntry5_WdError(v28, v12, v14);
    *(_QWORD *)(v30 + 24) = v10;
    *(_QWORD *)(v30 + 32) = 1144084230LL;
    WdLogEvent5_WdError(v30);
    ExRaiseStatus(-1073741801);
  }
  if ( qword_1C0251EC0 )
    qword_1C0251EC0(v2, &v54, Win32FreePool, v15);
  if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v10] > MmUserProbeAddress || &a1[v10] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, v10);
  v2[1] = v10;
  v16 = *v2;
  v17 = *v2 + 24;
  if ( v17 > 0x1E || (v5 = 1547905053LL, !_bittest((const int *)&v5, v17)) )
  {
    if ( v16 == 100 )
    {
LABEL_69:
      v18 = (_DWORD)v10 == 24;
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
  if ( v16 > 100 )
    goto LABEL_35;
  if ( v16 == 100 )
    goto LABEL_69;
  if ( v16 > -7 )
  {
    if ( v16 > 3 )
    {
      v21 = v16 - 4;
      if ( v21 )
      {
        v22 = v21 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 2;
            if ( !v24 )
              goto LABEL_45;
            if ( v24 != 2 )
              goto LABEL_35;
          }
        }
        goto LABEL_69;
      }
      v18 = (_DWORD)v10 == 276;
    }
    else
    {
      switch ( v16 )
      {
        case 3:
          v18 = (_DWORD)v10 == 80;
          break;
        case -5:
          goto LABEL_44;
        case -3:
LABEL_45:
          v18 = (_DWORD)v10 == 32;
          break;
        case -2:
          goto LABEL_62;
        case 1:
          v18 = (_DWORD)v10 == 84;
          break;
        case 2:
          v18 = (_DWORD)v10 == 420;
          break;
        default:
          goto LABEL_35;
      }
    }
LABEL_34:
    if ( !v18 )
      goto LABEL_35;
    goto LABEL_71;
  }
  if ( v16 == -7 )
  {
    v18 = (_DWORD)v10 == 940;
    goto LABEL_34;
  }
  if ( v16 > -13 )
  {
    if ( v16 != -12 )
    {
      if ( v16 == -11 )
        goto LABEL_62;
      if ( v16 == -10 )
      {
LABEL_44:
        v18 = (_DWORD)v10 == 28;
        goto LABEL_34;
      }
      if ( v16 != -9 )
      {
        v18 = (_DWORD)v10 == 536;
        goto LABEL_34;
      }
    }
    goto LABEL_69;
  }
  switch ( v16 )
  {
    case -13:
      v18 = (_DWORD)v10 == 36;
      goto LABEL_34;
    case -24:
      goto LABEL_45;
    case -22:
      goto LABEL_44;
    case -21:
LABEL_62:
      v18 = (_DWORD)v10 == 2056;
      goto LABEL_34;
    case -20:
      v18 = (_DWORD)v10 == 56;
      goto LABEL_34;
  }
  if ( v16 != -15 )
  {
    if ( v16 == -14 )
    {
      v18 = (_DWORD)v10 == 40;
      goto LABEL_34;
    }
LABEL_35:
    DeviceInfoInternal = -1073741811;
    goto LABEL_104;
  }
  if ( (_DWORD)v10 != 32 )
    goto LABEL_35;
  v19 = v2[5];
  if ( !v19 )
  {
LABEL_71:
    v20 = 0LL;
    goto LABEL_72;
  }
  v3 = (const void *)Win32AllocPoolWithQuota(v19, 0x63447355u);
  if ( !v3 )
  {
    DeviceInfoInternal = -1073741801;
LABEL_104:
    if ( v47 )
    {
      v50 = 0LL;
      v51 = 0;
      DrvSampleDisplayState(&v50);
      v34 = (unsigned int)v50;
      if ( v48 == __PAIR64__(v51, v50) )
      {
        v35 = 1;
        v36 = DeviceInfoInternal;
        v37 = v49;
      }
      else
      {
        v35 = 0;
        v38 = a1 + 2024;
        v39 = a1 + 2028;
        if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v39 > MmUserProbeAddress )
        {
          v39 = (char *)MmUserProbeAddress;
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        *v38 = 0;
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v33);
        v40[3] = (unsigned int)v48;
        v40[4] = HIDWORD(v48);
        v40[5] = v34;
        v40[6] = v51;
        v37 = v49;
        v40[7] = v49;
        WdLogEvent5_WdError(v40);
        v44 = WdLogNewEntry5_WdError(v42, v41, v43);
        v36 = DeviceInfoInternal;
        *(_QWORD *)(v44 + 24) = DeviceInfoInternal;
        *(_QWORD *)(v44 + 32) = v49;
        WdLogEvent5_WdError(v44);
      }
      if ( dword_1C02543F8 || !v35 )
      {
        v45 = WdLogNewEntry5_WdError(v32, v31, v33);
        *(_QWORD *)(v45 + 24) = v36;
        *(_QWORD *)(v45 + 32) = v37;
        WdLogEvent5_WdError(v45);
      }
      else
      {
        dword_1C02543F8 = 1;
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _BYTE))qword_1C024CB10)(
          403LL,
          2061LL,
          v36,
          v37,
          0LL,
          0);
      }
    }
    goto LABEL_115;
  }
  if ( qword_1C0251EC0 )
    qword_1C0251EC0(v3, &v52, Win32FreePool, v7);
  v20 = (volatile void *)*((_QWORD *)v2 + 3);
  *((_QWORD *)v2 + 3) = v3;
LABEL_72:
  if ( *v2 == -21 )
  {
    v48 = *((_QWORD *)v2 + 252);
    *((_QWORD *)v2 + 252) = 0LL;
    v47 = 1;
  }
  DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
  if ( DeviceInfoInternal < 0 && v47 )
  {
    v25 = v2[506];
    v49 = v2[506];
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
    *((_QWORD *)v2 + 3) = v20;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
        ProbeForWrite(v20, v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v20, v3, v2[5]);
      }
    }
  }
  v27 = PsGetCurrentProcessWow64Process(v25);
  ProbeForWrite(a1, v11, v27 != 0 ? 1 : 4);
  memmove(a1, v2, v11);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_104;
LABEL_115:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v52);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v54);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (unsigned int)DeviceInfoInternal;
}
