/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B2E0
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000C1A0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180009240 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180009F34 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18000A780 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v4; // rdi
  char *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rdx
  char v11; // al
  bool v12; // di
  HANDLE ProcessHeap; // rax
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int Buf1; // [rsp+38h] [rbp-C8h] BYREF
  char *v17; // [rsp+40h] [rbp-C0h] BYREF
  char *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  char v21[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v21;
  v17 = v21;
  v7 = v21;
  v8 = 0LL;
  v18 = v21;
  v15 = 0LL;
  v9 = (char *)v22;
  v19 = (char *)v22;
  lpMem = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v21, 0x100uLL) )
  {
    v10 = v15;
    if ( v15 >= 0x100 )
    {
      if ( v15 < 0x200 )
        v10 = 512LL;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v17, v10);
      v8 = lpMem;
      if ( !v11 )
        goto LABEL_8;
      v9 = v19;
      v7 = v18;
      v4 = v17;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v4, v9 - v4) )
    {
LABEL_8:
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( &v4[v15] <= v9 )
    v7 = &v4[v15];
  AcquireSRWLockExclusive(SRWLock);
  Buf1 = a2;
  v12 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &Buf1,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v12;
}
