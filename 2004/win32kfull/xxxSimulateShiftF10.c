/*
 * XREFs of xxxSimulateShiftF10 @ 0x1C01D88E4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 xxxSimulateShiftF10()
{
  xxxKeyEvent(
    160LL,
    554LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0);
  xxxKeyEvent(
    121LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0);
  xxxKeyEvent(
    32889LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0);
  return xxxKeyEvent(
           32928LL,
           554LL,
           (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
           0LL,
           0LL,
           0LL,
           0,
           0);
}
