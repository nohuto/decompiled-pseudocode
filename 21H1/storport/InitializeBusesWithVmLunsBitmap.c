/*
 * XREFs of InitializeBusesWithVmLunsBitmap @ 0x1C0028D44
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C002EAFC (RaidAdapterStartMiniport.c)
 * Callees:
 *     memset @ 0x1C001B4C0 (memset.c)
 */

__int64 __fastcall InitializeBusesWithVmLunsBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  SIZE_T v4; // rbp
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax

  v2 = 0;
  v3 = (*(unsigned __int8 *)(a1 + 384) >> 5) + 1;
  if ( (*(_BYTE *)(a1 + 384) & 0x1F) == 0 )
    v3 = *(unsigned __int8 *)(a1 + 384) >> 5;
  v4 = 4LL * v3;
  v5 = v3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x4D566152u);
  *(_QWORD *)(a1 + 5024) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 5008), *(PULONG *)(a1 + 5024), 32 * v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
