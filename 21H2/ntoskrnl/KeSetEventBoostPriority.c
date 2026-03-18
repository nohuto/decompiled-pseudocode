/*
 * XREFs of KeSetEventBoostPriority @ 0x14056EA10
 * Callers:
 *     NtSetEventBoostPriority @ 0x1409FB810 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 */

char __fastcall KeSetEventBoostPriority(volatile signed __int32 *a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, (__int64)v2, 0LL, 0LL, 1, 0);
}
