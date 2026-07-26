/*
 * XREFs of ?ndisGetAnyProcInsideNode@@YA?AU_PROCESSOR_NUMBER@@G@Z @ 0x1C0075B38
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C0033A40 (NdisAllocateSharedMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisGetAnyProcInsideNode(USHORT a1)
{
  char v1; // bl
  unsigned __int64 i; // rax
  USHORT Count[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int Group; // [rsp+24h] [rbp-24h]
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-20h] BYREF

  v1 = 0;
  Affinity = 0LL;
  Count[0] = 0;
  KeQueryNodeActiveAffinity(a1, &Affinity, Count);
  Group = Affinity.Group;
  if ( Count[0] )
  {
    for ( i = Affinity.Mask; (i & 1) == 0; i >>= 1 )
      BYTE2(Group) = ++v1;
  }
  else
  {
    BYTE2(Group) = -1;
  }
  return Group;
}
