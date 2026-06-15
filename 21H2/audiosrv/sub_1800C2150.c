/*
 * XREFs of sub_1800C2150 @ 0x1800C2150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     floorf @ 0x180074403 (floorf.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

__int64 __fastcall sub_1800C2150(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // edx
  float v9; // xmm6_4
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  float v12; // [rsp+50h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0xFu, (__int64)&unk_18016DDC0);
  }
  v6 = (*(__int64 (__fastcall **)(_DWORD *, float *))(*(_QWORD *)a1 + 112LL))(a1, &v12);
  if ( v6 < 0 )
  {
    v7 = 300;
LABEL_7:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v6);
    return (unsigned int)v6;
  }
  v9 = (float)(a1[14] - 1);
  v12 = floorf((float)((float)(v9 * v12) + 0.5) - 1.0) / v9;
  if ( v12 <= 0.0 )
    v12 = 0.0;
  v6 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v10, a2, a3);
  if ( v6 < 0 )
  {
    v7 = 305;
    goto LABEL_7;
  }
  return 0LL;
}
