/*
 * XREFs of KiAbPropagateBoosts @ 0x140359140
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbDeferredProcessingWorker @ 0x140359020 (KiAbDeferredProcessingWorker.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 */

_QWORD *__fastcall KiAbPropagateBoosts(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  volatile signed __int16 *v7; // rbp
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF

  for ( result = (_QWORD *)*a1; *a1; result = (_QWORD *)*a1 )
  {
    v7 = (volatile signed __int16 *)(result - 101);
    *a1 = *result;
    *result = 1LL;
    _InterlockedOr(v8, 0);
    if ( *((_BYTE *)result - 15) )
      KiAbProcessThreadLocks((_DWORD)result - 808, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16(v7 + 434);
  }
  return result;
}
