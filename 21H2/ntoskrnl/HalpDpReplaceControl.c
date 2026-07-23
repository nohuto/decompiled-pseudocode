/*
 * XREFs of HalpDpReplaceControl @ 0x1409A96B0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDpPostReplace @ 0x1409A929C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A958C (HalpDpPreReplace.c)
 *     HalpDpStartProcessor @ 0x1409A9984 (HalpDpStartProcessor.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A9B84 (HalpInterruptSwapProcessorIdentifiers.c)
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
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // r8
  unsigned int v14; // esi
  int v15; // ebp
  __int64 v16; // rdi
  LARGE_INTEGER v17; // rdx
  LARGE_INTEGER v18; // r8
  unsigned int v19; // edi

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
              if ( (++v8 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
                _mm_pause();
              else
                qword_140C4A1C0(v8, a2, a3);
              v9 = *(_DWORD *)(a2 + 48);
            }
            v11 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v10 )
            {
              if ( (++v11 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
                _mm_pause();
              else
                qword_140C4A1C0(v11, a2, a3);
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
      v14 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v15 = v3 + 1;
      while ( *(_DWORD *)(a2 + 48) < v15 )
      {
        if ( (++v14 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
          _mm_pause();
        else
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C4A1C0)(
            v14,
            (LARGE_INTEGER)v12.QuadPart,
            (LARGE_INTEGER)v13.QuadPart);
      }
      while ( *(_DWORD *)(a2 + 56) < v3 )
        _mm_pause();
      v16 = 0LL;
      for ( *(LARGE_INTEGER *)(a2 + 96) = KeQueryPerformanceCounter(0LL);
            (unsigned int)v16 < *(_DWORD *)a2;
            v16 = (unsigned int)(v16 + 1) )
      {
        HalpDpStartProcessor(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v16));
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v4 = HalpInterruptSwapProcessorIdentifiers(*(_QWORD *)(a2 + 8));
      v19 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v15 )
      {
        if ( (++v19 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
          _mm_pause();
        else
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C4A1C0)(
            v19,
            (LARGE_INTEGER)v17.QuadPart,
            (LARGE_INTEGER)v18.QuadPart);
      }
    }
  }
  else
  {
    HalpDpPreReplace(a2);
  }
  return v4;
}
