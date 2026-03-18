/*
 * XREFs of CmpLoadLayerVersions @ 0x140836CC8
 * Callers:
 *     CmpLoadSystemVersionData @ 0x140836AA4 (CmpLoadSystemVersionData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLoadLayerVersion @ 0x140836EAC (CmpLoadLayerVersion.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmpLoadLayerVersions(
        void *Base,
        unsigned int *a2,
        __int64 a3,
        void *a4,
        UNICODE_STRING *a5,
        unsigned int a6)
{
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG i; // r15d
  NTSTATUS v12; // eax
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  unsigned int v15; // eax
  int v16; // eax
  __int64 j; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyInformation[64]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v20 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  *a2 = 0;
  ObjectAttributes.RootDirectory = a4;
  ObjectAttributes.ObjectName = a5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  v10 = result;
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v15 = *a2;
      if ( *a2 >= 0x10 )
        goto LABEL_12;
      v12 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength);
      v10 = v12;
      if ( v12 == -2147483622 )
      {
        v15 = *a2;
        v10 = 0;
LABEL_12:
        qsort(Base, v15, 8uLL, CmpCompareLayerDescriptors);
        goto LABEL_13;
      }
      if ( v12 < 0 )
        goto LABEL_13;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x328uLL, 0x64764D43u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 0x328uLL);
      LOWORD(v20) = KeyInformation[3];
      WORD1(v20) = LOWORD(KeyInformation[3]) + 2;
      *((_QWORD *)&v20 + 1) = &KeyInformation[4];
      v10 = CmpLoadLayerVersion(v14, KeyHandle, &v20, a6);
      if ( v10 < 0 )
        ExFreePoolWithTag(v14, 0x64764D43u);
      else
        *((_QWORD *)Base + (*a2)++) = v14;
    }
    v10 = -1073741670;
LABEL_13:
    ZwClose(KeyHandle);
    if ( *a2 )
    {
      if ( v10 < 0 )
      {
        v16 = *a2 - 1;
        for ( j = v16; j >= 0; *((_QWORD *)Base + j--) = 0LL )
          ExFreePoolWithTag(*((PVOID *)Base + j), 0x64764D43u);
        *a2 = 0;
      }
      return v10;
    }
    else
    {
      return -2147483614;
    }
  }
  return result;
}
