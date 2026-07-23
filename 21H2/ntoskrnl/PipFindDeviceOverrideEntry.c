/*
 * XREFs of PipFindDeviceOverrideEntry @ 0x1407643BC
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1407640C0 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IopReplaceSeperatorWithPound @ 0x14076456C (IopReplaceSeperatorWithPound.c)
 *     PipCallbackHasDeviceOverrides @ 0x14089B3F8 (PipCallbackHasDeviceOverrides.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipFindDeviceOverrideEntry(_WORD *Src, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v10; // rdi
  const WCHAR *v11; // r15
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  ULONG v14; // ecx
  const UNICODE_STRING **v15; // r12
  const UNICODE_STRING *i; // r14
  __int64 v17; // rax
  HANDLE v19; // rax
  __int128 v20; // [rsp+28h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v23; // [rsp+78h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+6Fh] BYREF
  ULONG HashValue; // [rsp+100h] [rbp+7Fh] BYREF
  int v27; // [rsp+104h] [rbp+83h]

  v27 = HIDWORD(a4);
  v5 = Src;
  HashValue = 0;
  v20 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  if ( *Src )
  {
    LODWORD(v6) = 0;
    do
    {
      v7 = -1LL;
      do
        ++v7;
      while ( Src[v7] );
      v6 = (unsigned int)(v7 + v6 + 1);
      Src = &v5[v6];
    }
    while ( *Src );
    v8 = v6 + 1;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v8, 0x6E697050u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v5, 2LL * v8);
      *((_QWORD *)&v20 + 1) = v10;
      LOWORD(v20) = 2 * v8;
      WORD1(v20) = 2 * v8;
      IopReplaceSeperatorWithPound(&v20, &v20);
      v11 = v10;
      v12 = -1073741772;
      if ( *v10 )
      {
        do
        {
          RtlInitUnicodeString(&DestinationString, v11);
          v13 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          v14 = HashValue;
          v12 = -1073741772;
          if ( v13 < 0 )
            v14 = 0;
          HashValue = v14;
          v15 = (const UNICODE_STRING **)(PnpDeviceOverrideHashList + 16LL * (v14 % PnpDeviceOverrideHashListSize));
          for ( i = *v15; i != (const UNICODE_STRING *)v15; i = *(const UNICODE_STRING **)&i->Length )
          {
            if ( RtlEqualUnicodeString(&DestinationString, i + 1, 1u) )
            {
              v19 = Handle;
              if ( !Handle )
              {
                LODWORD(v20) = 8781956;
                *((_QWORD *)&v20 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
                *(_QWORD *)&ObjectAttributes.Length = 48LL;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
                *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
                Handle = 0LL;
                ObjectAttributes.RootDirectory = 0LL;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v12 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
                if ( v12 < 0 )
                  goto LABEL_17;
                v19 = Handle;
              }
              v23.RootDirectory = v19;
              *(_QWORD *)&v23.Length = 48LL;
              v23.ObjectName = &DestinationString;
              *(_QWORD *)&v23.Attributes = 576LL;
              KeyHandle = 0LL;
              *(_OWORD *)&v23.SecurityDescriptor = 0LL;
              v12 = ZwOpenKey(&KeyHandle, 0x20019u, &v23);
              if ( v12 >= 0 )
              {
                if ( (unsigned __int8)PipCallbackHasDeviceOverrides(KeyHandle, a3) )
                  goto LABEL_15;
                ZwClose(KeyHandle);
                v12 = -1073741772;
              }
              break;
            }
          }
          v17 = -1LL;
          do
            ++v17;
          while ( v11[v17] );
          v11 += v17 + 1;
        }
        while ( *v11 );
LABEL_15:
        if ( v12 >= 0 )
          ZwClose(KeyHandle);
      }
    }
    else
    {
      v12 = -1073741670;
    }
LABEL_17:
    if ( Handle )
      ZwClose(Handle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v12;
}
