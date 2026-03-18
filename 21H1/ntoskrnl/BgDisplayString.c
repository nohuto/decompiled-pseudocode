/*
 * XREFs of BgDisplayString @ 0x1409F3570
 * Callers:
 *     BgkDrawText @ 0x1409F33DC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1402815B0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C132D0 & 1) == 0 || (dword_140C132D0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140C13380 && qword_140C13398 )
  {
    v5 = BgpTxtDisplayString(qword_140C13398, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
