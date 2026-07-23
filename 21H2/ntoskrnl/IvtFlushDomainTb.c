/*
 * XREFs of IvtFlushDomainTb @ 0x1404DFC90
 * Callers:
 *     <none>
 * Callees:
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 */

__int64 __fastcall IvtFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r8d
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  v6[1] = v6;
  v6[0] = v6;
  LOBYTE(a4) = a4 == 0;
  return IvtFlushTbInternal(a1, a2, v4, a4, 1);
}
