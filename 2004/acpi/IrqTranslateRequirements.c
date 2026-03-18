/*
 * XREFs of IrqTranslateRequirements @ 0x1C00B69F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqTranslateRequirements(__int64 a1, _OWORD *a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rax
  _OWORD *v9; // rax

  if ( a3 != a1 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a4 = 1;
  v9 = (_OWORD *)*a5;
  *v9 = *a2;
  v9[1] = a2[1];
  return 288LL;
}
