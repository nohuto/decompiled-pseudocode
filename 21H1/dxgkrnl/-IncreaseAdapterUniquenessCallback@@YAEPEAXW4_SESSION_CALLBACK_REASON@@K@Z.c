/*
 * XREFs of ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0212280
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C014B81C (DxgkIncreaseSessionAdapterUniqueness.c)
 */

char __fastcall IncreaseAdapterUniquenessCallback(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 1 )
    DxgkIncreaseSessionAdapterUniqueness(a1, a2);
  return 1;
}
