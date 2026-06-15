/*
 * XREFs of ?MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18004D730
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800484E0 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180122E14 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::MarkSystemEffectsForResolution(unsigned __int64 *a1, unsigned int a2)
{
  int *v2; // rsi
  unsigned __int64 *v4; // r14
  __int64 v5; // rbp
  unsigned __int64 *v6; // r15
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+64h] [rbp+1Ch]

  v13 = 0;
  v2 = &v13;
  v14 = 1;
  v4 = a1 + 207;
  v5 = 2LL;
  v6 = a1 + 209;
  v7 = a1 + 211;
  do
  {
    v8 = *v2;
    v9 = gsl::span<SystemEffectDescriptor,-1>::operator[](v4, v8);
    SystemEffectDescriptor::MarkAsNeedsResolution(v9, a2);
    v10 = gsl::span<SystemEffectDescriptor,-1>::operator[](v6, v8);
    SystemEffectDescriptor::MarkAsNeedsResolution(v10, a2);
    v11 = gsl::span<SystemEffectDescriptor,-1>::operator[](v7, v8);
    result = SystemEffectDescriptor::MarkAsNeedsResolution(v11, a2);
    ++v2;
    --v5;
  }
  while ( v5 );
  return result;
}
