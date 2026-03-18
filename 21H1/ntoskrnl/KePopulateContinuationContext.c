/*
 * XREFs of KePopulateContinuationContext @ 0x140329904
 * Callers:
 *     KiInitializeUserApc @ 0x140329350 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KePopulateContinuationContext(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  _R8 = a1;
  if ( (result->MiscFlags & 0x100000) != 0 )
  {
    result = (struct _KTHREAD *)(__readmsr(0x6A7u) - 8);
    __asm { wrussq  qword ptr [rax], r8 }
    __writemsr(0x6A7u, (unsigned __int64)result);
  }
  return result;
}
