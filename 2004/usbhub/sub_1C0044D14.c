/*
 * XREFs of sub_1C0044D14 @ 0x1C0044D14
 * Callers:
 *     sub_1C00449C0 @ 0x1C00449C0 (sub_1C00449C0.c)
 *     sub_1C0044F68 @ 0x1C0044F68 (sub_1C0044F68.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 */

__m128 *__fastcall sub_1C0044D14(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __m128 *v3; // rbx
  int PersistedStateLocation; // eax
  __m128 *PoolWithTag; // rax
  int v6; // esi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]

  v14 = HIDWORD(a1);
  v13 = 0;
  v2 = (unsigned __int16 *)sub_1C0011220(a2);
  v3 = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"usbflags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v13);
  if ( PersistedStateLocation == -2147483643 )
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v13 + 26, 0x42554855u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      sub_1C001D340(PoolWithTag, 0, v13 + 26);
      v6 = RtlGetPersistedStateLocation(
             L"usbflags",
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
             0LL,
             v3,
             v13,
             0LL);
      if ( v6 >= 0 )
      {
        LODWORD(v12) = v2[706];
        LODWORD(v11) = v2[705];
        v9 = sub_1C00447AC(
               (wchar_t *)v3 + ((unsigned __int64)v13 >> 1) - 1,
               0x1CuLL,
               L"\\%04X%04X%04X",
               v2[704],
               v11,
               v12);
        if ( v9 < 0 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            v7 = DeviceObject;
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              v8 = 76;
              LODWORD(v12) = v9;
              goto LABEL_17;
            }
          }
        }
      }
      else
      {
        ExFreePoolWithTag(v3, 0);
        v3 = 0LL;
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          v7 = DeviceObject;
          if ( LOWORD(DeviceObject->DeviceType) )
          {
            v8 = 75;
            LODWORD(v12) = v6;
LABEL_17:
            sub_1C002E188((__int64)v7->DeviceExtension, 0, 1u, v8, (__int64)&unk_1C0063940, v12);
          }
        }
      }
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x4Du, (__int64)&unk_1C0063940);
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v7 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      v8 = 78;
      LODWORD(v12) = PersistedStateLocation;
      goto LABEL_17;
    }
  }
  return v3;
}
