/*
 * XREFs of _xxxClientEnableMMCSS@4 @ 0xC3818
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _lambda_3ef8aac84d3e2e990d213b9149cc4885_::operator() @ 0xF1856 (_lambda_3ef8aac84d3e2e990d213b9149cc4885_--operator().c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall xxxClientEnableMMCSS(void *this)
{
  int v1; // esi
  int *v2; // ecx
  int result; // eax
  void *v4; // [esp+18h] [ebp-24h] BYREF
  unsigned int v5; // [esp+1Ch] [ebp-20h] BYREF
  int v6; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v4 = this;
  EtwTraceBeginCallback(57);
  v1 = KeUserModeCallback(57, &v4, 4, &v5, &v6);
  EtwTraceEndCallback(57);
  if ( v1 < 0 || v6 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)v5;
  if ( v5 + 4 < v5 || v5 + 4 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  result = *v2;
  ms_exc.registration.TryLevel = -2;
  return result;
}
