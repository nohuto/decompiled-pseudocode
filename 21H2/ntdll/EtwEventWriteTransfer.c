/*
 * XREFs of EtwEventWriteTransfer @ 0x180050340
 * Callers:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEEC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteTransfer(int a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, a3, a4, a5, a6);
}
