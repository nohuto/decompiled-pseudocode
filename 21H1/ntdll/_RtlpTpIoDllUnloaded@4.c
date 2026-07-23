/*
 * XREFs of _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1
 * Callers:
 *     _RtlpTpIoDllNotification@12 @ 0x4B385910 (_RtlpTpIoDllNotification@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E (_RtlpTpIoDllProcessUnloads@8.c)
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 */

void __thiscall RtlpTpIoDllUnloaded(_DWORD *this)
{
  PRTL_SPLAY_LINKS v2; // ecx
  unsigned int LeftChild; // edi

  if ( (*(_BYTE *)this & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      LeftChild = (unsigned int)v2[-5].LeftChild;
      if ( LeftChild < this[3] )
        goto LABEL_10;
      if ( LeftChild < this[3] + this[4] )
      {
        RtlpTpIoDllProcessUnloads((int)this, (int)&v2[-5].LeftChild);
        break;
      }
      if ( LeftChild >= this[3] )
        v2 = v2->LeftChild;
      else
LABEL_10:
        v2 = v2->RightChild;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}
