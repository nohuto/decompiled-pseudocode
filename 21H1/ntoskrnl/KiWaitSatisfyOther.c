/*
 * XREFs of KiWaitSatisfyOther @ 0x1402CDA2C
 * Callers:
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     KiWaitSatisfyAny @ 0x1402CD4E0 (KiWaitSatisfyAny.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 * Callees:
 *     <none>
 */

char __fastcall KiWaitSatisfyOther(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
