/*
 * XREFs of IovInitializeIrp @ 0x1409C6258
 * Callers:
 *     IoInitializeIrp @ 0x1402254E0 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x1409D2404 (VfIoInitializeIrp.c)
 */

__int64 __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoInitializeIrp(a1, a4, 0LL);
  return result;
}
