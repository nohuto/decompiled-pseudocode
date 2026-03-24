/*
 * XREFs of CmSiBugCheck @ 0x1404EDEB4
 * Callers:
 *     CmpInitializeValueNameString @ 0x1406A45C8 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x1408735C0 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1408735E0 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x140879188 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
