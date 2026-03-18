/*
 * XREFs of FsRtlAllocatePool @ 0x140542070
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
