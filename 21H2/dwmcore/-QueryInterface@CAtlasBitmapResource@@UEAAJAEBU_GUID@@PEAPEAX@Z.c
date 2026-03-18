/*
 * XREFs of ?QueryInterface@CAtlasBitmapResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025B2A4
 * Callers:
 *     ?QueryInterface@CAtlasBitmapResource@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107DB0 (-QueryInterface@CAtlasBitmapResource@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::QueryInterface(CAtlasBitmapResource *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapResource>::InternalQueryInterface((_QWORD *)this - 10, a2, (__int64 *)a3);
}
