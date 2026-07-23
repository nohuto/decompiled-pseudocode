/*
 * XREFs of HalpLbrInitialize @ 0x14099C704
 * Callers:
 *     HalpInitializeProfiling @ 0x14099C5DC (HalpInitializeProfiling.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char HalpLbrInitialize()
{
  unsigned int v5; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned __int8 v15; // [rsp+20h] [rbp-20h] BYREF
  char v16; // [rsp+21h] [rbp-1Fh] BYREF
  unsigned __int8 v17[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v18; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(_RAX) = HalpFeatureBits;
  v16 = 0;
  v17[0] = 0;
  v15 = 0;
  HalpLbrIsInitialized = 0;
  v18 = 0LL;
  if ( (HalpFeatureBits & 1) == 0 )
    return (char)_RAX;
  if ( HalpIsHvPresent() )
  {
    LOBYTE(_RAX) = HviGetHypervisorFeatures(&v18);
    if ( (HIDWORD(v18) & 0x4000000) == 0 )
      return (char)_RAX;
  }
  LOBYTE(_RAX) = HalpGetCpuInfo(&v16, 0LL, v17, &v15);
  if ( !(_BYTE)_RAX || v15 != 2 )
    return (char)_RAX;
  if ( v16 != 6 )
    goto LABEL_27;
  LOBYTE(_RAX) = v17[0];
  if ( v17[0] <= 0x56u )
  {
    if ( v17[0] == 86 || v17[0] == 60 || v17[0] == 61 || v17[0] == 63 )
      goto LABEL_9;
    if ( v17[0] <= 0x44u )
      goto LABEL_27;
    if ( v17[0] < 0x48u )
      goto LABEL_9;
    if ( v17[0] != 78 )
    {
      if ( v17[0] != 79 )
      {
        if ( v17[0] != 85 )
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
  if ( v17[0] == 94 )
    goto LABEL_26;
  if ( v17[0] > 0x65u )
  {
    if ( v17[0] <= 0x67u )
      goto LABEL_38;
    if ( v17[0] > 0x7Cu )
    {
      if ( v17[0] <= 0x7Eu )
        goto LABEL_38;
      switch ( v17[0] )
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
  v5 = (unsigned __int8)_RAX;
  if ( (_BYTE)_RAX )
  {
    _RAX = 1LL;
    HalpLbrIsFreezeLegacy = v5 <= 3;
    __asm { cpuid }
    if ( (_RCX & 0x8000) != 0 )
    {
      v11 = __readmsr(0x345u);
      v12 = (v11 & 0x3F) - 3;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          HalpLbrMostSignificantFromAddrBit = 60;
          goto LABEL_15;
        }
        if ( v13 != 2 )
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
