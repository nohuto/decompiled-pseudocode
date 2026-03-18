/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00139F0
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (*(_DWORD *)(112LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 48) + 64) & 2) == 0 )
  {
    if ( !(_BYTE)KdDebuggerEnabled )
      return 0;
    if ( !*(_BYTE *)(a1 + 56) )
      return 0;
    v2 = *(_QWORD *)(a1 + 8);
    if ( !_bittest64((const signed __int64 *)(v2 + 336), 0x33u)
      || (unsigned int)XilRegister_ReadUlong(
                         *(_QWORD *)(v2 + 88),
                         (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 72LL) + 36LL)) >> 24 != a2 )
    {
      return 0;
    }
  }
  return result;
}
