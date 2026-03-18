/*
 * XREFs of ProcessCompletionQueues @ 0x1C001B1BC
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0009820 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeMaskInterrupt @ 0x1C0018D8C (NVMeMaskInterrupt.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  char v4; // di
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v8; // r10
  unsigned int i; // esi
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // rcx

  if ( *(_BYTE *)(a1 + 16) || a3 || (v4 = 0, (*(_DWORD *)(a1 + 108) & 1) != 0) )
    v4 = 1;
  if ( a2 == 0xFFFF || *(_WORD *)(a1 + 248) <= 1u )
  {
    result = *(_QWORD *)(a1 + 424);
    if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 594) + 14) & 1) != *(_WORD *)(a1 + 596) )
    {
      NVMeMaskInterrupt(a1, *(_WORD *)(a1 + 592));
      if ( v4 )
        result = NVMeCompletionDpcRoutine(v8 + 24, a1, v8, 0LL);
      else
        result = StorPortNotification(4098LL, a1, v8 + 24);
    }
    for ( i = 0; ; ++i )
    {
      v12 = *(_QWORD *)(a1 + 776);
      if ( !v12 )
        break;
      result = *(unsigned __int16 *)(a1 + 282);
      if ( i >= (unsigned int)result )
        break;
      v10 = v12 + 344LL * i;
      result = *(_QWORD *)v10;
      if ( (*(_WORD *)(*(_QWORD *)v10 + 16LL * *(unsigned __int16 *)(v10 + 170) + 14) & 1) != *(_WORD *)(v10 + 172) )
      {
        NVMeMaskInterrupt(a1, *(_WORD *)(v10 + 168));
        if ( v4 )
          result = NVMeCompletionDpcRoutine(v11 + 24, a1, v11, 0LL);
        else
          result = StorPortNotification(4098LL, a1, v11 + 24);
      }
    }
  }
  else
  {
    if ( a2 )
      v5 = 344LL * a2 + *(_QWORD *)(a1 + 776) - 344LL;
    else
      v5 = a1 + 424;
    NVMeMaskInterrupt(a1, *(_WORD *)(v5 + 168));
    if ( v4 )
      return NVMeCompletionDpcRoutine(v6 + 24, a1, v6, 0LL);
    else
      return StorPortNotification(4098LL, a1, v6 + 24);
  }
  return result;
}
