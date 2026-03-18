/*
 * XREFs of PopAdjustHiberFile @ 0x140772D68
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140772E5C (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x140789A28 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopAdjustHiberFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v4 = 0LL;
  v3 = 0LL;
  LOBYTE(v2) = 0;
  PopCalculateHiberFileSize(&v3, &v2);
  result = PopResizeHiberFile(v3, &v4, 0LL);
  if ( (int)result >= 0 )
    byte_140C23EF6 = v2;
  return result;
}
