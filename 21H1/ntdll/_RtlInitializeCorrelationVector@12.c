/*
 * XREFs of _RtlInitializeCorrelationVector@12 @ 0x4B362370
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     RtlpBase64Encode @ 0x4B362482 (RtlpBase64Encode.c)
 */

DWORD __cdecl RtlInitializeCorrelationVector(PCORRELATION_VECTOR CorrelationVector, int Version, const GUID *Guid)
{
  DWORD result; // eax
  size_t v4; // [esp-4h] [ebp-Ch]
  int v5; // [esp-4h] [ebp-Ch]

  if ( (unsigned __int8)(Version - 1) > 1u || !Guid )
    return -1073741811;
  LODWORD(v4) = 129;
  memset(CorrelationVector->Vector, 0, v4);
  CorrelationVector->Version = Version;
  result = RtlpBase64Encode(CorrelationVector->Vector, v5);
  if ( (result & 0x80000000) == 0 )
  {
    if ( (_BYTE)Version == 1 )
      strcpy(&CorrelationVector->Vector[16], ".0");
    else
      strcpy(&CorrelationVector->Vector[22], ".0");
  }
  return result;
}
