/*
 * XREFs of _RtlpIsUserCallTargetBitMapCheckFault@4 @ 0x4B2E92EB
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     <none>
 */

bool __thiscall RtlpIsUserCallTargetBitMapCheckFault(_DWORD (__stdcall *this)())
{
  return this == LdrpValidateUserCallTargetBitMapCheck;
}
