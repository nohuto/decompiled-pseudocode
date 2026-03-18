/*
 * XREFs of sub_1C000BEB0 @ 0x1C000BEB0
 * Callers:
 *     sub_1C00183BC @ 0x1C00183BC (sub_1C00183BC.c)
 *     sub_1C0019BF0 @ 0x1C0019BF0 (sub_1C0019BF0.c)
 *     sub_1C0038820 @ 0x1C0038820 (sub_1C0038820.c)
 *     sub_1C0038EF0 @ 0x1C0038EF0 (sub_1C0038EF0.c)
 *     sub_1C0041890 @ 0x1C0041890 (sub_1C0041890.c)
 *     sub_1C0043380 @ 0x1C0043380 (sub_1C0043380.c)
 *     sub_1C00436A0 @ 0x1C00436A0 (sub_1C00436A0.c)
 *     sub_1C00586B0 @ 0x1C00586B0 (sub_1C00586B0.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 *     sub_1C00594F0 @ 0x1C00594F0 (sub_1C00594F0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0017C80 @ 0x1C0017C80 (sub_1C0017C80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C000BEB0(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, int a6, int a7)
{
  unsigned int v7; // ebp
  _DWORD *v10; // rdx
  int v11; // r14d
  __int64 v12; // rax
  char v13; // r15
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // r14
  void (__fastcall *v18)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v19; // ecx
  int v21; // [rsp+28h] [rbp-50h]

  v7 = 0;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    goto LABEL_39;
  if ( *v10 != 541218120 )
    sub_1C002DC78(a1, v10);
  sub_1C000FD80(a1, 8, 1364479299, a7, a5);
  v11 = a6;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 48, (__int64)&unk_1C0062088, a6);
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
LABEL_39:
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v12 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v13 = *(_BYTE *)(v12 + 5268);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 46, (__int64)&unk_1C0062088, a6);
  if ( a7 != 2001228627 )
    sub_1C000FD80(a1, 8, 1632720717, a7, a5);
  v14 = sub_1C0017C80(a1, a3, a5, a6, a7, v13);
  v16 = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 47, (__int64)&unk_1C0062088, a6);
    if ( a7 != 2001228627 )
      sub_1C000FD80(a1, 8, 1364479275, a7, v16);
    v17 = *(_QWORD *)(v16 + 40);
    v18 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, __int64, int))(sub_1C000F050(a1) + 4784);
    if ( v18 )
    {
      LOBYTE(v21) = v13;
      v18(a1, v17, &sub_1C001A220, a4, v16, v21);
      v19 = 0;
    }
    else
    {
      v19 = -1073741822;
    }
    v11 = a6;
  }
  else
  {
    v19 = -1073741670;
  }
  if ( (v19 & 0xC0000000) == 0xC0000000 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E354(DeviceObject->DeviceExtension, v15, 1, 49, (__int64)&unk_1C0062088, v11, v19);
    sub_1C000FD80(a1, 8, 1364476705, a7, a5);
    v15 = a2;
    if ( a2 )
      sub_1C0011C40(a1, a2, 0, v11, a5, a7);
    v7 = 1;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E354(DeviceObject->DeviceExtension, v15, 1, 50, (__int64)&unk_1C0062088, v11, v7);
  return v7;
}
