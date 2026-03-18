/*
 * XREFs of ExpWnfPopulateStateData @ 0x14067023C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpWnfComposeValueName @ 0x14075A480 (ExpWnfComposeValueName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  unsigned __int64 v2; // rcx
  ULONG v4; // ebp
  SIZE_T v5; // rdx
  _DWORD *PoolWithTag; // rbx
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct _EX_RUNDOWN_REF *v11; // rdi
  unsigned __int64 ExtensionTable; // rax
  unsigned int v13; // eax
  int v14; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  char v18; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( ((v2 >> 6) & 0xF) == 5 )
  {
    v11 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
    v17 = v2 ^ 0x41C64E6DA3BC0074LL;
    ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
    if ( ExtensionTable )
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall *)(int, int, int, int, void *, size_t), __int64))(ExtensionTable + 120))(
              &v17,
              ExpWnfPopulateStateDataRemoteCallback,
              a1);
      ExReleaseExtensionTable(v11);
      if ( v14 != -1073741822 )
      {
        if ( v14 < 0 )
          return (unsigned int)v14;
        return 0LL;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = v4 + 16;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x20666E57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v7 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v18;
    ExpWnfComposeValueName(v7, &ValueName);
    ResultLength = v4 + 16;
    v8 = ZwQueryValueKey(
           *(HANDLE *)(a1 + 104),
           &ValueName,
           KeyValuePartialInformation,
           PoolWithTag,
           v4 + 16,
           &ResultLength);
    v9 = v8;
    if ( v8 == -1073741772 )
    {
      *((_QWORD *)PoolWithTag + 1) = 0LL;
LABEL_9:
      *PoolWithTag = 1050884;
      v10 = PoolWithTag[3];
      PoolWithTag[1] = v4;
      *(_DWORD *)(a1 + 96) = v10;
      *(_QWORD *)(a1 + 88) = PoolWithTag;
      return 0LL;
    }
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
    v5 = ResultLength;
    v4 = ResultLength - 16;
  }
  if ( v8 >= 0 )
  {
    if ( PoolWithTag[1] == 3 )
    {
      v13 = PoolWithTag[2];
      if ( v13 >= 4 )
      {
        PoolWithTag[2] = v13 - 4;
        goto LABEL_9;
      }
    }
    v9 = -1073741823;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  return v9;
}
