/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180016950
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180029840 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

bool __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  return (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 45), *((_DWORD *)this + 44), 0LL) != 0;
}
