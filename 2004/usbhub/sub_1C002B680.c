/*
 * XREFs of sub_1C002B680 @ 0x1C002B680
 * Callers:
 *     sub_1C0030934 @ 0x1C0030934 (sub_1C0030934.c)
 *     sub_1C0048600 @ 0x1C0048600 (sub_1C0048600.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DE60 @ 0x1C002DE60 (sub_1C002DE60.c)
 *     sub_1C002DFF8 @ 0x1C002DFF8 (sub_1C002DFF8.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E474 @ 0x1C002E474 (sub_1C002E474.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C002B680(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  _DWORD *v8; // r15
  __int64 v9; // r10
  void *v10; // r11
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // r14
  int v15; // edi
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r10
  void *v19; // r11
  void (__fastcall *v20)(__int64); // rax
  int v21; // r9d
  unsigned int v22; // r8d
  __m128 *PoolWithTag; // rax
  __m128 *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, __int64, __m128 *, unsigned int *, unsigned int *); // r10
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  unsigned int i; // [rsp+98h] [rbp+48h] BYREF

  v4 = a4;
  i = 0;
  v32 = 0;
  v33 = 0LL;
  v8 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 11, (__int64)&unk_1C0062088, v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    sub_1C000FD80(a1, 8, 1734632005, v4, (__int64)a3);
    if ( off_1C006B000 != v10 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 12, v9);
    }
    return 3221225507LL;
  }
  if ( a2 )
  {
    v12 = sub_1C0011220(a2);
    v13 = sub_1C002DE60(a1, *((_QWORD *)v12 + 145), &v33);
    v14 = v33;
    v15 = v13;
    sub_1C000FD80(a1, 8, 1734631985, v13, v33);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(DeviceObject->DeviceExtension, v16, v17, 13, (__int64)&unk_1C0062088, v15, v14);
  }
  else
  {
    sub_1C000FD80(a1, 8, 1734631986, 0LL, 0LL);
    if ( off_1C006B000 != v19 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 14, v18);
    v14 = *((_QWORD *)v8 + 570);
    v20 = (void (__fastcall *)(__int64))*((_QWORD *)sub_1C000F050(a1) + 571);
    if ( v20 )
      v20(v14);
    v15 = 0;
  }
  if ( v15 >= 0 )
  {
    sub_1C000FD80(a1, 8, 1734631987, 0LL, 0LL);
    v22 = v21 + 16;
    for ( i = v21 + 16; ; v22 = i )
    {
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v22, 0x42554855u);
      v24 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      sub_1C001D340(PoolWithTag, 0, i);
      v25 = *(_QWORD *)(a1 + 64);
      v26 = 0LL;
      v32 = 0;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, __m128 *, unsigned int *, unsigned int *))(v25 + 4608);
      if ( v27 )
      {
        v15 = v27(v14, 1LL, v24, &i, &v32);
        v26 = v32;
      }
      else
      {
        v15 = -1073741822;
      }
      sub_1C000FD80(a1, 8, 1734631988, (__int64)v24, v26);
      if ( v15 != -1073741789 )
        goto LABEL_28;
      i = v32;
      sub_1C000FD80(a1, 8, 1734631989, v32, -1073741789LL);
      ExFreePoolWithTag(v24, 0);
    }
    v15 = -1073741670;
LABEL_28:
    sub_1C002DFF8(a1, v14);
    if ( v15 < 0 )
      goto LABEL_33;
    if ( v24 )
    {
      a3[1] = v24->m128_i32[0];
      a3[2] = v24->m128_i32[1];
      a3[3] = v24->m128_i32[2];
      sub_1C000FD80(a1, 8, 1734629425, v24->m128_u32[0], v24->m128_u32[1]);
      sub_1C000FD80(a1, 8, 1734629426, v24->m128_u32[2], 0LL);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E474(
          DeviceObject->DeviceExtension,
          v28,
          v29,
          v30,
          v31,
          v24->m128_i32[0],
          v24->m128_i32[1],
          v24->m128_i32[2]);
LABEL_33:
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 16, (__int64)&unk_1C0062088, v15);
  return (unsigned int)v15;
}
