/*
 * XREFs of KxMcheckAbort @ 0x140404E80
 * Callers:
 *     KiMcheckAbort @ 0x140404940 (KiMcheckAbort.c)
 * Callees:
 *     KiHandleMcheck @ 0x14050CC70 (KiHandleMcheck.c)
 */

__int64 __fastcall KxMcheckAbort(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-138h] BYREF

  *a3 = 0;
  if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    a3 = 0LL;
  return KiHandleMcheck(a1, &v5, a3);
}
