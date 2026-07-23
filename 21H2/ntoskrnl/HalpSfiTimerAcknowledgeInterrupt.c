/*
 * XREFs of HalpSfiTimerAcknowledgeInterrupt @ 0x1404D5980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpSfiTimerAcknowledgeInterrupt(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    result = *(_DWORD *)(v1 + 8) & 0xFFFFFFFA | 4;
    *(_DWORD *)(v1 + 8) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
