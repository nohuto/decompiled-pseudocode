/*
 * XREFs of sub_180002700 @ 0x180002700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002700(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE pv[72]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 72) + 488LL))(*(_QWORD *)(v2 + 72), a2);
  v5 = v4;
  if ( v4 < 0 )
    sub_18005E8F8("AudioSessionSetWindowId", 2567LL, (unsigned int)v4);
  sub_18000F690(pv);
  return v5;
}
