/*
 * XREFs of PspSetContextState @ 0x14090BDC4
 * Callers:
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlCopyContext @ 0x1406AD83C (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, _CONTEXT *a2)
{
  _CONTEXT *v4; // rsi
  int v5; // ebx
  ULONG ContextFlags; // edx
  __int64 result; // rax
  ULONG ContextLength; // [rsp+40h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+10h] BYREF

  ContextLength = 0;
  v4 = *(_CONTEXT **)(a1 + 1560);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v5 + 0x100000, &ContextLength);
    memset(v4, 0, ContextLength);
    RtlInitializeExtendedContext(v4, v5 + 0x100000, &ContextEx);
    v4->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  ContextFlags = a2->ContextFlags;
  if ( (ContextFlags & 0x100040) == 0x100040 )
  {
    v4->ContextFlags |= 0x100040u;
    ContextFlags = a2->ContextFlags;
  }
  RtlCopyContext(v4, ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    ContextLength = _mm_getcsr();
    a2->FltSave.MxCsr = ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}
