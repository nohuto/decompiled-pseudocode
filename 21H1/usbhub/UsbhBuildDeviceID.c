/*
 * XREFs of UsbhBuildDeviceID @ 0x1C004FEB8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0051A34 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051AFC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0051C60 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005A3A0 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // r8d
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r11
  unsigned __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  unsigned __int16 v15; // r10
  char v16; // r11
  _WORD *PoolWithTag; // rbx
  _WORD *v18; // rcx
  char *v19; // rsi
  _WORD *v20; // rcx
  int v21; // r8d
  int v22; // r8d
  unsigned int v24; // r10d
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    if ( (v7[355] & 0x10004) == 0x10000 )
    {
      v8 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v8 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_Sqd(
              WPP_GLOBAL_Control->DeviceExtension,
              *(_QWORD *)(a3 + 8),
              v9,
              10,
              (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
              *(_QWORD *)(a3 + 8),
              *(_QWORD *)(a3 + 8),
              *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0LL, v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xBu,
          (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids);
    }
    v10 = *((_WORD *)v7 + 704);
    v11 = *((_WORD *)v7 + 705);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v12 = v10;
  v27 = v11;
  Log(a1, 4096, 1685473604, v10, v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v15, v13, v14, v25, v15, v16);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    v18 = PoolWithTag;
    *(_OWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *(_OWORD *)PoolWithTag = *(_OWORD *)"U\x00S\x00B\x00\\\x00V\x00I\x00D\x00_\x00n\x00n\x00n\x00n";
    for ( *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)"n\x00n\x00n\x00n"; *v18 != 110; ++v18 )
      ;
    *v18 = (unsigned __int8)Nibble[v12 >> 12];
    v18[1] = (unsigned __int8)Nibble[(v12 >> 8) & 0xF];
    v18[2] = (unsigned __int8)Nibble[(unsigned __int8)v12 >> 4];
    v18[3] = (unsigned __int8)Nibble[v12 & 0xF];
    v26 = 46;
    v19 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2EuLL, 0x42554855u);
    if ( v19 )
    {
      v20 = v19 + 24;
      *(_OWORD *)v19 = 0LL;
      *((_OWORD *)v19 + 1) = 0LL;
      *((_QWORD *)v19 + 4) = 0LL;
      *((_DWORD *)v19 + 10) = 0;
      *((_WORD *)v19 + 22) = 0;
      *(_OWORD *)v19 = *(_OWORD *)PoolWithTag;
      *((_QWORD *)v19 + 2) = *((_QWORD *)PoolWithTag + 2);
      *(_OWORD *)(v19 + 24) = *(_OWORD *)L"&PID_nnnn";
      *((_WORD *)v19 + 20) = aPidNnnn[8];
      while ( *v20 != 110 )
        ++v20;
      *v20 = (unsigned __int8)Nibble[v27 >> 12];
      v20[1] = (unsigned __int8)Nibble[(v27 >> 8) & 0xF];
      v20[2] = (unsigned __int8)Nibble[(unsigned __int8)v27 >> 4];
      v20[3] = (unsigned __int8)Nibble[v27 & 0xF];
    }
    else
    {
      v26 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v19 )
    {
      *(_DWORD *)(a3 + 4) = v26;
      *(_QWORD *)(a3 + 8) = v19;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v21,
          13,
          (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
          (__int64)v19,
          v26);
      return 0LL;
    }
    v22 = 1684615474;
  }
  else
  {
    v22 = 1684615457;
  }
  Log(a1, 4096, v22, a2, -1073741670LL);
  return v24;
}
