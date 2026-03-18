/*
 * XREFs of IsPTPInputEnabled @ 0x1C0120888
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017767C (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C017FD08 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C0248FC0 + 1) & 8) != 0;
  return v0;
}
