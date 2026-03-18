/*
 * XREFs of FsRtlAllocatePool @ 0x1404EACF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(0xC000009A);
  return result;
}
