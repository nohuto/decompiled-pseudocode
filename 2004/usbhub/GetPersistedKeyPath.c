/*
 * XREFs of GetPersistedKeyPath @ 0x1C005D184
 * Callers:
 *     ReadTestOverrideValue @ 0x1C005D3F8 (ReadTestOverrideValue.c)
 *     UpdateUcmIsPresentBit @ 0x1C005D704 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C005DA84 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall GetPersistedKeyPath(_QWORD *a1)
{
  PVOID PoolWithTag; // rdi
  int PersistedStateLocation; // ebx
  unsigned __int16 v4; // r9
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                             0LL,
                             0LL,
                             0,
                             &NumberOfBytes);
  if ( PersistedStateLocation != -2147483643 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_4:
      LODWORD(v10) = PersistedStateLocation;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v4,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v10);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x55445246u);
  if ( PoolWithTag )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"USB",
                               0LL,
                               L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                               0LL,
                               PoolWithTag,
                               NumberOfBytes,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      *a1 = PoolWithTag;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_4;
    }
LABEL_12:
    if ( PersistedStateLocation < 0 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)PersistedStateLocation;
  }
  PersistedStateLocation = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7, v9, NumberOfBytes);
  return (unsigned int)PersistedStateLocation;
}
