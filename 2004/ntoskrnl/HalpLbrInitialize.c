/*
 * XREFs of HalpLbrInitialize @ 0x14099B2E4
 * Callers:
 *     HalpInitializeProfiling @ 0x14099B1BC (HalpInitializeProfiling.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14039E1E0 (HalpGetCpuInfo.c)
 *     HalpIsHvPresent @ 0x14039F248 (HalpIsHvPresent.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char HalpLbrInitialize()
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v8; // ecx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v18; // [rsp+20h] [rbp-20h] BYREF
  char v19; // [rsp+21h] [rbp-1Fh] BYREF
  unsigned __int8 v20[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v21; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(_RAX) = HalpFeatureBits;
  v19 = 0;
  v20[0] = 0;
  v18 = 0;
  HalpLbrIsInitialized = 0;
  v21 = 0LL;
  if ( (HalpFeatureBits & 1) == 0 )
    return (char)_RAX;
  if ( HalpIsHvPresent() )
  {
    LOBYTE(_RAX) = HviGetHypervisorFeatures(&v21, v1, v2, v3);
    if ( (HIDWORD(v21) & 0x4000000) == 0 )
      return (char)_RAX;
  }
  LOBYTE(_RAX) = HalpGetCpuInfo(&v19, 0LL, v20, &v18);
  if ( !(_BYTE)_RAX || v18 != 2 )
    return (char)_RAX;
  if ( v19 != 6 )
    goto LABEL_27;
  LOBYTE(_RAX) = v20[0];
  if ( v20[0] <= 0x56u )
  {
    if ( v20[0] == 86 || v20[0] == 60 || v20[0] == 61 || v20[0] == 63 )
      goto LABEL_9;
    if ( v20[0] <= 0x44u )
      goto LABEL_27;
    if ( v20[0] < 0x48u )
      goto LABEL_9;
    if ( v20[0] != 78 )
    {
      if ( v20[0] != 79 )
      {
        if ( v20[0] != 85 )
          goto LABEL_27;
        goto LABEL_26;
      }
LABEL_9:
      HalpLbrStackSize = 16;
      goto LABEL_10;
    }
LABEL_26:
    HalpLbrStackSize = 32;
    goto LABEL_27;
  }
  if ( v20[0] == 94 )
    goto LABEL_26;
  if ( v20[0] > 0x65u )
  {
    if ( v20[0] <= 0x67u )
      goto LABEL_38;
    if ( v20[0] > 0x7Cu )
    {
      if ( v20[0] <= 0x7Eu )
        goto LABEL_38;
      switch ( v20[0] )
      {
        case 0x8Eu:
          goto LABEL_26;
        case 0x9Du:
          goto LABEL_38;
        case 0x9Eu:
          goto LABEL_26;
        case 0x9Fu:
LABEL_38:
          HalpLbrStackSize = 32;
          goto LABEL_10;
      }
    }
  }
LABEL_27:
  if ( !HalpLbrStackSize )
    return (char)_RAX;
LABEL_10:
  _RAX = 10LL;
  __asm { cpuid }
  v8 = (unsigned __int8)_RAX;
  if ( (_BYTE)_RAX )
  {
    _RAX = 1LL;
    HalpLbrIsFreezeLegacy = v8 <= 3;
    __asm { cpuid }
    if ( (_RCX & 0x8000) != 0 )
    {
      v14 = __readmsr(0x345u);
      v15 = (v14 & 0x3F) - 3;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          HalpLbrMostSignificantFromAddrBit = 60;
          goto LABEL_15;
        }
        if ( v16 != 2 )
          goto LABEL_15;
        HalpLbrMostSignificantToAddrBit = 47;
      }
      HalpLbrMostSignificantFromAddrBit = 62;
    }
LABEL_15:
    HalpLbrIsInitialized = 1;
    off_140C00988[0] = (__int64 (__fastcall *)())HalpLbrCaptureStack;
    off_140C00990[0] = (__int64 (__fastcall *)())HalpLbrClearStack;
    off_140C00998[0] = (__int64 (__fastcall *)())HalpLbrConfigureRecording;
    off_140C009A0[0] = (__int64 (__fastcall *)())HalpLbrGetInformation;
    off_140C009A8[0] = (__int64 (__fastcall *)())HalpLbrResumeRecording;
    off_140C009B0[0] = (__int64 (__fastcall *)())HalpLbrStartRecording;
    _RAX = HalpLbrStopRecording;
    off_140C009B8[0] = (__int64 (__fastcall *)())HalpLbrStopRecording;
  }
  return (char)_RAX;
}
