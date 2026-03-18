/*
 * XREFs of CcRegisterExternalCache @ 0x140391C50
 * Callers:
 *     <none>
 * Callees:
 *     CcAddExternalCache @ 0x140391CD4 (CcAddExternalCache.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi

  v2 = 0;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1AD7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_QWORD *)PoolWithTag = a1;
    CcAddExternalCache(PoolWithTag);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
