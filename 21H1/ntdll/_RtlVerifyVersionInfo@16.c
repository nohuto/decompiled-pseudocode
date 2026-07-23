/*
 * XREFs of _RtlVerifyVersionInfo@16 @ 0x4B363DF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpVerGetConditionMask@12 @ 0x4B2AE80E (_RtlpVerGetConditionMask@12.c)
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _RtlpVerCompare@20 @ 0x4B2B0391 (_RtlpVerCompare@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  NTSTATUS result; // eax
  int v4; // edx
  int wSuiteMask; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  char v10; // bl
  char v11; // al
  int v12; // ebx
  bool v13; // zf
  int v14; // eax
  PRTL_OSVERSIONINFOEXW v15; // ebx
  int v16; // eax
  int v17; // eax
  size_t v18; // [esp-4h] [ebp-13Ch]
  unsigned int v19; // [esp+Ch] [ebp-12Ch]
  int v20; // [esp+10h] [ebp-128h]
  char v21; // [esp+17h] [ebp-121h] BYREF
  _OSVERSIONINFOEXW v22; // [esp+18h] [ebp-120h] BYREF

  v21 = 0;
  if ( !TypeMask )
    return -1073741811;
  LODWORD(v18) = 280;
  memset(&v22.dwMajorVersion, 0, v18);
  v22.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&v22);
  if ( result )
    return result;
  if ( (TypeMask & 0x40) != 0 )
  {
    wSuiteMask = VersionInformation->wSuiteMask;
    if ( (_WORD)wSuiteMask )
    {
      v6 = 0;
      v20 = VersionInformation->wSuiteMask;
      v19 = 0;
      while ( 1 )
      {
        v7 = 1 << v6;
        if ( (wSuiteMask & (1 << v6)) == 0 )
          goto LABEL_16;
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        {
          v8 = RtlpVerGetConditionMask(0x40u, v4, ConditionMask, SHIDWORD(ConditionMask));
          v6 = v19;
        }
        else
        {
          v8 = 0;
        }
        v9 = v8 - 6;
        if ( !v9 )
          break;
        if ( v9 != 1 )
          return -1073741811;
        wSuiteMask = v20;
        if ( (v22.wSuiteMask & (unsigned __int16)v7) == 0 )
          goto LABEL_16;
        v10 = 1;
        v21 = 1;
LABEL_17:
        v19 = ++v6;
        if ( v6 >= 0x10 )
        {
          if ( RtlpVerGetConditionMask(0x40u, v4, ConditionMask, SHIDWORD(ConditionMask)) != 7 || v10 )
            goto LABEL_20;
          return -1073741735;
        }
      }
      if ( (v22.wSuiteMask & (unsigned __int16)v7) == 0 )
        return -1073741735;
      wSuiteMask = v20;
LABEL_16:
      v10 = v21;
      goto LABEL_17;
    }
  }
LABEL_20:
  v11 = 1;
  v12 = 1;
  v21 = 1;
  if ( (TypeMask & 2) != 0 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v12 = RtlpVerGetConditionMask(2u, v4, ConditionMask, SHIDWORD(ConditionMask));
    else
      v12 = (unsigned __int8)(ConditionMask >> 4);
    v13 = !RtlpVerCompare(v12, VersionInformation->dwMajorVersion, v22.dwMajorVersion, (bool *)&v21, 0);
    v11 = v21;
    if ( v13 )
    {
      if ( !v21 )
        return -1073741735;
    }
    else if ( !v21 )
    {
      goto LABEL_53;
    }
  }
  if ( (TypeMask & 1) == 0 )
    goto LABEL_36;
  if ( v12 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v12 = RtlpVerGetConditionMask(1u, v4, ConditionMask, SHIDWORD(ConditionMask));
    else
      v12 = (unsigned __int8)(ConditionMask >> 2);
  }
  v13 = !RtlpVerCompare(v12, VersionInformation->dwMinorVersion, v22.dwMinorVersion, (bool *)&v21, 1);
  v11 = v21;
  if ( v13 )
  {
    if ( !v21 )
      return -1073741735;
  }
  else
  {
LABEL_36:
    if ( !v11 )
      goto LABEL_53;
  }
  if ( (TypeMask & 0x20) == 0 )
  {
LABEL_46:
    if ( !v11 )
      goto LABEL_53;
    goto LABEL_47;
  }
  if ( v12 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v12 = RtlpVerGetConditionMask(0x20u, v4, ConditionMask, SHIDWORD(ConditionMask));
    else
      v12 = 0;
  }
  if ( RtlpVerCompare(v12, VersionInformation->wServicePackMajor, v22.wServicePackMajor, (bool *)&v21, 0) )
  {
    v11 = v21;
    goto LABEL_46;
  }
  if ( !v21 )
    return -1073741735;
LABEL_47:
  if ( (TypeMask & 0x10) != 0 )
  {
    if ( v12 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v12 = RtlpVerGetConditionMask(0x10u, v4, ConditionMask, SHIDWORD(ConditionMask));
      else
        v12 = 0;
    }
    if ( !RtlpVerCompare(v12, VersionInformation->wServicePackMinor, v22.wServicePackMinor, (bool *)&v21, 1) )
      return -1073741735;
  }
LABEL_53:
  if ( (TypeMask & 4) != 0 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v14 = RtlpVerGetConditionMask(4u, v4, ConditionMask, SHIDWORD(ConditionMask));
    else
      v14 = BYTE2(ConditionMask);
    v15 = VersionInformation;
    if ( !RtlpVerCompare(v14, VersionInformation->dwBuildNumber, v22.dwBuildNumber, (bool *)&v21, 0) )
      return -1073741735;
  }
  else
  {
    v15 = VersionInformation;
  }
  if ( ((TypeMask & 8) == 0
     || ((ConditionMask & 0x8000000000000000uLL) != 0LL
       ? (v16 = RtlpVerGetConditionMask(8u, v4, ConditionMask, SHIDWORD(ConditionMask)))
       : (v16 = 0),
         RtlpVerCompare(v16, v15->dwPlatformId, v22.dwPlatformId, (bool *)&v21, 0)))
    && ((TypeMask & 0x80u) == 0
     || ((ConditionMask & 0x8000000000000000uLL) != 0LL
       ? (v17 = RtlpVerGetConditionMask(0x80u, v4, ConditionMask, SHIDWORD(ConditionMask)))
       : (v17 = 0),
         RtlpVerCompare(v17, v15->wProductType, v22.wProductType, (bool *)&v21, 0))) )
  {
    return 0;
  }
  else
  {
    return -1073741735;
  }
}
