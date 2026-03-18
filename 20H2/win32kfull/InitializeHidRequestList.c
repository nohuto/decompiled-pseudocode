/*
 * XREFs of InitializeHidRequestList @ 0x1C012D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C033A928 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C033A938 = (__int64)&qword_1C033A930;
  qword_1C033A930 = (__int64)&qword_1C033A930;
  result = &qword_1C033A940;
  qword_1C033A948 = (__int64)&qword_1C033A940;
  qword_1C033A940 = (__int64)&qword_1C033A940;
  return result;
}
