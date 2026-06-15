/*
 * XREFs of wil::details::ThreadFailureCallbackFn__lambda_7573150cff5bc8e9ed04f58772d4e732___::NotifyFailure @ 0x1800DC590
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F60E8 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 */

char __fastcall wil::details::ThreadFailureCallbackFn__lambda_7573150cff5bc8e9ed04f58772d4e732___::NotifyFailure(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 8);
  if ( !*v2 )
  {
    *v2 = 1;
    AudioJournal::OnCreateStream(
      (AudioJournal *)a1,
      *(_DWORD *)(a2 + 4),
      **(struct CEndpointCharacteristics ***)(a1 + 16));
  }
  return 0;
}
