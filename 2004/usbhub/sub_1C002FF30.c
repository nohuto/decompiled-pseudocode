/*
 * XREFs of sub_1C002FF30 @ 0x1C002FF30
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002FF30(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0;
  sub_1C000FD80(a1, 8, 1768898097, (__int64)a3, 0LL);
  v6 = sub_1C0011220(a2);
  sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 96, 0, 0, 0, 0, (__int64)aDioctlC, 917, 0);
  if ( KeGetCurrentIrql() )
  {
    v7 = -1073741811;
    v9 = sub_1C0011220(a2);
    sub_1C004A608(a1, *((unsigned __int16 *)v9 + 714), 95, 0, 0, -1073741811, 0, (__int64)aDioctlC, 931, 0);
  }
  else
  {
    v7 = sub_1C0036CFC(a1, a2, &v11);
    if ( (v7 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v7) )
    {
      v8 = sub_1C0011220(a2);
      sub_1C004A608(a1, *((unsigned __int16 *)v8 + 714), 94, 0, 0, v7, v11, (__int64)aDioctlC, 924, 0);
    }
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v7;
}
