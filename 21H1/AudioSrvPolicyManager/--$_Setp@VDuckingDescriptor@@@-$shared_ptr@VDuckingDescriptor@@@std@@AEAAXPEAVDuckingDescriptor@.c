/*
 * XREFs of ??$_Setp@VDuckingDescriptor@@@?$shared_ptr@VDuckingDescriptor@@@std@@AEAAXPEAVDuckingDescriptor@@U?$integral_constant@_N$0A@@1@@Z @ 0x180030FA8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::shared_ptr<DuckingDescriptor>::_Setp<DuckingDescriptor>(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count<DuckingDescriptor>::`vftable';
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
