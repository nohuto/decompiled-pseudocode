/*
 * XREFs of BgDisplayString @ 0x1409F9570
 * Callers:
 *     BgkDrawText @ 0x1409F93DC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021E5E0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409FA784 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C13330 & 1) == 0 || (dword_140C13330 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140C133E0 && qword_140C133F8 )
  {
    v5 = BgpTxtDisplayString(qword_140C133F8, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
