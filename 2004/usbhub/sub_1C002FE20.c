/*
 * XREFs of sub_1C002FE20 @ 0x1C002FE20
 * Callers:
 *     sub_1C002F6C0 @ 0x1C002F6C0 (sub_1C002F6C0.c)
 *     sub_1C002F764 @ 0x1C002F764 (sub_1C002F764.c)
 *     sub_1C002F830 @ 0x1C002F830 (sub_1C002F830.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C002FB30 @ 0x1C002FB30 (sub_1C002FB30.c)
 *     sub_1C002FCB0 @ 0x1C002FCB0 (sub_1C002FCB0.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 */

LONG __fastcall sub_1C002FE20(__int64 a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rsi
  __int64 v7; // rdx
  int v8; // eax

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  v8 = *(_DWORD *)(a2 + 2912);
  if ( a3 == 1 )
    *(_DWORD *)(a2 + 2912) = --v8;
  else
    *(_BYTE *)(a2 + 2916) = 0;
  if ( !v8 && !*(_BYTE *)(a2 + 2916) )
  {
    sub_1C0003610(a1, v7, *(_QWORD **)(a2 + 2880));
    *(_QWORD *)(a2 + 2880) = 0LL;
  }
  return KeSetEvent(v3, 0, 0);
}
