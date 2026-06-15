/*
 * XREFs of ?AddKeyValue@JsonWriter@@QEAAJPEBG0@Z @ 0x18013CF30
 * Callers:
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800F69D0 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18013D400 (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 *     ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18013D534 (-_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyValue(JsonWriter *this, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  int appended; // eax

  if ( (!*((_DWORD *)this + 35)
     || (*(int (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, ", ", 2LL) >= 0)
    && (int)JsonWriter::_AppendString(this, L"endpointid") >= 0
    && (*(int (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, " : ", 3LL) >= 0 )
  {
    if ( a3 )
      appended = JsonWriter::_AppendString(this, a3);
    else
      appended = JsonWriter::_AppendValueNoEscape(this, "null");
    if ( appended >= 0 )
      *((_DWORD *)this + 35) = 1;
  }
  return 0LL;
}
