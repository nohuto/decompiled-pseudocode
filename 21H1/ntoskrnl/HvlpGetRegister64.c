/*
 * XREFs of HvlpGetRegister64 @ 0x1404F47B0
 * Callers:
 *     HvlGetReferenceTime @ 0x14038AA58 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038AA90 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404EC16C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F4E1C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F4FD8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589828 )
  {
    switch ( a1 )
    {
      case 589831:
        v2 = 1073741828;
        goto LABEL_27;
      case 589843:
        v2 = 1073741939;
        goto LABEL_27;
      case 589847:
        v2 = 1073741857;
        goto LABEL_27;
    }
    if ( a1 > 655359 )
    {
      if ( a1 <= 655375 )
      {
        v2 = a1 + 1073086608;
        goto LABEL_27;
      }
      if ( a1 == 655379 )
      {
        v2 = 1073741955;
        goto LABEL_27;
      }
    }
    goto LABEL_23;
  }
  if ( a1 == 589828 )
  {
    v2 = 1073741856;
    goto LABEL_27;
  }
  if ( a1 < 528 )
    goto LABEL_23;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_27;
  }
  switch ( a1 )
  {
    case 533:
      v2 = 1073742085;
      goto LABEL_27;
    case 624:
      v2 = 1073742102;
      goto LABEL_27;
    case 589826:
      v2 = 0x40000000;
      goto LABEL_27;
  }
  if ( a1 != 589827 )
  {
LABEL_23:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  v2 = 1073741826;
LABEL_27:
  *a2 = __readmsr(v2);
}
