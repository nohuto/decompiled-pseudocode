/*
 * XREFs of HalpEfiInitializeOnResume @ 0x1404BEAF4
 * Callers:
 *     HalInitializeOnResume @ 0x140389140 (HalInitializeOnResume.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpEfiInitializeOnResume(__int64 a1, __int64 a2)
{
  int v2; // ecx

  if ( a1 && a2 && *(_DWORD *)(a1 + 40) >= 0x90u )
  {
    HalpResumeTime = *(_QWORD *)(a2 + 120);
    v2 = *(_DWORD *)(a2 + 112);
    HalpTimeStampAtResume = *(_QWORD *)(a2 + 128);
    HalpResumeFlags = *(_QWORD *)(a2 + 136);
    if ( v2 < 0 )
      goto LABEL_19;
    if ( HalEfiRuntimeServicesBlock[0] != *(_QWORD *)a2
      || qword_140E01878 != *(_QWORD *)(a2 + 8)
      || qword_140E01880 != *(_QWORD *)(a2 + 80)
      || qword_140E01888 != *(_QWORD *)(a2 + 48)
      || qword_140E01898 != *(_QWORD *)(a2 + 64)
      || qword_140E01890 != *(_QWORD *)(a2 + 56)
      || qword_140E018A0 != *(_QWORD *)(a2 + 88)
      || qword_140E018A8 != *(_QWORD *)(a2 + 96)
      || qword_140E018B0 != *(_QWORD *)(a2 + 104) )
    {
      if ( HalpHvciEnabled )
        KeBugCheckEx(0x5Cu, 0x5001uLL, 0xFFFFFFFFC0000018uLL, 1uLL, 0LL);
      HalEfiRuntimeServicesBlock[0] = *(_QWORD *)a2;
      qword_140E01878 = *(_QWORD *)(a2 + 8);
      qword_140E01880 = *(_QWORD *)(a2 + 80);
      qword_140E01888 = *(_QWORD *)(a2 + 48);
      qword_140E01898 = *(_QWORD *)(a2 + 64);
      qword_140E01890 = *(_QWORD *)(a2 + 56);
      qword_140E018A0 = *(_QWORD *)(a2 + 88);
      qword_140E018A8 = *(_QWORD *)(a2 + 96);
      qword_140E018B0 = *(_QWORD *)(a2 + 104);
    }
  }
  else
  {
    v2 = -1073741811;
  }
  if ( v2 < 0 )
LABEL_19:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v2, 1uLL, 0LL);
  return (unsigned int)v2;
}
