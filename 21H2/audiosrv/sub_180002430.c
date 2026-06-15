/*
 * XREFs of sub_180002430 @ 0x180002430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002430(__int64 a1, __int64 a2)
{
  _BYTE pv[72]; // [rsp+30h] [rbp-48h] BYREF

  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  LODWORD(a2) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019E618 + 304LL))(
                  qword_18019E618,
                  a1,
                  a2);
  sub_18000F690(pv);
  return (unsigned int)a2;
}
