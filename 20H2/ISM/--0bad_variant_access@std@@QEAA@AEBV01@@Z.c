/*
 * XREFs of ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x18006DBB8
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x180063F38 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_variant_access *__fastcall std::bad_variant_access::bad_variant_access(
        std::bad_variant_access *this,
        const struct std::bad_variant_access *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_variant_access::`vftable';
  return this;
}
