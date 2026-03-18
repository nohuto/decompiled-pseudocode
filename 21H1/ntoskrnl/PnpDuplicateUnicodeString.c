/*
 * XREFs of PnpDuplicateUnicodeString @ 0x14036A7D0
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140721F14 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgBuildIndirectString @ 0x1407228CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140757A28 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14075BE9C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A086C (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return (char)StringRoutine;
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(StringRoutine) = 1;
  return (char)StringRoutine;
}
