/*
 * XREFs of RtlpMergeContextXState @ 0x180072570
 * Callers:
 *     RtlCaptureContext2 @ 0x1800A18A0 (RtlCaptureContext2.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1800725D0 (RtlLocateExtendedFeature2.c)
 */

_QWORD *__fastcall RtlpMergeContextXState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *result; // rax
  __int64 v6; // rdx

  v2 = *(int *)(a1 + 1248);
  result = (_QWORD *)RtlLocateExtendedFeature2(a1 + 1232, 11LL, 2147353560LL);
  if ( result )
  {
    v6 = *(_QWORD *)(v2 + a1 + 1232);
    if ( a2 )
    {
      *(_QWORD *)(v2 + a1 + 1232) = v6 | 0x800;
      *result = 1LL;
      result[1] = a2;
    }
    else
    {
      *(_QWORD *)(v2 + a1 + 1232) = v6 & 0xFFFFFFFFFFFFF7FFuLL;
      *result = 0LL;
      result[1] = 0LL;
    }
  }
  return result;
}
