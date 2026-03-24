/*
 * XREFs of VidSchiResume @ 0x1C00D0438
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00CFE88 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0090A04 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 716) )
  {
    *(_QWORD *)(a1 + 1208) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1176), 0, 0);
  }
  return result;
}
