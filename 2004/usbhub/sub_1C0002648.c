/*
 * XREFs of sub_1C0002648 @ 0x1C0002648
 * Callers:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C001CB8C @ 0x1C001CB8C (sub_1C001CB8C.c)
 *     sub_1C0037600 @ 0x1C0037600 (sub_1C0037600.c)
 * Callees:
 *     sub_1C00027A0 @ 0x1C00027A0 (sub_1C00027A0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C00180B8 @ 0x1C00180B8 (sub_1C00180B8.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00336FC @ 0x1C00336FC (sub_1C00336FC.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0036048 @ 0x1C0036048 (sub_1C0036048.c)
 *     sub_1C0036088 @ 0x1C0036088 (sub_1C0036088.c)
 */

void __fastcall sub_1C0002648(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r9
  int v9; // ecx
  __int16 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8

  sub_1C000FD80(a1, 512, 1969836099, 0, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 54, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
  sub_1C000F050(a1);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD *)(a2 + 420);
  v11 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v12 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v11;
  v13 = a2 + 32 * (v11 + 27);
  *(_DWORD *)v13 = v12;
  *(_DWORD *)(v13 + 4) = v9;
  *(_WORD *)(v13 + 18) = 256;
  *(_WORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = 1;
  if ( a4 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 == 4 )
    {
      sub_1C0036048(a1, a2);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 0x80000 )
    {
      sub_1C00027A0(a1, a2);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 4 )
      sub_1C0036088(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
    {
      sub_1C001518C(a1, *(_QWORD *)(a3 + 40), 3221225473LL);
      if ( (unsigned int)sub_1C00180B8(a1, a2) )
        sub_1C0034DE4(a1, a2, 3LL);
    }
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v15 = *(_QWORD *)(a3 + 40);
    LOBYTE(v8) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    sub_1C00336FC(a1, a2, v15, v8);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    sub_1C00171A0(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  sub_1C000FD80(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
