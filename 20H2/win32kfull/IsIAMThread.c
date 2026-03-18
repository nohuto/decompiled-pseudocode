/*
 * XREFs of IsIAMThread @ 0x1C002CEEC
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0008410 (NtUserSetActivationFilter.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C002CE34 (IsAdaptiveQueueDetachExempted.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C007FA20 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA480 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 456);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
