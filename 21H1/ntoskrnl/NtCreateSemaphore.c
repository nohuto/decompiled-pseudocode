/*
 * XREFs of NtCreateSemaphore @ 0x140706360
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x140355510 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateSemaphore(unsigned __int64 a1, ACCESS_MASK a2, __int64 a3, LONG a4, int Limit)
{
  _QWORD *v7; // rdi
  char PreviousMode; // si
  int inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF

  v7 = (_QWORD *)a1;
  v13 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  inserted = ObCreateObjectEx(PreviousMode, ExSemaphoreObjectType, a3, PreviousMode, v11, 32, 0, 0, &Semaphore, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, a4, Limit);
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)Semaphore, 0LL, a2, 0, 0, 0LL, &v13);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v7 = v13;
  }
  return (unsigned int)inserted;
}
