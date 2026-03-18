/*
 * XREFs of HalpEfiInitializeOnResume @ 0x1405105D4
 * Callers:
 *     HalInitializeOnResume @ 0x14038D330 (HalInitializeOnResume.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpEfiInitializeOnResume(__int64 a1, LARGE_INTEGER *a2)
{
  int LowPart; // r8d

  if ( !a1 || !a2 || *(_DWORD *)(a1 + 40) < 0x90u )
  {
    LowPart = -1073741811;
LABEL_19:
    KeBugCheckEx(0x5Cu, 0x5000uLL, LowPart, 1uLL, 0LL);
  }
  HalpResumeTime = a2[15];
  LowPart = a2[14].LowPart;
  HalpTimeStampAtResume = a2[16].QuadPart;
  HalpResumeFlags = a2[17].QuadPart;
  if ( LowPart < 0 )
    goto LABEL_19;
  if ( HalEfiRuntimeServicesBlock[0] != a2->QuadPart
    || qword_140E01878 != a2[1].QuadPart
    || qword_140E01880 != a2[10].QuadPart
    || qword_140E01888 != a2[6].QuadPart
    || qword_140E01898 != a2[8].QuadPart
    || qword_140E01890 != a2[7].QuadPart
    || qword_140E018A0 != a2[11].QuadPart
    || qword_140E018A8 != a2[12].QuadPart
    || qword_140E018B0 != a2[13].QuadPart )
  {
    if ( HalpHvciEnabled )
      KeBugCheckEx(0x5Cu, 0x5001uLL, 0xFFFFFFFFC0000018uLL, 1uLL, 0LL);
    HalEfiRuntimeServicesBlock[0] = a2->QuadPart;
    qword_140E01878 = a2[1].QuadPart;
    qword_140E01880 = a2[10].QuadPart;
    qword_140E01888 = a2[6].QuadPart;
    qword_140E01898 = a2[8].QuadPart;
    qword_140E01890 = a2[7].QuadPart;
    qword_140E018A0 = a2[11].QuadPart;
    qword_140E018A8 = a2[12].QuadPart;
    qword_140E018B0 = a2[13].QuadPart;
  }
  return (unsigned int)LowPart;
}
