/*
 * XREFs of sub_180072914 @ 0x180072914
 * Callers:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180072CD0 @ 0x180072CD0 (sub_180072CD0.c)
 */

__int64 *__fastcall sub_180072914(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  LPVOID v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = sub_18006A18C(0x18uLL);
  if ( v5 )
    v4 = sub_180072CD0(v5, a2);
  result = a1;
  *a1 = v4;
  return result;
}
