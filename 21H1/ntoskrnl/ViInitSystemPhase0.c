/*
 * XREFs of ViInitSystemPhase0 @ 0x140A6BFC8
 * Callers:
 *     VerifierInitSystem @ 0x140A6BF94 (VerifierInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D20 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1409C4E10 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x1409D6790 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x140A6C1AC (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140A6C1F4 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140A916BC (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  const char *v9; // rcx
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 *v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 *QuadPart; // rbx
  unsigned __int64 v18; // rdx
  int v19; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  String2 = 0LL;
  v4 = *(_QWORD *)(a1 + 240);
  v6 = *(_QWORD *)(v4 + 280);
  v7 = *(_DWORD *)(v4 + 132) & 2;
  v8 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v8;
  if ( (v8 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v8 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  LOBYTE(a3) = 1;
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0LL, a3, a4);
  qword_140C1D248 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140C1CB68 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140C1CB78 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_140C2A87C = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel == -1 )
  {
    if ( (_DWORD)VfRuleClasses )
    {
      MmVerifyDriverLevel = 0;
      VfRuleClasses = 0LL;
      MmVerifyDriverBufferLength = -1;
      VfRandomVerifiedDrivers = 0;
      ViVerifyAllDrivers = 0;
      VfSafeMode = 1;
      if ( (VfOptionFlags & 0x410) != 0 )
        VfClearanceFlag = 1;
      return;
    }
  }
  else
  {
    LODWORD(VfRuleClasses) = MmVerifyDriverLevel;
  }
  if ( !v7 && v6 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v6 + 56);
    BugCheckParameter1 = *(_QWORD *)(v6 + 64);
    qword_140D47038 = *(_QWORD *)(v6 + 72);
    *(_OWORD *)&xmmword_140D47040 = *(_OWORD *)(v6 + 80);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v12 = 1, v7) )
  {
    v12 = 0;
  }
  v9 = *(const char **)(a1 + 216);
  VfClearanceFlag = v12;
  if ( strstr(v9, "SAFEBOOT:") || VfClearanceFlag )
  {
    VfRuleClassesRecord = VfRuleClasses;
    MmVerifyDriverLevel = 0;
    VfRuleClasses = 0LL;
    MmVerifyDriverBufferLength = -1;
    VfRandomVerifiedDrivers = 0;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  if ( MmVerifyDriverLevel == -1 )
    goto LABEL_15;
  if ( !VfRandomVerifiedDrivers && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( MmVerifyDriverLevel == -1 || (MmVerifyDriverLevel & 0x400000) == 0 )
LABEL_15:
    VfRandomVerifiedDrivers = 0;
  if ( VfRandomVerifiedDrivers )
  {
    v13 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v13;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v13 >= 3 )
    {
      if ( v13 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_43;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_43:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_44;
  }
  if ( MmVerifyDriverBufferLength == -1 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))ViInitPickRandomTargets)(
                          (LARGE_INTEGER)v11.QuadPart,
                          (LARGE_INTEGER)v10.QuadPart) )
      return;
    MmVerifyDriverBufferLength = 0;
    if ( VfVerifyMode > 2 )
      VfSetVerifierRunningMode(2);
    goto LABEL_45;
  }
LABEL_44:
  VfRandomVerifiedDrivers = 0;
LABEL_45:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_75:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v11.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v14 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *(unsigned __int16 *)v11.QuadPart;
        if ( (unsigned int)v16 <= 0x20 && _bittest64(&v15, v16) || (_WORD)v16 == 12288 )
        {
          QuadPart = (__int64 *)v11.QuadPart;
        }
        else
        {
          if ( (_DWORD)v16 == 42 )
            goto LABEL_75;
          QuadPart = (__int64 *)(v11.QuadPart + 2);
          if ( (_DWORD)v16 == 34 )
          {
            v11.QuadPart += 2LL;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
            if ( QuadPart >= v14 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v14 );
            if ( QuadPart >= v14 )
              break;
          }
          else
          {
            while ( QuadPart < v14 )
            {
              v18 = *(unsigned __int16 *)QuadPart;
              if ( (unsigned int)v18 <= 0x20 )
              {
                if ( _bittest64(&v15, v18) )
                  break;
              }
              if ( (_WORD)v18 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v19 = 2 * (((__int64)QuadPart - v11.QuadPart) >> 1);
          if ( v19 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v11.QuadPart) >> 1);
            String2.MaximumLength = v19 + 2;
            if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
              break;
            String2.Buffer = (wchar_t *)v11.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v11.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v14 );
    }
  }
  VfInitSystemNoRebootNeeded(v11.QuadPart, 1);
}
