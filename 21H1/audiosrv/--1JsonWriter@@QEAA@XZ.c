/*
 * XREFs of ??1JsonWriter@@QEAA@XZ @ 0x1800F659C
 * Callers:
 *     __lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator()_::_1_::dtor$1 @ 0x1800F6981 (__lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JsonWriter::~JsonWriter(JsonWriter *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
