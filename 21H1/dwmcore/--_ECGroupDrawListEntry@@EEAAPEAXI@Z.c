/*
 * XREFs of ??_ECGroupDrawListEntry@@EEAAPEAXI@Z @ 0x1800D2A40
 * Callers:
 *     ??_ECGroupDrawListEntry@@GBA@EAAPEAXI@Z @ 0x1800EDAC0 (--_ECGroupDrawListEntry@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006D89C (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CGroupDrawListEntry *__fastcall CGroupDrawListEntry::`vector deleting destructor'(CGroupDrawListEntry *this, char a2)
{
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
