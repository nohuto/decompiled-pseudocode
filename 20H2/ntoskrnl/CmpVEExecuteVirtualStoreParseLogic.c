/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x1408733F8
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x14061C220 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140203DF0 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14022A2F0 (RtlUnicodeStringCat.c)
 *     CmpUnicodeStringAppendCharacter @ 0x1405CBACC (CmpUnicodeStringAppendCharacter.c)
 *     CmpVirtualBranchIsReplicated @ 0x1406FDF6C (CmpVirtualBranchIsReplicated.c)
 *     CmpUnblockHiveWrites @ 0x1406FFA18 (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1406FFA98 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1406FFD24 (CmpBlockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  int v9; // ebx
  unsigned int v10; // edx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v18; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+B0h] [rbp+40h] BYREF

  v17 = 0LL;
  v15 = 0;
  v20 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, &v20) )
    goto LABEL_2;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 >= 0 )
  {
    v10 = a2->Length + DestinationString.Length + 2;
    if ( v10 <= 0xFFFF )
    {
      v18.MaximumLength = a2->Length + DestinationString.Length + 2;
      v18.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v10, 0x624E4D43u);
      if ( !v18.Buffer )
      {
        v9 = -1073741670;
        goto LABEL_24;
      }
      RtlUnicodeStringCopy(&v18, &DestinationString);
      CmpUnicodeStringAppendCharacter(&v18.Length);
      RtlUnicodeStringCat(&v18, a2);
      if ( (*a3 & 1) != 0 && v20 )
      {
        v9 = CmpBlockHiveWrites(0LL, 16, &v16);
        if ( v9 >= 0 )
        {
          PathByName = CmpFindPathByName(0LL, (__m128i *)&v18, 0LL, &v15, &v17);
          CmpUnblockHiveWrites(0LL, 16, v16);
          if ( PathByName )
          {
            Buffer = a4->Buffer;
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            *a4 = v18;
            RtlInitUnicodeString(&v18, 0LL);
            v9 = 260;
            goto LABEL_22;
          }
          goto LABEL_2;
        }
        v6 = v16;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) <= 0x800000 )
        {
LABEL_2:
          v9 = -1073741199;
          goto LABEL_22;
        }
        v13 = a4->Buffer;
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        *a4 = v18;
        RtlInitUnicodeString(&v18, 0LL);
        v9 = 260;
      }
      if ( v6 )
        CmpUnblockHiveWrites(0LL, 16, v6);
      goto LABEL_22;
    }
    v9 = -1073741811;
  }
LABEL_22:
  if ( v18.Buffer )
    ExFreePoolWithTag(v18.Buffer, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
