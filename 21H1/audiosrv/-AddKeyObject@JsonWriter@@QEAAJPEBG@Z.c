/*
 * XREFs of ?AddKeyObject@JsonWriter@@QEAAJPEBG@Z @ 0x18013CE80
 * Callers:
 *     _lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator() @ 0x1800F65CC (_lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F69D0 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013D400 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyObject(JsonWriter *this, const unsigned __int16 *a2)
{
  int appended; // ecx

  if ( *((_DWORD *)this + 34) < 0x20u )
  {
    if ( !*((_DWORD *)this + 35)
      || (appended = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                       *(_QWORD *)this,
                       ", ",
                       2LL),
          appended >= 0) )
    {
      appended = JsonWriter::_AppendString(this, a2);
      if ( appended >= 0 )
      {
        appended = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                     *(_QWORD *)this,
                     " : {",
                     4LL);
        if ( appended >= 0 )
        {
          *((_DWORD *)this + (*((_DWORD *)this + 34))++ + 2) = 0;
          *((_DWORD *)this + 35) = 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147209213;
  }
  return (unsigned int)appended;
}
