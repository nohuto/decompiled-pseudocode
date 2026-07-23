/*
 * XREFs of PopDisableS4Reason @ 0x1403A91B8
 * Callers:
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 * Callees:
 *     <none>
 */

__int64 PopDisableS4Reason()
{
  return *(_QWORD *)(*(_QWORD *)qword_140C4E688 + 6920LL) >= 0x100000000uLL ? 8 : 0;
}
