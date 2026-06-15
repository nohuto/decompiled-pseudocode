/*
 * XREFs of sub_180053EBC @ 0x180053EBC
 * Callers:
 *     sub_180001730 @ 0x180001730 (sub_180001730.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 */

int *sub_180053EBC()
{
  dword_18019E690 = 0;
  stru_18019E6B0.SpinCount = 0LL;
  qword_18019E698 = (__int64)&_ImageBase;
  qword_18019E6A0 = (__int64)&off_180195678;
  qword_18019E6A8 = (__int64)&unk_180195680;
  *(_OWORD *)&stru_18019E6B0.DebugInfo = 0LL;
  *(_OWORD *)&stru_18019E6B0.OwningThread = 0LL;
  if ( (int)sub_180010FD8(&stru_18019E6B0) < 0 )
    byte_18019E5E0 = 1;
  else
    dword_18019E690 = 72;
  return &dword_18019E690;
}
