/*
 * XREFs of HalpArtQueryCounter @ 0x1404D5F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 */

ULONGLONG __fastcall HalpArtQueryCounter(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  ULONGLONG pullResult; // [rsp+38h] [rbp+10h] BYREF

  pullResult = 0LL;
  v2 = (unsigned int)HalpTscFenceRequired;
  if ( HalpTscFenceRequired )
  {
    if ( HalpTscFenceRequired == 1 )
    {
      _mm_lfence();
    }
    else if ( HalpTscFenceRequired == 2 )
    {
      _mm_mfence();
    }
    v2 = __rdtsc();
    LODWORD(a2) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    a2 = (unsigned int)a2;
  }
  else
  {
    __asm { rdtscp }
  }
  v3 = a1[1];
  if ( RtlULongLongMult(((a2 << 32) | v2) - __readmsr(0x3Bu), *a1, &pullResult) >= 0 )
    return pullResult / v3;
  if ( v4 <= v5 )
    return v4 * (v5 / v3);
  return v5 * (v4 / v3);
}
