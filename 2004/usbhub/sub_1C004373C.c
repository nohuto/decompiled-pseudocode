/*
 * XREFs of sub_1C004373C @ 0x1C004373C
 * Callers:
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C004373C(__int64 a1, struct _UNICODE_STRING *a2, ULONG a3)
{
  __m128 *PoolWithTag; // rax
  __m128 *v6; // rdi
  __int128 v7; // xmm1
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  __m128 SourceString[4]; // [rsp+50h] [rbp-68h] BYREF

  v11 = xmmword_1C0062F08;
  v12 = xmmword_1C0062F18;
  DestinationString = 0LL;
  sub_1C001D340(SourceString, 0, 0x40uLL);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0x60uLL, 0x42554855u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340(PoolWithTag, 0, 0x60uLL);
  v7 = v12;
  *v6 = (__m128)v11;
  v6[1] = (__m128)v7;
  RtlInitUnicodeString(a2, (PCWSTR)v6);
  a2->MaximumLength = 96;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)SourceString);
  DestinationString.MaximumLength = 64;
  appended = RtlIntegerToUnicodeString(a3, 0xAu, &DestinationString);
  if ( appended >= 0 )
    appended = RtlAppendUnicodeStringToString(a2, &DestinationString);
  if ( (appended & 0xC0000000) == 0xC0000000 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)appended;
}
