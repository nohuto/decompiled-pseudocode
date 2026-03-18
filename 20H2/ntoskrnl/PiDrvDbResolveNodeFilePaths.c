/*
 * XREFs of PiDrvDbResolveNodeFilePaths @ 0x1408BA47C
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x140328A68 (CmIsStateSeparationEnabled.c)
 *     RtlUnicodeStringPrintf @ 0x14036DE6C (RtlUnicodeStringPrintf.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     _SysCtxRegOpenKey @ 0x14066DA70 (_SysCtxRegOpenKey.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     RtlCreateUnicodeString @ 0x1406FDE90 (RtlCreateUnicodeString.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B8A34 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveNodeFilePaths(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int NodeSystemRoot; // eax
  const UNICODE_STRING *v10; // r9
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  const UNICODE_STRING *v13; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 492) & 1) == 0
    || (v6 = SysCtxRegOpenKey(0LL, a2, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle),
        v5 = v6,
        v6 == -1073741772) )
  {
    v5 = 0;
    goto LABEL_18;
  }
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 64);
    if ( (v7 & 1) == 0 && CmIsStateSeparationEnabled() )
      v4 = 3;
    if ( (v7 & 8) == 0 )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, L"\\SystemRoot") )
      {
LABEL_10:
        v5 = -1073741670;
        goto LABEL_18;
      }
LABEL_15:
      NodeSystemRoot = PiDrvDbGetNodeSystemRoot(a1, &v13);
      v10 = v13;
      if ( NodeSystemRoot < 0 )
        v10 = 0LL;
      v5 = PiDrvDbResolveFilePathKeyValues(a2, v4, &DestinationString, v10);
      goto LABEL_18;
    }
    v8 = *(unsigned __int16 *)(a1 + 18) + 28;
    if ( v8 > 0xFFFE )
    {
      v5 = -2147483643;
      goto LABEL_18;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v8;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v8);
    if ( !DestinationString.Buffer )
      goto LABEL_10;
    v5 = RtlUnicodeStringPrintf(&DestinationString, L"%ws\\%wZ", L"\\DriverStores", a1 + 16);
    if ( v5 >= 0 )
      goto LABEL_15;
  }
LABEL_18:
  RtlFreeAnsiString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
