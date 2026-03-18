/*
 * XREFs of HalpTimerSetProfilingTarget @ 0x140375F18
 * Callers:
 *     EmonSetInterval @ 0x140375DF0 (EmonSetInterval.c)
 *     Amd64SetInterval @ 0x1404D9260 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetProfilingTarget(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int16 v4; // [rsp+0h] [rbp-8h]

  _disable();
  result = HalpProfileData;
  v3 = 32LL * KeGetPcr()->Prcb.Number;
  *(_DWORD *)(v3 + HalpProfileData + 20) = 0;
  *(_DWORD *)(v3 + result + 24) = a1;
  *(_DWORD *)(v3 + result + 16) = a2;
  if ( (v4 & 0x200) != 0 )
    _enable();
  return result;
}
