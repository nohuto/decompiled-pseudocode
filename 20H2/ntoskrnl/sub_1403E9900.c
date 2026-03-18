/*
 * XREFs of sub_1403E9900 @ 0x1403E9900
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1403E9900(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
}
