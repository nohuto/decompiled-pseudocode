/*
 * XREFs of FsRtlAllocatePool @ 0x1404EA6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(0xC000009A);
  return result;
}
