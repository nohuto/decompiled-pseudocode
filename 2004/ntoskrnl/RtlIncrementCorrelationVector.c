/*
 * XREFs of RtlIncrementCorrelationVector @ 0x140912E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _snprintf_s @ 0x1403D3AF0 (_snprintf_s.c)
 *     sscanf_s @ 0x1403D4670 (sscanf_s.c)
 *     strcpy_s @ 0x1403D4770 (strcpy_s.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405878EC (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140913130 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  DWORD v1; // ebx
  int CorrelationVectorBufferLength; // ebp
  __int64 v4; // rdx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition((__int64)CorrelationVector, v4);
  v6 = CorrelationVectorLastDotPosition;
  if ( CorrelationVectorLastDotPosition < 0 )
    return -2147483643;
  v7 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition];
  if ( sscanf_s(v7 + 1, "%d", &v10) != 1 )
    return -2147483643;
  v8 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", ++v10);
  if ( v8 >= CorrelationVectorBufferLength - v6 - 2 )
    return -2147483643;
  strcpy_s(v7 + 1, v8 + 1, DstBuf);
  return v1;
}
