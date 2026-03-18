/*
 * XREFs of sub_1C005AF90 @ 0x1C005AF90
 * Callers:
 *     sub_1C005A828 @ 0x1C005A828 (sub_1C005A828.c)
 *     sub_1C005B07C @ 0x1C005B07C (sub_1C005B07C.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C005AF90(__int64 a1, void *a2, const WCHAR *a3, char *a4)
{
  __m128 *PoolWithTag; // rax
  __m128 *v7; // rbx
  NTSTATUS v8; // edi
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]

  v14 = HIDWORD(a1);
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, 0x50uLL);
    v8 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, v7, 0x50u, &ResultLength);
    if ( v8 >= 0 )
    {
      v9 = v7->m128_u32[2];
      v10 = 68LL;
      if ( v9 <= 0x44 )
        v10 = v9;
      sub_1C001D080(a4, &v7->m128_i8[12], v10);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
