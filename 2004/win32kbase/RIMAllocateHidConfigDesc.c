/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0163668
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C000BD2C (RIMGetDeviceParent.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     RIMDeliverConfigRequest @ 0x1C0163ACC (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0164000 (RIMFindInputDeviceForConfig.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  unsigned __int16 *v10; // rdi
  char *v11; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+98h] [rbp+20h] BYREF

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
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        3u,
        1u,
        0x27u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a5[1],
        *a5);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        3u,
        1u,
        0x28u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(const wchar_t **)(v8 + 216));
    return 0LL;
  }
  v13 = Win32AllocPoolNonPaged(v10[4], 0x70707352u);
  *((_QWORD *)v11 + 4) = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v17) = v10[4];
      v18 = 41;
LABEL_32:
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, v18, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v17);
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v19 = a6;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)v10;
  v25 = 0;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)v10 + 1);
  v23 = 0;
  *(_OWORD *)(v11 + 72) = *((_OWORD *)v10 + 2);
  v24 = 0LL;
  *(_OWORD *)(v11 + 88) = *((_OWORD *)v10 + 3);
  *((_QWORD *)v11 + 2) = a4;
  *((_QWORD *)v11 + 13) = *(_QWORD *)v19;
  *((_DWORD *)v11 + 28) = *(_DWORD *)(v19 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, v8, v15)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 42, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v11, a1, v8, (unsigned int)&v25, (__int64)&v23, (__int64)&v24)
    && v25 )
  {
    v17 = *(_DWORD *)(a1 + 84);
    if ( v23 )
    {
      if ( (v17 & 0x10) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 43;
          goto LABEL_32;
        }
LABEL_33:
        RIMFreeHidDesc((__int64)v11, v14, v15, v16);
        return 0LL;
      }
      *(_DWORD *)(v8 + 184) |= 0x800u;
    }
    else
    {
      if ( (v17 & 8) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 44;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      *(_DWORD *)(v8 + 184) |= 0x1000u;
    }
    v21 = RIMDeliverConfigRequest((struct RIMDEV *)v8);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v22, 1, 45, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v21);
    }
  }
  *(_BYTE *)(v8 + 48) = 3;
  return v11;
}
