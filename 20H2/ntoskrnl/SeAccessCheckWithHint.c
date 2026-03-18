/*
 * XREFs of SeAccessCheckWithHint @ 0x140223DC0
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140267780 (SeAccessCheckFromStateEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14031B374 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x140326628 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ExpCheckWakeTimerAccess @ 0x14078A808 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckWithHint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v13; // [rsp+58h] [rbp-10h]

  v13 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v13);
}
