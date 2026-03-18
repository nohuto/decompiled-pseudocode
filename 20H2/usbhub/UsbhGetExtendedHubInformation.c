/*
 * XREFs of UsbhGetExtendedHubInformation @ 0x1C002BAB8
 * Callers:
 *     UsbhInitialize @ 0x1C002CA30 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002AE10 (UsbhGetAcpiPortAttributes.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhEtwLogPortInformation @ 0x1C005C7EC (UsbhEtwLogPortInformation.c)
 */

__int64 __fastcall UsbhGetExtendedHubInformation(__int64 a1)
{
  _DWORD *v2; // r15
  unsigned int v3; // ebx
  _DWORD *v4; // rax
  PVOID PoolWithTag; // rsi
  _DWORD *v6; // rax
  unsigned __int16 i; // di
  unsigned __int16 j; // di
  __int64 PortData; // rax

  v2 = FdoExt(a1);
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      41,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v4 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * *((unsigned __int8 *)v4 + 2938) + 4, 0x42554855u);
  if ( PoolWithTag )
  {
    v6 = FdoExt(a1);
    memset(PoolWithTag, 0, 4LL * *((unsigned __int8 *)v6 + 2938) + 4);
  }
  *((_QWORD *)v2 + 377) = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v2 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              42,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              i);
        }
        *((_DWORD *)PoolWithTag + i) |= 0x10u;
      }
    }
    UsbhGetAcpiPortAttributes(a1, (__int64)PoolWithTag);
    if ( *((_QWORD *)v2 + 378) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++j )
      {
        if ( (*((_DWORD *)PoolWithTag + j) & 0x40) != 0 )
        {
          PortData = UsbhGetPortData(a1, j);
          if ( PortData )
            *(_QWORD *)(PortData + 2920) = (*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20)) & 0x7F80)) >> 7;
        }
      }
    }
    UsbhEtwLogPortInformation(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
