/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C01699B8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1C0056EE0 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_DD @ 0x1C009FB60 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     RIMDeliverConfigRequest @ 0x1C0169E24 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C016A350 (RIMFindInputDeviceForConfig.c)
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
  int v14; // edx
  int v15; // r8d
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v8 = a2;
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
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
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        a5[1],
        *a5);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        3u,
        1u,
        0x28u,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        *(const wchar_t **)(v8 + 216));
    return 0LL;
  }
  v13 = Win32AllocPoolNonPaged(v10[4], 0x70707352u);
  *((_QWORD *)v11 + 4) = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v16) = v10[4];
      v17 = 41;
LABEL_32:
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, v17, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v16);
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v18 = a6;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)v10;
  v24 = 0;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)v10 + 1);
  v22 = 0;
  *(_OWORD *)(v11 + 72) = *((_OWORD *)v10 + 2);
  v23 = 0LL;
  *(_OWORD *)(v11 + 88) = *((_OWORD *)v10 + 3);
  *((_QWORD *)v11 + 2) = a4;
  *((_QWORD *)v11 + 13) = *(_QWORD *)v18;
  *((_DWORD *)v11 + 28) = *(_DWORD *)(v18 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, v8, v15)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 42, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
  }
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v11, a1, v8, (unsigned int)&v24, (__int64)&v22, (__int64)&v23)
    && v24 )
  {
    v16 = *(_DWORD *)(a1 + 84);
    if ( v22 )
    {
      if ( (v16 & 0x10) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 43;
          goto LABEL_32;
        }
LABEL_33:
        RIMFreeHidDesc((__int64)v11);
        return 0LL;
      }
      *(_DWORD *)(v8 + 184) |= 0x800u;
    }
    else
    {
      if ( (v16 & 8) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 44;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      *(_DWORD *)(v8 + 184) |= 0x1000u;
    }
    v20 = RIMDeliverConfigRequest((struct RIMDEV *)v8);
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v21, 1, 45, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v20);
    }
  }
  *(_BYTE *)(v8 + 48) = 3;
  return v11;
}
