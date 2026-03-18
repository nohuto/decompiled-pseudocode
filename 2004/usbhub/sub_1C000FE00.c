/*
 * XREFs of sub_1C000FE00 @ 0x1C000FE00
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C0042430 @ 0x1C0042430 (sub_1C0042430.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C0055C3C @ 0x1C0055C3C (sub_1C0055C3C.c)
 * Callees:
 *     sub_1C00028E8 @ 0x1C00028E8 (sub_1C00028E8.c)
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

LONG __fastcall sub_1C000FE00(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  __int64 v4; // rsi
  LONG result; // eax
  __int64 v9; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // ebp
  int v14; // r10d
  unsigned int v15; // eax
  int v16; // r11d
  int v17; // r10d
  _QWORD *v18; // r15
  __int64 v19; // rdx
  _DWORD *v20; // rax

  v4 = a2;
  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      sub_1C002DC78(a1, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
    v11 = (unsigned __int16)v4 >> 5;
    v12 = v4 & 0x1F;
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(v9 + 4LL * v11 + 3320) |= 1 << v12;
        sub_1C000FD80(a1, 0x10000, 1400066114, v10, v4);
        if ( !v14 )
        {
          v15 = (unsigned int)sub_1C000F050(a1);
          sub_1C00028E8(a1, v15 + 1912, a4);
          sub_1C0011260(a1, v9 + 3200);
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 4LL * v11 + 3320) &= ~(1 << v12);
      sub_1C000FD80(a1, 0x10000, 1400066121, v10, v4);
      if ( v17 && !v16 )
      {
        sub_1C000F050(a1);
        v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)sub_1C000F050(a1) + 414, 0LL);
        sub_1C000FD80(a1, 0x10000, 1213419565, 0LL, (__int64)v18);
        sub_1C0003610(a1, v19, v18);
        v20 = sub_1C000F050(a1);
        sub_1C0011C40(a1, v9 + 3200, *(_DWORD *)(v9 + 5256), 0, (__int64)(v20 + 478), 2001228627);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
