/*
 * XREFs of PnpDuplicateUnicodeString @ 0x14036E148
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14073B9CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x14073BDF8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14076C9EC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A76BC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
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
