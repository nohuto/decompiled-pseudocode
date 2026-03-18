/*
 * XREFs of sub_1C0018990 @ 0x1C0018990
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001C46C @ 0x1C001C46C (sub_1C001C46C.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C003A450 @ 0x1C003A450 (sub_1C003A450.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C0057490 @ 0x1C0057490 (sub_1C0057490.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C003AC5C @ 0x1C003AC5C (sub_1C003AC5C.c)
 *     sub_1C004BE38 @ 0x1C004BE38 (sub_1C004BE38.c)
 */

void __fastcall sub_1C0018990(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rbp
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r13
  _DWORD *v11; // rdi
  int v12; // r10d
  int v13; // r10d
  int v14; // eax
  _DWORD *v15; // rax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = sub_1C0011220(a2);
  sub_1C000FD80(a1, 256, 1970032708, 0LL, 0LL);
  sub_1C000FD80(a1, v12, a3, a2, 0LL);
  v14 = v11[288];
  if ( v14 >= 0 )
  {
    if ( v14 <= 1 )
    {
      sub_1C000FD80(a1, v13, 1970032689, 0LL, (int)v11[288]);
    }
    else if ( v14 == 2 )
    {
      if ( (v11[355] & 0x20000000) != 0 )
      {
        sub_1C004BE38(a1, *((_QWORD *)v11 + 145), 0LL, 0LL);
        v11[355] &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *((_QWORD *)v11 + 145);
      *((_QWORD *)v11 + 145) = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      sub_1C000FD80(a1, v13, 1970032690, 0LL, v8);
      v15 = sub_1C000F050(a1);
      if ( *((_QWORD *)v15 + 559) )
        (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v15 + 559))(
          *((_QWORD *)v15 + 529),
          v8,
          a2,
          1212441712LL);
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      sub_1C003AC5C(a1, v8);
  }
}
