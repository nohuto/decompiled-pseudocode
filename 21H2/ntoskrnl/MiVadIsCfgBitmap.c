/*
 * XREFs of MiVadIsCfgBitmap @ 0x140687A5C
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 456); *i != a1; i += 4 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
