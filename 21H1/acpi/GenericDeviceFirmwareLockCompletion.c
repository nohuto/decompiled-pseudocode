/*
 * XREFs of GenericDeviceFirmwareLockCompletion @ 0x1C004FD70
 * Callers:
 *     AcceptDeviceFirmwareLockCompletion @ 0x1C004F7D0 (AcceptDeviceFirmwareLockCompletion.c)
 * Callees:
 *     AMLIRestartContext @ 0x1C00634E0 (AMLIRestartContext.c)
 */

LONG __fastcall GenericDeviceFirmwareLockCompletion(__int64 a1, int a2)
{
  bool v2; // zf
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 56) == 0LL;
  *(_DWORD *)(a1 + 40) = a2;
  if ( v2 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 80), 0, 0);
  result = _InterlockedExchange((volatile __int32 *)(a1 + 44), 1);
  if ( (result & 1) != 0 )
    return AMLIRestartContext(*(_QWORD *)(a1 + 56));
  return result;
}
