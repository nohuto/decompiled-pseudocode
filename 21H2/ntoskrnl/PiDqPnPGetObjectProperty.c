/*
 * XREFs of PiDqPnPGetObjectProperty @ 0x14062CDA4
 * Callers:
 *     PiDqPropertyCallback @ 0x14062D300 (PiDqPropertyCallback.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14062DBA4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14062F90C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771334 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A43B0 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     _PnpGetGenericStoreProperty @ 0x14062CFEC (_PnpGetGenericStoreProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR pszSrc,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rsi
  const wchar_t *v9; // r12
  PVOID PoolWithTag; // rdi
  int v14; // eax
  SIZE_T v15; // rbp
  int PWSTR; // ebx
  int ObjectProperty; // eax
  void *v19; // rcx
  _DWORD v20[18]; // [rsp+60h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C8h] [rbp+20h] BYREF

  v7 = *(_OWORD *)a4;
  v8 = a7;
  v9 = pszSrc;
  v20[0] = 0;
  LODWORD(NumberOfBytes) = 512;
  *a7 = v7;
  PoolWithTag = 0LL;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(a4 + 16);
  v14 = a5;
  LODWORD(v15) = 0;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_DWORD *)v8 + 5) = v14;
  PWSTR = PnpAllocatePWSTR(v9);
  if ( PWSTR >= 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)NumberOfBytes > (unsigned int)v15 )
      {
        v15 = (unsigned int)NumberOfBytes;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x58706E50u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x58706E50u);
        if ( !PoolWithTag )
          break;
      }
      LODWORD(NumberOfBytes) = 0;
      if ( a2 )
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           a1,
                           a2,
                           a3,
                           (__int64)v9,
                           a4,
                           (__int64)v20,
                           (__int64)PoolWithTag,
                           v15,
                           (__int64)&NumberOfBytes,
                           0);
      else
        ObjectProperty = PnpGetGenericStoreProperty(
                           *(_QWORD *)&PiPnpRtlCtx,
                           a3,
                           v9,
                           a4,
                           v20,
                           PoolWithTag,
                           v15,
                           &NumberOfBytes);
      PWSTR = ObjectProperty;
      if ( ObjectProperty != -1073741789 )
        goto LABEL_9;
    }
    PWSTR = -1073741670;
LABEL_9:
    if ( PWSTR >= 0 )
    {
      *((_DWORD *)v8 + 8) = v20[0];
      *((_DWORD *)v8 + 9) = NumberOfBytes;
      *((_QWORD *)v8 + 5) = PoolWithTag;
      return (unsigned int)PWSTR;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x58706E50u);
  }
  if ( PWSTR == -1073741275 )
  {
    return 0;
  }
  else
  {
    v19 = (void *)*((_QWORD *)v8 + 3);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x58706E50u);
  }
  return (unsigned int)PWSTR;
}
