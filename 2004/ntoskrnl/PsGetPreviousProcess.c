/*
 * XREFs of PsGetPreviousProcess @ 0x14090B378
 * Callers:
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessListShared @ 0x1402CC9C0 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14057B950 (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetPreviousProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v3; // rbp
  int v4; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  PspLockProcessListShared((__int64)CurrentThread);
  v5 = (__int64 *)qword_140C1DF68;
  if ( Object )
    v5 = (__int64 *)Object[138];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v4 = 1;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
