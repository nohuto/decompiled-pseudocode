/*
 * XREFs of ViIoCallbackSnapState @ 0x1409CCB94
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409C86D0 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
