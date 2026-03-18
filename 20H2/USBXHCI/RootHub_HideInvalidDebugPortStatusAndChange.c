/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0013F4C
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v3 + 336) & 0x8000000000000LL) != 0
        && (unsigned int)XilRegister_ReadUlong(
                           *(_QWORD *)(v3 + 88),
                           (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 72LL) + 36LL)) >> 24 == a2 )
      {
        return 1;
      }
    }
  }
  return result;
}
