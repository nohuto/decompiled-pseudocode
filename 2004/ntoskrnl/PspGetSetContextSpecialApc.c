/*
 * XREFs of PspGetSetContextSpecialApc @ 0x1403FEE50
 * Callers:
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 */

char __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  char result; // al
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v8);
  if ( result )
    _fxrstor((void *)(v4 + 256));
  if ( v8[0] )
    return KeSignalGate(v8[0], 1LL, v6, v7);
  return result;
}
