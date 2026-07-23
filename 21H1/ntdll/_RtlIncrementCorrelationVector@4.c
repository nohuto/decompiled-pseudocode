/*
 * XREFs of _RtlIncrementCorrelationVector@4 @ 0x4B3622A0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __snprintf_s @ 0x4B2FF650 (__snprintf_s.c)
 *     _sscanf_s @ 0x4B2FFFE0 (_sscanf_s.c)
 *     _strcpy_s @ 0x4B3000B0 (_strcpy_s.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  DWORD v1; // esi
  int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  CHAR v5; // al
  char *v6; // ebx
  int v7; // eax
  size_t v9; // [esp-8h] [ebp-2Ch]
  rsize_t v10; // [esp-8h] [ebp-2Ch]
  const char *v11; // [esp+0h] [ebp-24h]
  const char *v12; // [esp+0h] [ebp-24h]
  int CorrelationVectorBufferLength; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h] BYREF
  char Buffer[12]; // [esp+14h] [ebp-10h] BYREF

  v1 = 0;
  v14 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  v2 = -1;
  v3 = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  v4 = v3;
  if ( (int)v3 <= 0 )
    return -2147483643;
  do
  {
    v5 = CorrelationVector->Vector[HIDWORD(v3)];
    if ( !v5 )
      break;
    if ( v5 == 46 )
      v2 = HIDWORD(v3);
    ++HIDWORD(v3);
  }
  while ( SHIDWORD(v3) < v4 );
  if ( v2 < 0 )
    return -2147483643;
  v6 = &CorrelationVector->Vector[v2 + 1];
  if ( sscanf_s(v6, "%d", &v14) != 1 )
    return -2147483643;
  LODWORD(v9) = "%d";
  HIDWORD(v9) = ++v14;
  v7 = _snprintf_s(Buffer, 0xC0000000CuLL, v9, v11);
  if ( v7 >= CorrelationVectorBufferLength - v2 - 2 )
    return -2147483643;
  HIDWORD(v10) = Buffer;
  LODWORD(v10) = v7 + 1;
  strcpy_s(v6, v10, v12);
  return v1;
}
