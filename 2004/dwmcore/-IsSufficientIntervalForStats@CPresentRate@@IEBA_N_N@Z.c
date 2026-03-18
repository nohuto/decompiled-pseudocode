/*
 * XREFs of ?IsSufficientIntervalForStats@CPresentRate@@IEBA_N_N@Z @ 0x18020C348
 * Callers:
 *     ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1800EAEE0 (-PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 */

char __fastcall CPresentRate::IsSufficientIntervalForStats(CPresentRate *this, char a2)
{
  char v2; // bl
  int v5; // ecx
  unsigned __int64 v6; // rax

  v2 = 0;
  *((_DWORD *)this + 4) = 1065353216;
  if ( !*((_QWORD *)this + 1) )
    return 1;
  if ( dword_180349D34 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180349D34);
    if ( dword_180349D34 == -1 )
    {
      qword_180349D38 = g_qpcFrequency.QuadPart / 1000;
      Init_thread_footer(&dword_180349D34);
    }
  }
  v5 = CCommonRegistryData::OverlayDisqualifyInterval;
  v6 = (*((_QWORD *)g_pComposition + 57) - *((_QWORD *)this + 1)) / (unsigned __int64)qword_180349D38;
  if ( !a2 )
    v5 = CCommonRegistryData::OverlayQualifyInterval;
  if ( (unsigned int)v6 >= v5 )
  {
    *((float *)this + 4) = (float)(int)v6 / (float)v5;
    return 1;
  }
  return v2;
}
