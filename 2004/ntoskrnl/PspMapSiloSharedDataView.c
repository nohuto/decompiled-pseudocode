/*
 * XREFs of PspMapSiloSharedDataView @ 0x14065D7D0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x14065DF80 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSiloSharedDataView(__int64 a1)
{
  __int64 ProcessServerSilo; // rsi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    return 0LL;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  result = MmMapViewOfSection(
             *(_QWORD *)(*(_QWORD *)(ProcessServerSilo + 1272) + 1128LL),
             a1,
             &v6,
             0LL,
             0LL,
             &v8,
             &v7,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 144LL) = v6;
    v4 = 0LL;
    v5 = *(__int64 **)(a1 + 1408);
    if ( v5 )
      v4 = *v5;
    if ( v4 )
      *(_DWORD *)(v4 + 80) = v6;
    return 0LL;
  }
  return result;
}
