/*
 * XREFs of _SwitchedRtlGetVersion@4 @ 0x4B2B0445
 * Callers:
 *     _RtlSwitchedVVI@16 @ 0x4B2B0060 (_RtlSwitchedVVI@16.c)
 * Callees:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlGetReturnAddressHijackTarget@0 @ 0x4B2B0650 (_RtlGetReturnAddressHijackTarget@0.c)
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __thiscall SwitchedRtlGetVersion(_DWORD *this)
{
  struct _PEB *v2; // ecx
  int (__thiscall *v3)(_DWORD); // ebx
  unsigned int OSPlatformId; // eax
  int v5; // edi
  int ReturnAddressHijackTarget; // eax
  int v7; // edi
  struct _PEB *v8; // edi
  wchar_t *Buffer; // eax
  UNICODE_STRING DestinationString; // [esp+Ch] [ebp-1Ch] BYREF
  int v12; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+18h] [ebp-10h] BYREF
  char v14[4]; // [esp+1Ch] [ebp-Ch] BYREF
  struct _PEB *v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h] BYREF

  v2 = NtCurrentPeb();
  v3 = (int (__thiscall *)(_DWORD))dword_4B3A6630;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v16 = 0;
  this[1] = v2->OSMajorVersion;
  this[2] = v2->OSMinorVersion;
  this[3] = v2->OSBuildNumber;
  OSPlatformId = v2->OSPlatformId;
  v15 = v2;
  this[4] = OSPlatformId;
  v5 = 0;
  if ( v3
    || (v3 = (int (__thiscall *)(_DWORD))SbSelectProcedure(-1414812757, 0, "kLsE", 0), (dword_4B3A6630 = (int)v3) != 0) )
  {
    if ( (char *)v3 == (char *)RtlGetReturnAddressHijackTarget )
      ReturnAddressHijackTarget = RtlGetReturnAddressHijackTarget();
    else
      ReturnAddressHijackTarget = v3(v3);
    v5 = ReturnAddressHijackTarget;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    this[2] = 2;
    this[3] = 9200;
LABEL_22:
    this[1] = 6;
    goto LABEL_7;
  }
  if ( v7 == 1 )
  {
    this[2] = 3;
    this[3] = 9600;
    goto LABEL_22;
  }
LABEL_7:
  v8 = v15;
  Buffer = v15->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(v15->CSDVersion.Buffer) < 0 )
    *((_WORD *)this + 10) = 0;
  if ( *this == 284 || *this == 292 )
  {
    *((_WORD *)this + 138) = HIBYTE(v8->OSCSDVersion);
    *((_WORD *)this + 139) = (unsigned __int8)v8->OSCSDVersion;
    *((_WORD *)this + 140) = RtlGetSuiteMask();
    if ( *this == 292 )
      this[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)this + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(v14) )
      *((_BYTE *)this + 282) = v14[0];
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( (int)NtQueryLicenseValue(&DestinationString, &v13, &v16, 4, &v12) >= 0 && (v16 != 1 || v13 != 4 || v12 != 4) )
    {
      *((_WORD *)this + 140) &= ~0x10u;
      if ( *this == 292 )
        this[71] &= 0x1FFEFu;
    }
  }
  return 0;
}
