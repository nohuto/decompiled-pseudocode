/*
 * XREFs of _RtlSwitchedVVI@16 @ 0x4B2B0060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpVerGetConditionMask@12 @ 0x4B2AE80E (_RtlpVerGetConditionMask@12.c)
 *     _RtlpVerCompare@20 @ 0x4B2B0391 (_RtlpVerCompare@20.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  DWORD result; // eax
  int v4; // edx
  char v5; // al
  int v6; // esi
  unsigned int v7; // eax
  char v8; // cl
  bool v9; // zf
  PRTL_OSVERSIONINFOEXW v10; // esi
  int wSuiteMask; // eax
  unsigned int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  size_t v19; // [esp-4h] [ebp-13Ch]
  unsigned int v20; // [esp+Ch] [ebp-12Ch]
  int v21; // [esp+10h] [ebp-128h]
  char v22; // [esp+17h] [ebp-121h] BYREF
  int v23; // [esp+18h] [ebp-120h] BYREF
  _DWORD v24[68]; // [esp+1Ch] [ebp-11Ch] BYREF
  unsigned __int16 v25; // [esp+12Ch] [ebp-Ch]
  unsigned __int16 v26; // [esp+12Eh] [ebp-Ah]
  unsigned __int16 v27; // [esp+130h] [ebp-8h]
  unsigned __int8 v28; // [esp+132h] [ebp-6h]

  v22 = 0;
  if ( !TypeMask )
    return -1073741811;
  LODWORD(v19) = 280;
  memset(v24, 0, v19);
  v23 = 284;
  result = SwitchedRtlGetVersion(&v23);
  if ( !result )
  {
    if ( (TypeMask & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( (_WORD)wSuiteMask )
      {
        v12 = 0;
        v21 = VersionInfo->wSuiteMask;
        v20 = 0;
        do
        {
          v13 = 1 << v12;
          if ( (wSuiteMask & (1 << v12)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            {
              v15 = RtlpVerGetConditionMask(0x40u, v4, ConditionMask, SHIDWORD(ConditionMask));
              v12 = v20;
            }
            else
            {
              v15 = 0;
            }
            v14 = v15 - 6;
            if ( v14 )
            {
              if ( v14 != 1 )
                return -1073741811;
              wSuiteMask = v21;
              if ( (v27 & (unsigned __int16)v13) != 0 )
                v22 = 1;
            }
            else
            {
              if ( (v27 & (unsigned __int16)v13) == 0 )
                return -1073741735;
              wSuiteMask = v21;
            }
          }
          v20 = ++v12;
        }
        while ( v12 < 0x10 );
        if ( RtlpVerGetConditionMask(0x40u, v4, ConditionMask, SHIDWORD(ConditionMask)) == 7 && !v22 )
          return -1073741735;
      }
    }
    v5 = 1;
    v6 = 1;
    v22 = 1;
    if ( (TypeMask & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      {
        v7 = 2;
        v8 = 0;
        do
        {
          ++v8;
          v7 >>= 1;
        }
        while ( v7 );
        v6 = (ConditionMask >> (3 * v8 - 3)) & 7;
      }
      else
      {
        v6 = (unsigned __int8)(ConditionMask >> 4);
      }
      v9 = (unsigned __int8)RtlpVerCompare(v6, VersionInfo->dwMajorVersion, v24[0], &v22, 0) == 0;
      v5 = v22;
      if ( v9 )
      {
        if ( !v22 )
          return -1073741735;
      }
      else if ( !v22 )
      {
LABEL_12:
        if ( (TypeMask & 4) == 0 )
        {
          v10 = VersionInfo;
          goto LABEL_14;
        }
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v16 = RtlpVerGetConditionMask(4u, v4, ConditionMask, SHIDWORD(ConditionMask));
        else
          v16 = BYTE2(ConditionMask);
        v10 = VersionInfo;
        if ( (unsigned __int8)RtlpVerCompare(v16, VersionInfo->dwBuildNumber, v24[2], &v22, 0) )
        {
LABEL_14:
          if ( (TypeMask & 8) != 0 )
          {
            v17 = (ConditionMask & 0x8000000000000000uLL) != 0LL
                ? RtlpVerGetConditionMask(8u, v4, ConditionMask, SHIDWORD(ConditionMask))
                : 0;
            if ( !(unsigned __int8)RtlpVerCompare(v17, v10->dwPlatformId, v24[3], &v22, 0) )
              return -1073741735;
          }
          if ( (TypeMask & 0x80u) != 0 )
          {
            v18 = (ConditionMask & 0x8000000000000000uLL) != 0LL
                ? RtlpVerGetConditionMask(0x80u, v4, ConditionMask, SHIDWORD(ConditionMask))
                : 0;
            if ( !(unsigned __int8)RtlpVerCompare(v18, v10->wProductType, v28, &v22, 0) )
              return -1073741735;
          }
          return 0;
        }
        return -1073741735;
      }
    }
    if ( (TypeMask & 1) == 0 )
      goto LABEL_21;
    if ( v6 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v6 = RtlpVerGetConditionMask(1u, v4, ConditionMask, SHIDWORD(ConditionMask));
      else
        v6 = (unsigned __int8)(ConditionMask >> 2);
    }
    v9 = (unsigned __int8)RtlpVerCompare(v6, VersionInfo->dwMinorVersion, v24[1], &v22, 1) == 0;
    v5 = v22;
    if ( v9 )
    {
      if ( !v22 )
        return -1073741735;
    }
    else
    {
LABEL_21:
      if ( !v5 )
        goto LABEL_12;
    }
    if ( (TypeMask & 0x20) != 0 )
    {
      if ( v6 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v6 = RtlpVerGetConditionMask(0x20u, v4, ConditionMask, SHIDWORD(ConditionMask));
        else
          v6 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(v6, VersionInfo->wServicePackMajor, v25, &v22, 0) )
      {
        if ( !v22 )
          return -1073741735;
        goto LABEL_24;
      }
      v5 = v22;
    }
    if ( !v5 )
      goto LABEL_12;
LABEL_24:
    if ( (TypeMask & 0x10) != 0 )
    {
      if ( v6 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v6 = RtlpVerGetConditionMask(0x10u, v4, ConditionMask, SHIDWORD(ConditionMask));
        else
          v6 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(v6, VersionInfo->wServicePackMinor, v26, &v22, 1) )
        return -1073741735;
    }
    goto LABEL_12;
  }
  return result;
}
