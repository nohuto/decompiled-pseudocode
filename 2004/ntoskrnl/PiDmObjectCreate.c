/*
 * XREFs of PiDmObjectCreate @ 0x140735CE8
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x1407A46B4 (PiDmObjectManagerPopulate.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     RtlHashUnicodeString @ 0x1405DA5F0 (RtlHashUnicodeString.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405DA8EC (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1405DA93C (PiDmGetCachedKeyIndex.c)
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406BEAE0 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpValidateObjectName @ 0x14070506C (_PnpValidateObjectName.c)
 *     PiDmCacheDataEncode @ 0x1407368A0 (PiDmCacheDataEncode.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDmObjectCreate(unsigned int a1, const wchar_t *a2, _QWORD *a3)
{
  __int64 v5; // r13
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rdi
  WCHAR **v9; // rsi
  __int64 v10; // rcx
  signed int PWSTR; // ebx
  WCHAR *v12; // rdx
  WCHAR *v13; // r9
  wchar_t *v14; // r9
  wchar_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r14d
  __int64 *v21; // rsi
  DEVPROPKEY **v22; // r12
  unsigned int CachedKeyIndex; // eax
  wchar_t *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v28; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  char v31; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  v28 = 0LL;
  v27 = 0;
  v31 = 0;
  PiDmGetCacheKeys(a1, &v28, &v27);
  v5 = v27;
  v6 = 24 * v27 + 112;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x5A706E50u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  *(_QWORD *)v8 = 0LL;
  v9 = (WCHAR **)(v8 + 16);
  *((_DWORD *)v8 + 2) = 1;
  *((_DWORD *)v8 + 7) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)v8 + 2);
  if ( PWSTR < 0 )
    goto LABEL_40;
  v12 = *v9;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v10, v12, 0);
    if ( PWSTR < 0 )
      goto LABEL_40;
    v13 = *v9;
    PWSTR = 0;
    String = 0LL;
    v14 = v13 + 4;
    if ( v14 )
    {
      v15 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      goto LABEL_9;
    }
  }
  else
  {
    PWSTR = PnpValidateObjectName(v10, (__int64)v12, a1);
    if ( PWSTR < 0 )
      goto LABEL_40;
    v14 = *v9;
    PWSTR = 0;
    String = 0LL;
    if ( v14 )
    {
      v25 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v25 )
          break;
        ++v25;
        --v16;
      }
      while ( v16 );
LABEL_9:
      v17 = (0x7FFF - v16) & -(__int64)(v16 != 0);
      PWSTR = v16 == 0 ? 0xC000000D : 0;
      if ( v16 )
      {
        String.Buffer = v14;
        String.Length = 2 * v17;
        String.MaximumLength = 2 * v17 + 2;
      }
    }
  }
  if ( PWSTR < 0 )
    goto LABEL_40;
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)v8 + 6);
  if ( a1 == 1 )
  {
    v26 = v8 + 88;
    goto LABEL_35;
  }
  if ( a1 == 2 || a1 == 4 )
  {
    v26 = v8 + 40;
LABEL_35:
    *v26 = v26;
    v26[1] = v26;
    goto LABEL_16;
  }
  if ( a1 - 5 < 2 )
  {
    *((_QWORD *)v8 + 6) = v8 + 40;
    *((_QWORD *)v8 + 5) = v8 + 40;
    v26 = v8 + 64;
    goto LABEL_35;
  }
LABEL_16:
  if ( (_DWORD)v5 )
  {
    v18 = v8 + 112;
    v19 = v5;
    do
    {
      *v18 = 1;
      v18 += 6;
      --v19;
    }
    while ( v19 );
  }
  v20 = 0;
  v21 = (__int64 *)&off_140001478;
  v22 = v28;
  while ( a1 != *((_DWORD *)v21 - 2) )
  {
LABEL_21:
    ++v20;
    v21 += 7;
    if ( v20 >= 3 )
      goto LABEL_22;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v22, v5, *v21);
  if ( CachedKeyIndex < (unsigned int)v5 )
  {
    PWSTR = PiDmCacheDataEncode(
              17LL,
              &v31,
              1LL,
              LODWORD(v22[3 * CachedKeyIndex + 1]),
              HIDWORD(v22[3 * CachedKeyIndex + 1]),
              &v8[24 * CachedKeyIndex + 112]);
    if ( PWSTR < 0 )
      goto LABEL_40;
    goto LABEL_21;
  }
  PWSTR = -1073741595;
LABEL_22:
  if ( PWSTR < 0 )
  {
LABEL_40:
    PiDmObjectRelease((unsigned int *)v8);
    return (unsigned int)PWSTR;
  }
  *a3 = v8;
  return (unsigned int)PWSTR;
}
