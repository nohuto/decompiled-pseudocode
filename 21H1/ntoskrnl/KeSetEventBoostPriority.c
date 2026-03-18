/*
 * XREFs of KeSetEventBoostPriority @ 0x1405131A0
 * Callers:
 *     NtSetEventBoostPriority @ 0x14094AAF0 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 */

char __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, (__int64)v2, 0LL, 0LL, 1, 0);
}
