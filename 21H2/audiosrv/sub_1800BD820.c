/*
 * XREFs of sub_1800BD820 @ 0x1800BD820
 * Callers:
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_180038270 @ 0x180038270 (sub_180038270.c)
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 *     sub_18005E354 @ 0x18005E354 (sub_18005E354.c)
 *     sub_18005E548 @ 0x18005E548 (sub_18005E548.c)
 *     sub_18005E734 @ 0x18005E734 (sub_18005E734.c)
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 *     sub_1800CA0C0 @ 0x1800CA0C0 (sub_1800CA0C0.c)
 *     sub_1800CA170 @ 0x1800CA170 (sub_1800CA170.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800BD820(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v7; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  if ( v7 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v7 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
