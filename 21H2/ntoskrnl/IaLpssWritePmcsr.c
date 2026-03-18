/*
 * XREFs of IaLpssWritePmcsr @ 0x140655C34
 * Callers:
 *     IaLpssPciSetPower @ 0x140655828 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssWritePmcsr(unsigned int *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  ((void (__fastcall *)(__int64, _QWORD))off_140C06A58[0])(IaLpssPmcsr, *a1);
  return 0LL;
}
