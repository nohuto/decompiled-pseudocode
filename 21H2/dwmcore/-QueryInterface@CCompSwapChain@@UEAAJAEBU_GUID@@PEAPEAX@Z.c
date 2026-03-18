/*
 * XREFs of ?QueryInterface@CCompSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028F604
 * Callers:
 *     ?QueryInterface@CCompSwapChain@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180109630 (-QueryInterface@CCompSwapChain@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::QueryInterface(CCompSwapChain *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ICompositionSwapChain>::InternalQueryInterface((_QWORD *)this - 49, a2, (__int64 *)a3);
}
