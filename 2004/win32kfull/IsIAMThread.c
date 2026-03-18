/*
 * XREFs of IsIAMThread @ 0x1C0030384
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0008420 (NtUserSetActivationFilter.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00302CC (IsAdaptiveQueueDetachExempted.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EB0F0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 448);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
