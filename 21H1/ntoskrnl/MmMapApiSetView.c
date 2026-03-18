/*
 * XREFs of MmMapApiSetView @ 0x1406F9E20
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     MmMapViewOfSection @ 0x1406FA5A0 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 ProcessServerSilo; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int16 v8; // r8
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    v3 = qword_140C4CB38;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(ProcessServerSilo) + 129);
  result = MmMapViewOfSection(v3, a1, &v9, 0LL, 0LL, &v11, &v10, 1, 0x400000, 2);
  v5 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 104LL) = v9;
    v6 = 0LL;
    v7 = *(__int64 **)(a1 + 1408);
    if ( v7 )
      v6 = *v7;
    if ( v6 )
    {
      if ( v7 && ((v8 = *((_WORD *)v7 + 4), v8 == 332) || v8 == 452) )
        *(_DWORD *)(v6 + 56) = v9;
      else
        *(_QWORD *)(v6 + 104) = v9;
    }
    return v5;
  }
  return result;
}
