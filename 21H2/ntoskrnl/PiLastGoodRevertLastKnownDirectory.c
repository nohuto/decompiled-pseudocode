/*
 * XREFs of PiLastGoodRevertLastKnownDirectory @ 0x140A918F0
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140A6FF54 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwDeleteFile @ 0x1403FBFE0 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopFileUtilClearAttributes @ 0x1408B447C (IopFileUtilClearAttributes.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140A92440 (IopFileUtilWalkDirectoryTreeTopDown.c)
 */

void __fastcall PiLastGoodRevertLastKnownDirectory(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  _WORD *PoolWithTag; // rbx
  __int64 v6; // r8
  int v7; // edi
  ULONG i; // edx
  unsigned int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[544]; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Destination = 0LL;
  Source = 0LL;
  memset(&v16, 0, sizeof(v16));
  memset(v18, 0, 0x218uLL);
  ResultLength = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x21CuLL, 0x674C7050u);
  if ( PoolWithTag )
  {
    IopFileUtilWalkDirectoryTreeTopDown(a1, v4, v6, a1);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      v7 = 1;
      for ( i = 0;
            ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, PoolWithTag, 0x21Cu, &ResultLength) >= 0;
            i = v7++ )
      {
        if ( ResultLength
          && *((_DWORD *)PoolWithTag + 1) == 4
          && *((_DWORD *)PoolWithTag + 3) == 4
          && (unsigned __int8)*(_DWORD *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2)) == 1 )
        {
          *(_DWORD *)&Destination.Length = 35127296;
          Destination.Buffer = (wchar_t *)v18;
          Source.Buffer = PoolWithTag + 10;
          Source.Length = PoolWithTag[8];
          Source.MaximumLength = Source.Length;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          v9 = Destination.Length >> 1;
          if ( v9 > 0xD )
          {
            v10 = &v18[26];
            v11 = v9 - 13;
            do
            {
              if ( *v10 == 47 )
                *v10 = 92;
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          IopFileUtilClearAttributes(&Destination);
          v16.Length = 48;
          v16.ObjectName = &Destination;
          v16.RootDirectory = 0LL;
          *(_OWORD *)&v16.SecurityDescriptor = 0LL;
          v16.Attributes = 576;
          ZwDeleteFile(&v16);
        }
      }
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0x674C7050u);
  }
}
