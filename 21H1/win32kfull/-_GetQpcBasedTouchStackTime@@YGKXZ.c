/*
 * XREFs of ?_GetQpcBasedTouchStackTime@@YGKXZ @ 0x149798
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z @ 0x1499B8 (-xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __stdcall _GetQpcBasedTouchStackTime()
{
  int v0; // edi
  int v1; // eax
  int v2; // esi
  unsigned int v3; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // [esp-8h] [ebp-1Ch]

  if ( _gliQpcFreq[1] | _gliQpcFreq[0] )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0);
    HIDWORD(v6) = _gliQpcFreq[1];
    LODWORD(v6) = _gliQpcFreq[0];
    return 10000 * (PerformanceCounter.QuadPart / v6)
         + 10000
         * (PerformanceCounter.QuadPart - __PAIR64__(HIDWORD(v6), _gliQpcFreq[0]) * (PerformanceCounter.QuadPart / v6))
         / __PAIR64__(HIDWORD(v6), _gliQpcFreq[0]);
  }
  else
  {
    v0 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v2 = MEMORY[0xFFDF0324];
      v3 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v2 = MEMORY[0xFFDF0324];
          v3 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v0 = MEMORY[0xFFDF0004];
      }
      v1 = v0 * (v2 << 8) + (((unsigned int)v0 * (unsigned __int64)v3) >> 24);
    }
    else
    {
      v1 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    return 10 * v1;
  }
}
