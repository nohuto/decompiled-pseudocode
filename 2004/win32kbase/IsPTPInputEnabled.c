/*
 * XREFs of IsPTPInputEnabled @ 0x1C0122BD8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0182138 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 IsPTPInputEnabled()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gPTPEnabled )
    return (*(_BYTE *)(&qword_1C024AFC0 + 1) & 8) != 0;
  return v0;
}
