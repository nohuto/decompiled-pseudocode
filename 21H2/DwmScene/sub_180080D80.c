/*
 * XREFs of sub_180080D80 @ 0x180080D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800811D4 @ 0x1800811D4 (sub_1800811D4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180080D80(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  `eh vector destructor iterator'((void *)(a1 + 72), 0x18uLL, 0xAuLL, (void (*)(void *))sub_180019400);
  sub_1800811D4(v1 + 32);
  return sub_18011C1A0(v1);
}
