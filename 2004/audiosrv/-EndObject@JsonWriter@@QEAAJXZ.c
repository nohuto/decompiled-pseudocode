/*
 * XREFs of ?EndObject@JsonWriter@@QEAAJXZ @ 0x18013CFD4
 * Callers:
 *     _lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator() @ 0x1800F668C (_lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F6A90 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JsonWriter::EndObject(JsonWriter *this)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + *((int *)this + 34) + 1) )
    return 2147758082LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
             *(_QWORD *)this,
             "}",
             1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
