/*
 * XREFs of RtlSwitchedVVI @ 0x18003CC30
 * Callers:
 *     <none>
 * Callees:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x18003CF70 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18007A208 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  DWORD result; // eax
  unsigned int v8; // ecx
  char v9; // al
  ULONGLONG v10; // rdi
  char v11; // al
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r10d
  int wSuiteMask; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v25[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&v25[1], 0, 0x118uLL);
  v25[0] = 284;
  result = SwitchedRtlGetVersion(v25);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInfo->wSuiteMask )
    {
      v16 = 0;
      wSuiteMask = VersionInfo->wSuiteMask;
      do
      {
        v18 = 1 << v16;
        if ( (wSuiteMask & (1 << v16)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            v19 = 0;
          else
            v19 = RtlpVerGetConditionMask(ConditionMask, 64LL);
          v20 = v19 - 6;
          if ( v20 )
          {
            if ( v20 != 1 )
              return -1073741811;
            if ( (v25[70] & (unsigned __int16)v18) != 0 )
              v6 = 1;
          }
          else if ( (v25[70] & (unsigned __int16)v18) == 0 )
          {
            return -1073741735;
          }
        }
        ++v16;
      }
      while ( v16 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 2;
    v9 = 1;
    v24[0] = 1;
    LODWORD(v10) = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      {
        LODWORD(v10) = (unsigned __int8)(ConditionMask >> 4);
      }
      else
      {
        v11 = 0;
        do
        {
          ++v11;
          v8 >>= 1;
        }
        while ( v8 );
        v10 = (ConditionMask >> (3 * (v11 - 1))) & 7;
      }
      v12 = (unsigned __int8)RtlpVerCompare(v10, VersionInfo->dwMajorVersion, v25[1], (unsigned int)v24, 0) == 0;
      v9 = v24[0];
      if ( v12 )
      {
        if ( !v24[0] )
          return -1073741735;
      }
      else if ( !v24[0] )
      {
LABEL_11:
        if ( (v4 & 4) != 0 )
        {
          v15 = (ConditionMask & 0x8000000000000000uLL) == 0LL
              ? BYTE2(ConditionMask)
              : RtlpVerGetConditionMask(ConditionMask, 4LL);
          if ( !(unsigned __int8)RtlpVerCompare(v15, VersionInfo->dwBuildNumber, v25[3], (unsigned int)v24, 0) )
            return -1073741735;
        }
        if ( (v4 & 8) != 0 )
        {
          v14 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8LL);
          if ( !(unsigned __int8)RtlpVerCompare(v14, VersionInfo->dwPlatformId, v25[4], (unsigned int)v24, 0) )
            return -1073741735;
        }
        if ( v4 < 0 )
        {
          v13 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
          if ( !(unsigned __int8)RtlpVerCompare(v13, VersionInfo->wProductType, BYTE2(v25[70]), (unsigned int)v24, 0) )
            return -1073741735;
        }
        return 0;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v21 = (unsigned __int8)(ConditionMask >> 2);
      else
        v21 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      LODWORD(v10) = v21;
    }
    v12 = (unsigned __int8)RtlpVerCompare(v10, VersionInfo->dwMinorVersion, v25[2], (unsigned int)v24, 1) == 0;
    v9 = v24[0];
    if ( v12 )
    {
      if ( !v24[0] )
        return -1073741735;
    }
    else
    {
LABEL_17:
      if ( !v9 )
        goto LABEL_11;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_19;
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v22 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v22 = 0;
      LODWORD(v10) = v22;
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMajor, LOWORD(v25[69]), (unsigned int)v24, 0) )
    {
      v9 = v24[0];
LABEL_19:
      if ( !v9 )
        goto LABEL_11;
LABEL_20:
      if ( (v4 & 0x10) != 0 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            v23 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v23 = 0;
          LODWORD(v10) = v23;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v10,
                                 VersionInfo->wServicePackMinor,
                                 HIWORD(v25[69]),
                                 (unsigned int)v24,
                                 1) )
          return -1073741735;
      }
      goto LABEL_11;
    }
    if ( v24[0] )
      goto LABEL_20;
    return -1073741735;
  }
  return result;
}
