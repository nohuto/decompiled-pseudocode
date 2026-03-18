/*
 * XREFs of sub_1C005DBD8 @ 0x1C005DBD8
 * Callers:
 *     sub_1C005CD1C @ 0x1C005CD1C (sub_1C005CD1C.c)
 *     sub_1C005D550 @ 0x1C005D550 (sub_1C005D550.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 */

__int64 __fastcall sub_1C005DBD8(HANDLE KeyHandle, const WCHAR *a2, PVOID *a3)
{
  char *PoolWithTag; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  char *v8; // rax
  PVOID v9; // rcx
  unsigned int v10; // ebp
  PVOID v11; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  ResultLength = 0;
  *a3 = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x55445246u);
  if ( !PoolWithTag )
  {
LABEL_2:
    v6 = -1073741670;
LABEL_13:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    return (unsigned int)v6;
  }
  v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength);
  v6 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)PoolWithTag + 2);
      v11 = ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x55445246u);
      *a3 = v11;
      if ( !v11 )
      {
        v6 = -1073741670;
        goto LABEL_12;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      v8 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, ResultLength, 0x55445246u);
      PoolWithTag = v8;
      if ( !v8 )
        goto LABEL_2;
      v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
      if ( v6 < 0 )
        goto LABEL_12;
      v9 = *a3;
      if ( v10 == *((_DWORD *)PoolWithTag + 2) )
        break;
      ExFreePoolWithTag(v9, 0);
      *a3 = 0LL;
    }
    sub_1C001D080((char *)v9, PoolWithTag + 12, v10);
  }
LABEL_12:
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 < 0 )
    goto LABEL_13;
  return (unsigned int)v6;
}
