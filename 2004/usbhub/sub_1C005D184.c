/*
 * XREFs of sub_1C005D184 @ 0x1C005D184
 * Callers:
 *     sub_1C005D3F8 @ 0x1C005D3F8 (sub_1C005D3F8.c)
 *     sub_1C005D704 @ 0x1C005D704 (sub_1C005D704.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005DA84 @ 0x1C005DA84 (sub_1C005DA84.c)
 */

__int64 __fastcall sub_1C005D184(_QWORD *a1)
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
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v4 = 10;
LABEL_4:
      LODWORD(v10) = PersistedStateLocation;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 2u, 1u, v4, (__int64)&unk_1C0065940, v10);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)NumberOfBytes, 0x55445246u);
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
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
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
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    sub_1C005DA84(DeviceObject->DeviceExtension, v5, v6, v7, v9, NumberOfBytes);
  return (unsigned int)PersistedStateLocation;
}
