/*
 * XREFs of KePopulateContinuationContext @ 0x140294A38
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14029A86C (KiInitializeUserApc.c)
 *     PspInitializeThunkContext @ 0x140702CA4 (PspInitializeThunkContext.c)
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
