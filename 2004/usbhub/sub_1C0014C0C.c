/*
 * XREFs of sub_1C0014C0C @ 0x1C0014C0C
 * Callers:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C0018B00 @ 0x1C0018B00 (sub_1C0018B00.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0054EDC @ 0x1C0054EDC (sub_1C0054EDC.c)
 */

__int64 __fastcall sub_1C0014C0C(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  _DWORD *v8; // rax
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v12; // eax
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF

  v13 = 0;
  v14 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 17, (__int64)&unk_1C0062DF8);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E62C(DeviceObject->DeviceExtension, a2, 1, 18, (__int64)&unk_1C0062DF8, a2);
  }
  v6 = sub_1C0011220(a2);
  v7 = sub_1C000A080(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), (__int64)&v14, &v13);
  if ( v7 >= 0 && (v14 & 1) != 0 )
  {
    if ( (v6[355] & 0x100) != 0 && (int)sub_1C0011220(a2)[588] >= 0 && !a3 && (v6[355] & 4) == 0 )
    {
      v12 = sub_1C0054EDC(*(_QWORD *)(a1 + 8), a2, &v13);
      if ( (v12 & 0xC0000000) == 0xC0000000 )
        sub_1C004A608(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v6 + 714),
          50,
          0,
          0,
          v12,
          v13,
          (__int64)aPdopwrC,
          1404,
          0);
    }
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( LODWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) )
    {
      v8 = sub_1C000F050(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 3LL, &v13);
    }
    v9 = sub_1C0016A98(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v6 + 714));
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( LODWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) )
    {
      v10 = sub_1C000F050(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v10 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v10 + 554))(*((_QWORD *)v10 + 529), 0LL, 4LL, &v13);
    }
  }
  else
  {
    sub_1C004A608(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 714), 118, 0, 0, v7, v13, (__int64)aPdopwrC, 1420, 0);
    return (unsigned int)-1073741823;
  }
  return v9;
}
