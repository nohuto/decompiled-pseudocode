/*
 * XREFs of sub_1C000D970 @ 0x1C000D970
 * Callers:
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C0002978 @ 0x1C0002978 (sub_1C0002978.c)
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010064 @ 0x1C0010064 (sub_1C0010064.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C003BACC @ 0x1C003BACC (sub_1C003BACC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C000D970(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebp
  int v11; // r9d
  int v12; // eax
  int v13; // r10d
  __int64 v14; // rax
  int v15; // edi
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+50h] [rbp-38h] BYREF
  __int16 v22; // [rsp+58h] [rbp-30h] BYREF
  int v23; // [rsp+5Ah] [rbp-2Eh]
  __int16 v24; // [rsp+5Eh] [rbp-2Ah]
  __int16 v25; // [rsp+A0h] [rbp+18h] BYREF
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0;
  v4 = sub_1C000F050(DeviceObject);
  v5 = sub_1C0015F10(DeviceObject, 2228243LL, &v26, 0LL);
  sub_1C000FD80((_DWORD)DeviceObject, 8, 1970303827, v26, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C000FD80((_DWORD)DeviceObject, 0x10000, 1400198008, 0, v6);
    *(_BYTE *)(v4 + 3416) = 1;
    sub_1C0012810(DeviceObject, (unsigned int)(v17 + 3), a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    sub_1C000FD80((_DWORD)DeviceObject, 0x10000, 1400206152, a2, 0LL);
    sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061F28, 0, 0);
    v8 = sub_1C000F050(DeviceObject);
    if ( (*(_DWORD *)(v8 + 2560) & 0x80000) == 0 )
    {
      sub_1C0010064(DeviceObject);
      v21 = 0;
      v25 = 0;
      v9 = sub_1C000F050(DeviceObject);
      v22 = 768;
      sub_1C000FD80((_DWORD)DeviceObject, 8, 1400332651, *(_DWORD *)(v9 + 1376), 0LL);
      v23 = 1;
      v24 = 0;
      v10 = sub_1C000A740((__int64)DeviceObject, (__int64)&v22, 0LL, &v25, v20, &v21);
      sub_1C000FD80((_DWORD)DeviceObject, 8, 1937206065, v10, v21);
      if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v10) )
        sub_1C004A608((_DWORD)DeviceObject, 0, 123, 0, 0, v10, v18, (__int64)aHubC, 3746, 0);
      sub_1C000FD80((_DWORD)DeviceObject, 8, 1937206066, v10, 0LL);
      if ( v10 >= 0 )
        *(_DWORD *)(v8 + 2560) |= 0x80000u;
    }
    sub_1C000F050(DeviceObject);
    sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458174, 2, a2);
    *(_DWORD *)(a2 + 128) = v11;
    v12 = sub_1C0002AF0(DeviceObject, a2, v11 + 5);
    sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458172, 0, v12);
    if ( v13 == 4 )
    {
      v14 = sub_1C000F050(DeviceObject);
      if ( *(_QWORD *)(v14 + 4720) )
        v15 = (*(__int64 (__fastcall **)(_QWORD))(v14 + 4720))(*(_QWORD *)(v14 + 1192));
      else
        v15 = -1073741637;
      sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061F38, 0, v15);
      if ( v15 < 0 )
      {
        sub_1C0002978((__int64)DeviceObject, a2);
        sub_1C003BACC(DeviceObject);
        sub_1C0012810(DeviceObject, 3LL, a2);
        KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
        sub_1C004A608((_DWORD)DeviceObject, 0, 136, 0, 0, v15, 0, (__int64)aSshubC, 2224, 0);
        v19 = sub_1C000F050(DeviceObject);
        sub_1C0011C40((_DWORD)DeviceObject, v4 + 3200, *(_DWORD *)(v4 + 5256), 0, v19 + 1912, 2001228627);
      }
      else
      {
        sub_1C0011260(DeviceObject, v4 + 3200);
        sub_1C0012810(DeviceObject, 2LL, a2);
      }
      return (unsigned int)v15;
    }
    else
    {
      sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C00629C8, 0, -1073741823);
      sub_1C003BACC(DeviceObject);
      sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061F38, 0, -1073741823);
      *(_BYTE *)(v4 + 3416) = 1;
      sub_1C0012810(DeviceObject, 3LL, a2);
      KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
      return 3221225473LL;
    }
  }
}
