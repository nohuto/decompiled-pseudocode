/*
 * XREFs of GetOpRegionScope @ 0x1C001CE9C
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     GetOpRegionScopeWorker @ 0x1C001CCA0 (GetOpRegionScopeWorker.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *Pool2; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax

  Pool2 = (__int64 *)ExAllocatePool2(64LL, 56LL, 1181770561LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a1;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v9 = AMLIGetParent(a1);
  *((_DWORD *)v8 + 6) = -1;
  v8[1] = v9;
  v8[5] = a3;
  v8[4] = (__int64)PciConfigSpaceHandlerWorker;
  v8[6] = a4;
  return GetOpRegionScopeWorker(a1, 0, 0LL, (volatile signed __int32 **)v8);
}
