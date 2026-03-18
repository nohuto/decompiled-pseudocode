/*
 * XREFs of MiConvertIoPfnTreeLockExclusiveToShared @ 0x1403B40EC
 * Callers:
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

_QWORD *MiConvertIoPfnTreeLockExclusiveToShared()
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v1; // ebx
  unsigned int NodeColor; // edi
  __int64 v3; // rsi
  _QWORD *result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  NodeColor = CurrentPrcb->NodeColor;
  if ( KeNumberNodes )
  {
    v3 = qword_140C506E0 + 112;
    do
    {
      if ( v1 != NodeColor )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v3 + 128LL));
      v3 += 120LL;
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  result = CurrentPrcb->MmInternal;
  *(_DWORD *)(result[1561] + 128LL) = 1;
  return result;
}
