/*
 * XREFs of IsPTPInputEnabled @ 0x1C0128BB8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017F7AC (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0187E38 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C0250FC0 + 1) & 8) != 0;
  return v0;
}
