/*
 * XREFs of USBType1ClearLeftovers @ 0x1C0005F74
 * Callers:
 *     USBType1StateChangePin @ 0x1C0006260 (USBType1StateChangePin.c)
 *     USBType1HandleUrbError @ 0x1C00327A4 (USBType1HandleUrbError.c)
 * Callees:
 *     <none>
 */

LONG __fastcall USBType1ClearLeftovers(_QWORD *a1)
{
  __int64 v1; // r8
  LONG result; // eax

  v1 = a1[19];
  *(_DWORD *)(v1 + 112) = 0;
  if ( *(_DWORD *)(v1 + 124) )
  {
    a1[10] += *(unsigned int *)(*(_QWORD *)(v1 + 136) + 36LL);
    a1[11] += *(unsigned int *)(*(_QWORD *)(v1 + 136) + 36LL);
    *(_DWORD *)(v1 + 124) = 0;
    return KeReleaseSemaphore((PRKSEMAPHORE)(v1 + 152), 0, 1, 0);
  }
  return result;
}
