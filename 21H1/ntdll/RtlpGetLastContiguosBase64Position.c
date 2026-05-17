/*
 * XREFs of RtlpGetLastContiguosBase64Position @ 0x4B362583
 * Callers:
 *     _RtlValidateCorrelationVector@4 @ 0x4B3623E0 (_RtlValidateCorrelationVector@4.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 */

int __thiscall RtlpGetLastContiguosBase64Position(char *this)
{
  int v2; // esi
  int v3; // edx
  int CorrelationVectorBufferLength; // ebx
  int v5; // ecx
  char v6; // al

  v2 = -1;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(this);
  do
  {
    v5 = v3;
    if ( v3 >= CorrelationVectorBufferLength )
      break;
    v6 = this[v3 + 1];
    if ( !v6 )
      break;
    if ( v6 >= 65 && v6 <= 90 || v6 >= 97 && v6 <= 122 || v6 >= 48 && v6 <= 57 || v6 == 43 || v6 == 47 )
      v2 = v3;
    ++v3;
  }
  while ( v2 == v5 );
  return v2;
}
