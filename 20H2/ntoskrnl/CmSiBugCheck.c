/*
 * XREFs of CmSiBugCheck @ 0x1404EC5D4
 * Callers:
 *     CmpInitializeValueNameString @ 0x1406A553C (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140875CDC (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140875CFC (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x14087B808 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
