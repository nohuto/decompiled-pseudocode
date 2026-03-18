/*
 * XREFs of SeAccessCheckWithHint @ 0x14029BD60
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x14027DD70 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14034A120 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x140355968 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenCapability @ 0x1405813C0 (RtlCheckTokenCapability.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x14062BE70 (RtlIsSandboxedToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406339C0 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x14077C208 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
