/*
 * XREFs of CmSiBugCheck @ 0x14053FFEC
 * Callers:
 *     CmpInitializeValueNameString @ 0x14065DBC8 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140919F98 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140919FB8 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x14091F960 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
