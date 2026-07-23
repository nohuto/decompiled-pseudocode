/*
 * XREFs of HvlConfigurePcc @ 0x1404F7A54
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x1408F6C00 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F3E98 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePcc(int a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[4]; // [rsp+20h] [rbp-CC8h] BYREF
  __int64 v9; // [rsp+60h] [rbp-C88h]
  _BYTE v10[3184]; // [rsp+68h] [rbp-C80h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = *(_OWORD *)(a2 + 16);
  v8[0] = *(_OWORD *)a2;
  v5 = *(_OWORD *)(a2 + 32);
  v8[1] = v4;
  v6 = *(_OWORD *)(a2 + 48);
  v8[2] = v5;
  v9 = *(_QWORD *)(a2 + 64);
  v8[3] = v6;
  return HvlpSetLogicalProcessorProperty(a1, 2, v8);
}
