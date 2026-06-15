/*
 * XREFs of ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x1800D797C
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800D4C08 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSid::IsValid(ATL::CSid *this)
{
  return *((_BYTE *)this + 76) && IsValidSid((char *)this + 8);
}
