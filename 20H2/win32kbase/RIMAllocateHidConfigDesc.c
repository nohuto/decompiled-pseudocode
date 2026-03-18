/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0161108
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RIMFreeHidDesc @ 0x1C006E19C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C006EAD8 (WPP_RECORDER_SF_DD.c)
 *     RIMDeliverConfigRequest @ 0x1C016156C (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0161AA0 (RIMFindInputDeviceForConfig.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        _WORD *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  _WORD *v10; // rdi
  int v11; // edx
  char *v12; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  v8 = a2;
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return 0LL;
  }
  v10 = a5;
  if ( !a5[4] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        a2,
        1,
        39,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a5[1],
        *a5);
    }
    return 0LL;
  }
  v12 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v11,
        1,
        40,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  v14 = Win32AllocPoolNonPaged((unsigned __int16)v10[4], 0x70707352u);
  *((_QWORD *)v12 + 4) = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v18) = v10[4];
      v19 = 41;
LABEL_32:
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v15, 1, v19, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v18);
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v20 = a6;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)v10;
  v26 = 0;
  *(_OWORD *)(v12 + 56) = *((_OWORD *)v10 + 1);
  v24 = 0;
  *(_OWORD *)(v12 + 72) = *((_OWORD *)v10 + 2);
  v25 = 0LL;
  *(_OWORD *)(v12 + 88) = *((_OWORD *)v10 + 3);
  *((_QWORD *)v12 + 2) = a4;
  *((_QWORD *)v12 + 13) = *(_QWORD *)v20;
  *((_DWORD *)v12 + 28) = *(_DWORD *)(v20 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, v8, v16)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, 42, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v12, a1, v8, (unsigned int)&v26, (__int64)&v24, (__int64)&v25)
    && v26 )
  {
    v18 = *(_DWORD *)(a1 + 84);
    if ( v24 )
    {
      if ( (v18 & 0x10) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 43;
          goto LABEL_32;
        }
LABEL_33:
        RIMFreeHidDesc((__int64)v12, v15, v16, v17);
        return 0LL;
      }
      *(_DWORD *)(v8 + 184) |= 0x800u;
    }
    else
    {
      if ( (v18 & 8) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 44;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      *(_DWORD *)(v8 + 184) |= 0x1000u;
    }
    v22 = RIMDeliverConfigRequest((struct RIMDEV *)v8);
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v23, 1, 45, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v22);
    }
  }
  *(_BYTE *)(v8 + 48) = 3;
  return v12;
}
