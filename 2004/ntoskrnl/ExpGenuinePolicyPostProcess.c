/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x14094A430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407BEB34 (ExpOsProductCacheProviderHelper.c)
 *     sub_140949EDC @ 0x140949EDC (sub_140949EDC.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v9; // ebx
  void *v10; // r14
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ebx
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[4]; // [rsp+40h] [rbp-40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+44h] [rbp-3Ch] BYREF
  int v20; // [rsp+4Ch] [rbp-34h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v22; // [rsp+58h] [rbp-28h]
  __int128 v23; // [rsp+60h] [rbp-20h]

  v22 = a5;
  v20 = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  ResultDataSize = 4;
  v23 = 0LL;
  NumberOfBytes = 0LL;
  if ( *a1 )
  {
    v9 = sub_140949EDC(a2, a3, a4, a5, 2);
    *a6 = 1;
    return (unsigned int)v9;
  }
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v11 = *(_BYTE *)a3 == 1;
    }
    else
    {
      if ( a4 != 2 )
      {
        if ( *a3 == 1 )
          return (unsigned int)v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return (unsigned int)v9;
  }
LABEL_11:
  v9 = ZwQueryLicenseValue((PUNICODE_STRING)&stru_140980C28, 0LL, (char *)&NumberOfBytes + 4, 4u, &ResultDataSize);
  if ( v9 < 0 || HIDWORD(NumberOfBytes) != 1 )
  {
    v9 = qword_140D2D438 ? qword_140D2D438(&v20) : -1073741637;
    if ( v9 >= 0 )
    {
      if ( qword_140D2D3F8 )
      {
        v9 = ExpOsProductCacheProviderHelper(v12, (UNICODE_STRING *)&qword_1409803B0, 0LL, 0LL, 0, &NumberOfBytes, v18);
        if ( v9 == -1073741789 )
        {
          v13 = NumberOfBytes;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
          v10 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          v9 = ExpOsProductCacheProviderHelper(
                 v15,
                 (UNICODE_STRING *)&qword_1409803B0,
                 0LL,
                 PoolWithTag,
                 v13,
                 &NumberOfBytes,
                 v18);
        }
        if ( v9 < 0 )
          goto LABEL_32;
        v16 = qword_140D2D3F8(3LL, v10, 0LL);
        v9 = v16;
        if ( v16 >= 0 && (v23 & 0x40) != 0 || v16 == -1073741198 )
        {
          v9 = 0;
          goto LABEL_30;
        }
      }
      else
      {
        v9 = -1073741637;
      }
      if ( v9 < 0 )
      {
LABEL_32:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        return (unsigned int)v9;
      }
LABEL_30:
      if ( !v20 )
      {
        v9 = sub_140949EDC(a2, a3, a4, v22, 2);
        *a6 = 1;
      }
      goto LABEL_32;
    }
  }
  return (unsigned int)v9;
}
