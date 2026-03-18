/*
 * XREFs of KeSetEventBoostPriority @ 0x140517120
 * Callers:
 *     NtSetEventBoostPriority @ 0x140951C50 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 */

char __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, v2, 0LL, 0LL, 1, 0);
}
