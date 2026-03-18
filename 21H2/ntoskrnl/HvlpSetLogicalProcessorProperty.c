/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1405454FC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, __int64 a2, const void *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v5 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 3264LL);
  *v5 = a1;
  v5[1] = 6;
  memmove(v5 + 2, a3, 0xCB8uLL);
  v6 = (unsigned __int16)HvcallInitiateHypercall(121) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v8);
  return v6;
}
