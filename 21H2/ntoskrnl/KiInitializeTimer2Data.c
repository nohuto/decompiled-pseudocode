/*
 * XREFs of KiInitializeTimer2Data @ 0x1403B6600
 * Callers:
 *     KeInitializeTimerTable @ 0x14079FD34 (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

__int64 *KiInitializeTimer2Data()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  result = qword_140C31CD0;
  v1 = 5LL;
  do
  {
    *(result - 2) = 0LL;
    *(result - 1) = 0LL;
    *result = -1LL;
    result += 3;
    --v1;
  }
  while ( v1 );
  KiNextTimer2DueTime = -1LL;
  return result;
}
