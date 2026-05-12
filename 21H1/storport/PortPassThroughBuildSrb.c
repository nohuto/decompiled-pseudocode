/*
 * XREFs of PortPassThroughBuildSrb @ 0x1C007C030
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C007C9B8 (PortPassThroughSendAsync.c)
 * Callees:
 *     PortPassThroughSrbInitialize @ 0x1C007CC80 (PortPassThroughSrbInitialize.c)
 */

PVOID __fastcall PortPassThroughBuildSrb(__int64 a1, int a2)
{
  PVOID v4; // rdi
  PVOID PoolWithTag; // rbx
  int v6; // r8d

  v4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69506C50u);
  if ( PoolWithTag )
  {
    if ( !*(_BYTE *)(a1 + 7)
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, *(unsigned __int8 *)(a1 + 7), 0x69506C50u)) != 0LL )
    {
      PortPassThroughSrbInitialize((_DWORD)PoolWithTag, a1, v6, a2, (__int64)v4);
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
