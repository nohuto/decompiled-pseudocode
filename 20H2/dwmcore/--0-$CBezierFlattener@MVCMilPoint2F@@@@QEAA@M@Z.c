/*
 * XREFs of ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x1801B5338
 * Callers:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1801B53C4 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18025B7EC (--0CPathLengthOperation@@QEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18009F730 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(__int64 a1, float a2)
{
  __int64 result; // rax
  float v4; // xmm6_4

  `vector constructor iterator'(
    (char *)a1,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  `vector constructor iterator'(
    (char *)(a1 + 48),
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  result = a1;
  v4 = fmaxf(a2, 0.0) * 6.0;
  *(float *)(a1 + 44) = (float)(a2 * a2) * 0.000099999997;
  *(float *)(a1 + 32) = v4;
  *(float *)(a1 + 40) = v4 * 0.25;
  return result;
}
