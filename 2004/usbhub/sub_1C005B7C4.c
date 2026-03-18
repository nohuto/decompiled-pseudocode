/*
 * XREFs of sub_1C005B7C4 @ 0x1C005B7C4
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 *     sub_1C004FEB8 @ 0x1C004FEB8 (sub_1C004FEB8.c)
 *     sub_1C0050274 @ 0x1C0050274 (sub_1C0050274.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C0051C60 @ 0x1C0051C60 (sub_1C0051C60.c)
 *     sub_1C005A314 @ 0x1C005A314 (sub_1C005A314.c)
 *     sub_1C005A9D0 @ 0x1C005A9D0 (sub_1C005A9D0.c)
 *     sub_1C005ADEC @ 0x1C005ADEC (sub_1C005ADEC.c)
 *     sub_1C005B07C @ 0x1C005B07C (sub_1C005B07C.c)
 *     sub_1C005B78C @ 0x1C005B78C (sub_1C005B78C.c)
 *     sub_1C0073540 @ 0x1C0073540 (sub_1C0073540.c)
 */

__int64 __fastcall sub_1C005B7C4(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  struct _DEVICE_OBJECT *v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r8d
  __int64 v23; // [rsp+38h] [rbp-A1h]
  __int128 v24; // [rsp+40h] [rbp-99h] BYREF
  __m128 Source1[4]; // [rsp+50h] [rbp-89h] BYREF
  int v26; // [rsp+90h] [rbp-49h]
  _OWORD Source2[4]; // [rsp+A0h] [rbp-39h] BYREF
  int v28; // [rsp+E0h] [rbp+7h]

  v8 = sub_1C0011220((__int64)a2);
  v9 = sub_1C000F050(a1);
  v10 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x14u, (__int64)&unk_1C00654F0);
  sub_1C001D340(Source1, 0, 0x44uLL);
  sub_1C005A314(v11, (__int64)a2);
  *a4 = 0;
  v12 = *(_OWORD *)(v8 + 650);
  v8[355] &= ~0x10000u;
  Source2[0] = v12;
  Source2[1] = *(_OWORD *)(v8 + 654);
  Source2[2] = *(_OWORD *)(v8 + 658);
  Source2[3] = *(_OWORD *)(v8 + 662);
  v28 = v8[666];
  sub_1C005A9D0(v13, v9 + 1294);
  if ( v9[1297] && !dword_1C006B62C )
  {
    if ( (int)sub_1C005B07C(a1, *((unsigned __int16 *)v8 + 714), (char *)Source1) < 0 )
    {
      if ( (int)sub_1C005ADEC(v15, (__int64)a2, (__int64)Source1) < 0 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E188(
            (__int64)DeviceObject->DeviceExtension,
            0,
            1u,
            0x18u,
            (__int64)&unk_1C00654F0,
            *((unsigned __int16 *)v8 + 714));
        goto LABEL_18;
      }
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C004815C(
          (__int64)DeviceObject->DeviceExtension,
          *((unsigned __int16 *)v8 + 704),
          (__int64)DeviceObject,
          0x17u,
          (__int64)&unk_1C00654F0,
          *((unsigned __int16 *)v8 + 704),
          *((unsigned __int16 *)v8 + 705),
          *((unsigned __int16 *)v8 + 706));
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C002E188(
        (__int64)DeviceObject->DeviceExtension,
        0,
        1u,
        0x16u,
        (__int64)&unk_1C00654F0,
        *((unsigned __int16 *)v8 + 714));
    }
    v8[355] |= 0x10000u;
LABEL_18:
    *(__m128 *)(v8 + 650) = Source1[0];
    *(__m128 *)(v8 + 654) = Source1[1];
    *(__m128 *)(v8 + 658) = Source1[2];
    *(__m128 *)(v8 + 662) = Source1[3];
    v8[666] = v26;
    if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (v8[355] & 4) == 0 )
      *a4 = 1;
    if ( *a4 && a3 )
    {
      v24 = 0LL;
      v10 = sub_1C0050274(a1, (__int64)a2, (__int64)&v24);
      if ( v10 < 0 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          v16 = DeviceObject;
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Au, (__int64)&unk_1C00654F0);
        }
      }
      else
      {
        sub_1C0050D40((__int64)(v8 + 524));
        *((_OWORD *)v8 + 131) = v24;
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v23) = DWORD1(v24);
          sub_1C0051C60(
            (__int64)DeviceObject->DeviceExtension,
            v17,
            v18,
            0x19u,
            (__int64)&unk_1C00654F0,
            *((const wchar_t **)&v24 + 1),
            *((_QWORD *)&v24 + 1),
            v23);
        }
        v10 = sub_1C004FEB8(a1, (__int64)a2, (__int64)&v24);
        if ( v10 < 0 )
        {
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            v16 = DeviceObject;
            if ( LOWORD(DeviceObject->DeviceType) )
              sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Cu, (__int64)&unk_1C00654F0);
          }
        }
        else
        {
          sub_1C0050D40((__int64)(v8 + 520));
          *((_OWORD *)v8 + 130) = v24;
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            v16 = DeviceObject;
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              LODWORD(v23) = DWORD1(v24);
              sub_1C0051C60(
                (__int64)DeviceObject->DeviceExtension,
                v19,
                v20,
                0x1Bu,
                (__int64)&unk_1C00654F0,
                *((const wchar_t **)&v24 + 1),
                *((_QWORD *)&v24 + 1),
                v23);
            }
          }
        }
      }
    }
    sub_1C005B78C((__int64)v16, (__int64)a2);
    v21 = v8[701];
    if ( (v21 & 4) == 0 && (v8[355] & 0x10000) != 0 )
    {
      v8[701] = v21 | 4;
      sub_1C0073540(a2);
    }
    return (unsigned int)v10;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v14 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x15u, (__int64)&unk_1C00654F0);
  }
  sub_1C005B78C((__int64)v14, (__int64)a2);
  return 0LL;
}
