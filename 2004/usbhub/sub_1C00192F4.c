/*
 * XREFs of sub_1C00192F4 @ 0x1C00192F4
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C00192F4(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // r15
  _DWORD *v7; // rdi
  KIRQL v8; // r12
  _DWORD *v9; // rax
  int v10; // ebx

  v6 = (KSPIN_LOCK *)sub_1C000F050(a1);
  v7 = sub_1C0011220(a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 465);
  sub_1C000FD80(a1, 256, 1819168836, a3, a2);
  v9 = sub_1C000F050(a1);
  if ( *((_QWORD *)v9 + 558) )
    v10 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v9 + 558))(
            *((_QWORD *)v9 + 529),
            a3,
            a2,
            1212441712LL);
  else
    v10 = -1073741822;
  sub_1C000FD80(a1, 256, 1819168817, v10, a2);
  if ( v10 >= 0 )
  {
    v7[288] = 2;
    *((_QWORD *)v7 + 145) = a3;
  }
  KeReleaseSpinLock(v6 + 465, v8);
  return (unsigned int)v10;
}
