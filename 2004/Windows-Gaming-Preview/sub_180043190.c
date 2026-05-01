/*
 * XREFs of sub_180043190 @ 0x180043190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043190(
        LPUNKNOWN punkOuter,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  _OWORD *v11; // rax
  int v12; // ebx

  *a7 = xmmword_180050070;
  if ( a4 == 3 || *(_OWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter) == 0LL )
  {
    v12 = sub_1800436D4(punkOuter);
    if ( v12 >= 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, _OWORD *))(MEMORY[0] + 24LL))(
                             0LL,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
  }
  else
  {
    v11 = (_OWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
    v12 = 0;
    *a7 = *v11;
  }
  return (unsigned int)v12;
}
