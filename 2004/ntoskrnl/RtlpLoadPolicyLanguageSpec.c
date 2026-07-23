/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x14097D810
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x14078A570 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memset @ 0x14040A280 (memset.c)
 *     LdrpQueryValueKey @ 0x14078A1BC (LdrpQueryValueKey.c)
 *     RtlpMuiRegGetOrAddString @ 0x14078AC34 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x14078AE70 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14097DF48 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  void *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // r14d
  PVOID PoolWithTag; // rax
  int InstalledLanguageIndex; // ebx
  unsigned __int16 v14; // cx
  __int16 v16[2]; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+34h] [rbp-1Ch] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-14h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v20; // [rsp+88h] [rbp+38h] BYREF

  Lcid = 0;
  v20 = 0;
  v16[0] = -1;
  v8 = 0LL;
  DestinationString = 0LL;
  if ( a2 && KeyHandle )
  {
    v9 = 1;
    NumberOfBytes = 0x100000000LL;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v10 = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&NumberOfBytes + 1, 0LL, (ULONG *)&NumberOfBytes);
    if ( !(_DWORD)NumberOfBytes || v10 == -1073741772 )
      return (unsigned int)-1073741823;
    v11 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72746C6Du);
    v8 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v11);
    if ( !v8 )
    {
      InstalledLanguageIndex = -1073741801;
      goto LABEL_23;
    }
    InstalledLanguageIndex = LdrpQueryValueKey(
                               KeyHandle,
                               &DestinationString,
                               (_DWORD *)&NumberOfBytes + 1,
                               v8,
                               (ULONG *)&NumberOfBytes);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( HIDWORD(NumberOfBytes) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)v8), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        v14 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_16;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, (__int16 *)&v20);
        if ( InstalledLanguageIndex >= 0 )
        {
          v14 = v20;
          v9 = 3;
LABEL_16:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v9, v14, v16);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v16[0];
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
  }
  else
  {
    InstalledLanguageIndex = -1073741811;
  }
LABEL_23:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)InstalledLanguageIndex;
}
