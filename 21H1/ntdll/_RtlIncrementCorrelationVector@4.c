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

int __stdcall RtlIncrementCorrelationVector(int a1)
{
  int v1; // esi
  int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  char v5; // al
  char *v6; // ebx
  int v7; // eax
  int CorrelationVectorBufferLength; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h] BYREF
  char Buffer[12]; // [esp+14h] [ebp-10h] BYREF

  v1 = 0;
  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  v2 = -1;
  v3 = RtlpGetCorrelationVectorBufferLength(a1);
  v4 = v3;
  if ( (int)v3 <= 0 )
    return -2147483643;
  do
  {
    v5 = *(_BYTE *)(a1 + HIDWORD(v3) + 1);
    if ( !v5 )
      break;
    if ( v5 == 46 )
      v2 = HIDWORD(v3);
    ++HIDWORD(v3);
  }
  while ( SHIDWORD(v3) < v4 );
  if ( v2 < 0 )
    return -2147483643;
  v6 = (char *)(v2 + a1 + 2);
  if ( sscanf_s(v6, "%d", &v10) != 1 )
    return -2147483643;
  v7 = _snprintf_s(Buffer, 0xCu, 0xCu, "%d", ++v10);
  if ( v7 >= CorrelationVectorBufferLength - v2 - 2 )
    return -2147483643;
  strcpy_s(v6, v7 + 1, Buffer);
  return v1;
}
