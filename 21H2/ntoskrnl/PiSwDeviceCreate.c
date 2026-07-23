/*
 * XREFs of PiSwDeviceCreate @ 0x14074E588
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceCreate(_QWORD *a1)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xD0uLL, 0x57706E50u);
  *a1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xD0uLL);
    *(_DWORD *)*a1 = 1;
    v4 = (_QWORD *)(*a1 + 128LL);
    v4[1] = v4;
    *v4 = v4;
    v5 = (_QWORD *)(*a1 + 184LL);
    v5[1] = v5;
    *v5 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
