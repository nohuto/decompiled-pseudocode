/*
 * XREFs of sub_180001750 @ 0x180001750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int sub_180001750()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_18019EB18 = 0;
  qword_18019EB08 = (__int64)off_18014B0F8;
  qword_18019EB10 = (__int64)ProcessHeap;
  return atexit(sub_18007D200);
}
