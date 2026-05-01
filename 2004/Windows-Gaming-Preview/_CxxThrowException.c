/*
 * XREFs of _CxxThrowException @ 0x1800453D8
 * Callers:
 *     sub_180002984 @ 0x180002984 (sub_180002984.c)
 *     sub_1800029D0 @ 0x1800029D0 (sub_1800029D0.c)
 *     sub_1800029F0 @ 0x1800029F0 (sub_1800029F0.c)
 *     sub_180002B30 @ 0x180002B30 (sub_180002B30.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180045224 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x18004524C (-cancel_current_task@Concurrency@@YAXXZ_0.c)
 *     sub_180046315 @ 0x180046315 (sub_180046315.c)
 *     sub_1800463BB @ 0x1800463BB (sub_1800463BB.c)
 *     sub_1800465A9 @ 0x1800465A9 (sub_1800465A9.c)
 *     sub_1800465F7 @ 0x1800465F7 (sub_1800465F7.c)
 *     sub_180046621 @ 0x180046621 (sub_180046621.c)
 *     sub_180046D25 @ 0x180046D25 (sub_180046D25.c)
 *     sub_180046E02 @ 0x180046E02 (sub_180046E02.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
