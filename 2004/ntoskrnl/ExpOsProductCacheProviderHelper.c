/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x1407BEB34
 * Callers:
 *     ExpCloudbookHardwareLockedProvider @ 0x1407BEA20 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpCloudbookHardwareIDProvider @ 0x140949F10 (ExpCloudbookHardwareIDProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094A430 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductContentIdCacheProvider @ 0x14094A680 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x14094A6C0 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        __int64 a1,
        UNICODE_STRING *a2,
        _DWORD *a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6,
        _BYTE *a7)
{
  NTSTATUS v10; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v16 = HIDWORD(a1);
  KeyHandle = 0LL;
  ResultLength = 0;
  *a7 = 1;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140981360);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20534C53u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          *a6 = v13[2];
          if ( a3 )
            *a3 = v13[1];
          if ( a5 >= v13[2] )
          {
            if ( a4 )
              memmove(a4, v13 + 3, (unsigned int)v13[2]);
          }
          else
          {
            v10 = -1073741789;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v10;
}
