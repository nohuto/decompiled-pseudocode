/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@VIBitmapSource@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AFC10
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010D4D0 (-QueryInterface@-$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IBitmapSource>::QueryInterface(__int64 a1, _QWORD *a2, __int64 *a3)
{
  return CMILCOMBaseT<IBitmapSource>::InternalQueryInterface((_QWORD *)(a1 - 32), a2, a3);
}
