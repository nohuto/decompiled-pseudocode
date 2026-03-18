/*
 * XREFs of PopDisableS4Reason @ 0x1403AE478
 * Callers:
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 * Callees:
 *     <none>
 */

__int64 PopDisableS4Reason()
{
  return *(_QWORD *)(*(_QWORD *)qword_140C4E4C8 + 6920LL) >= 0x100000000uLL ? 8 : 0;
}
