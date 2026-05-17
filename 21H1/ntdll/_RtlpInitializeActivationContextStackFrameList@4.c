/*
 * XREFs of _RtlpInitializeActivationContextStackFrameList@4 @ 0x4B2E36DD
 * Callers:
 *     _RtlpAllocateActivationContextStackFrame@12 @ 0x4B2E35DF (_RtlpAllocateActivationContextStackFrame@12.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpInitializeActivationContextStackFrameList(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  *this = 1953721414;
  this[4] = 0;
  v1 = this + 7;
  result = 32;
  do
  {
    *(v1 - 1) = 0;
    *v1 = 0;
    v1 += 12;
    *(v1 - 11) = 12;
    *(v1 - 10) = 0;
    --result;
  }
  while ( result );
  return result;
}
