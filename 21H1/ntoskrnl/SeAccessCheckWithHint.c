/*
 * XREFs of SeAccessCheckWithHint @ 0x140209250
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140202268 (ExCpuSetResourceManagerAccessCheck.c)
 *     SeAccessCheckFromStateEx @ 0x140240FC0 (SeAccessCheckFromStateEx.c)
 *     RtlpAllowsLowBoxAccess @ 0x140317EB8 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140703C00 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140779DF8 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
