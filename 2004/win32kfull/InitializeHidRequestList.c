/*
 * XREFs of InitializeHidRequestList @ 0x1C012B980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C033B908 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C033B918 = (__int64)&qword_1C033B910;
  qword_1C033B910 = (__int64)&qword_1C033B910;
  result = &qword_1C033B920;
  qword_1C033B928 = (__int64)&qword_1C033B920;
  qword_1C033B920 = (__int64)&qword_1C033B920;
  return result;
}
