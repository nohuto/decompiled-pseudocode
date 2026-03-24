/*
 * XREFs of HalpDpReplaceControl @ 0x1409A8780
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpDpPostReplace @ 0x1409A836C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A865C (HalpDpPreReplace.c)
 *     HalpDpStartProcessor @ 0x1409A8A54 (HalpDpStartProcessor.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A8C54 (HalpInterruptSwapProcessorIdentifiers.c)
 */

__int64 __fastcall HalpDpReplaceControl(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // ebp
  __int64 v14; // rdi
  unsigned int v15; // edi

  v3 = *(_DWORD *)a2;
  v4 = 0;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          *(_BYTE *)(a2 + 68) = 1;
          if ( v3 )
          {
            v8 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
            v9 = *(_DWORD *)(a2 + 48);
            v10 = v3 + 1;
            while ( v9 < v10 )
            {
              if ( (++v8 & dword_140C4A17C) != 0 || !qword_140C4A180 )
                _mm_pause();
              else
                qword_140C4A180(v8);
              v9 = *(_DWORD *)(a2 + 48);
            }
            v11 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v10 )
            {
              if ( (++v11 & dword_140C4A17C) != 0 || !qword_140C4A180 )
                _mm_pause();
              else
                qword_140C4A180(v11);
            }
          }
        }
      }
      else
      {
        HalpDpPostReplace(a2, a2, a3);
      }
    }
    else if ( v3 )
    {
      *(LARGE_INTEGER *)(a2 + 80) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a2 + 72));
      v12 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v13 = v3 + 1;
      while ( *(_DWORD *)(a2 + 48) < v13 )
      {
        if ( (++v12 & dword_140C4A17C) != 0 || !qword_140C4A180 )
          _mm_pause();
        else
          qword_140C4A180(v12);
      }
      while ( *(_DWORD *)(a2 + 56) < v3 )
        _mm_pause();
      v14 = 0LL;
      for ( *(LARGE_INTEGER *)(a2 + 96) = KeQueryPerformanceCounter(0LL);
            (unsigned int)v14 < *(_DWORD *)a2;
            v14 = (unsigned int)(v14 + 1) )
      {
        HalpDpStartProcessor(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v14));
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v4 = HalpInterruptSwapProcessorIdentifiers(*(_QWORD *)(a2 + 8));
      v15 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v13 )
      {
        if ( (++v15 & dword_140C4A17C) != 0 || !qword_140C4A180 )
          _mm_pause();
        else
          qword_140C4A180(v15);
      }
    }
  }
  else
  {
    HalpDpPreReplace(a2);
  }
  return v4;
}
