/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x14076E5C4
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x14076E4F0 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     PnpGetRegistryDword @ 0x1403B74FC (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     VfTargetDriversIsEnabled @ 0x1409D7F30 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  HANDLE v5; // rdi
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v4 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v2 + 24), 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *((_QWORD *)&v7 + 1) = L"Parameters";
    LODWORD(v7) = 1441812;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      LODWORD(Handle) = 0;
      if ( (int)PnpGetRegistryDword(KeyHandle, (__int64)L"DmaRemappingCompatible", &Handle) >= 0 )
      {
        if ( (_DWORD)Handle )
        {
          if ( (_DWORD)Handle == 1 )
          {
            v3 = 2;
          }
          else if ( (_DWORD)Handle == 2 )
          {
            v3 = 3;
            if ( (unsigned int)VfIsVerifierEnabled() )
            {
              if ( (MmVerifierData & 0x80u) != 0 && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) )
                v3 = 2;
            }
          }
        }
        else
        {
          v3 = 1;
        }
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v3;
}
