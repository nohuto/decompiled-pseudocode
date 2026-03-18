/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1402D1DA4
 * Callers:
 *     PiDevCfgConfigureDeviceLocation @ 0x1406E6424 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407455A8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryDriverNode @ 0x140746270 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x14094A7D4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
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
