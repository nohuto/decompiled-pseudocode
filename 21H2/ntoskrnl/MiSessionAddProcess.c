/*
 * XREFs of MiSessionAddProcess @ 0x140622AEC
 * Callers:
 *     MiMarkSessionMasterProcess @ 0x14039DFAC (MiMarkSessionMasterProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSessionAddProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1368) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x10000u);
}
