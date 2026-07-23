/*
 * XREFs of CmSiBugCheck @ 0x1404EE0F4
 * Callers:
 *     CmpInitializeValueNameString @ 0x1405E2098 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140873720 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140873740 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x1408792E8 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
