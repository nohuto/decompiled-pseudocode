/*
 * XREFs of NdisSetThreadObjectCompartmentScope @ 0x1C00F89C0
 * Callers:
 *     ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00090F0 (-ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisCmSetThreadState @ 0x1C0009150 (ndisCmSetThreadState.c)
 */

__int64 __fastcall NdisSetThreadObjectCompartmentScope(struct _KTHREAD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ndisCmSetThreadState(a1, 0LL, &v3);
}
