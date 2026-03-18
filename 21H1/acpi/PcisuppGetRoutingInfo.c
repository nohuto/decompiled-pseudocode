/*
 * XREFs of PcisuppGetRoutingInfo @ 0x1C0094A60
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     OSGetRegistryValue @ 0x1C0094BF4 (OSGetRegistryValue.c)
 *     IrqPolicyGetSubKey @ 0x1C0094CE8 (IrqPolicyGetSubKey.c)
 *     LinkNodeFindByName @ 0x1C00B64B8 (LinkNodeFindByName.c)
 */

__int64 __fastcall PcisuppGetRoutingInfo(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  int v4; // edi
  ULONG ResultLength; // [rsp+38h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  __int128 v7; // [rsp+48h] [rbp-71h]
  __int64 v8; // [rsp+58h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp-49h] BYREF
  int v11; // [rsp+74h] [rbp-45h]
  unsigned int v12; // [rsp+78h] [rbp-41h]
  _BYTE v13[116]; // [rsp+7Ch] [rbp-3Dh] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    if ( (int)OSGetRegistryValue(KeyHandle) >= 0 )
    {
      if ( MEMORY[4] && MEMORY[0] == 4 )
        BYTE12(v7) = MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    RtlInitUnicodeString(&DestinationString, L"LinkNode");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x78u,
           &ResultLength) >= 0
      && v11 == 3
      && ResultLength < 0x78
      && v12 + 12 < 0x78 )
    {
      if ( v12 > 0x6B )
      {
        v4 = -1073741789;
        goto LABEL_13;
      }
      v13[v12] = 0;
      v4 = LinkNodeFindByName(v13, &v8);
      if ( v4 < 0 )
        goto LABEL_13;
      DWORD2(v7) = 0;
      *(_QWORD *)&v7 = v8;
    }
    else
    {
      *(_QWORD *)&v7 = 0LL;
      v4 = OSGetRegistryValue(KeyHandle);
      if ( v4 < 0 )
      {
LABEL_13:
        ZwClose(KeyHandle);
        return (unsigned int)v4;
      }
      if ( MEMORY[4] )
      {
        if ( MEMORY[0] == 4 )
          DWORD2(v7) = MEMORY[8];
      }
    }
    *a2 = v7;
    goto LABEL_13;
  }
  return result;
}
