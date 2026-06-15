/*
 * XREFs of sub_18001FF60 @ 0x18001FF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001FF60(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)qword_18004FEE8 + 40LL))(
           qword_18004FEE8,
           *(unsigned int *)(a2 + 8),
           *(_QWORD *)a2);
}
