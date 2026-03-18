/*
 * XREFs of RtlpHpSegMgrCommit @ 0x1402B0B50
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x1402B07F0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x140361AA0 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x1403862CC (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x1402AB58C (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402B0FAC (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x1402B11F0 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402B3490 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402B3704 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402B373C (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1403188F8 (RtlpHpSegMgrCommitComplete.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // r15
  unsigned int v11; // edi
  __int64 v14; // rcx
  void *v15; // r13
  size_t v16; // r15
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int v20; // r12d
  int v21; // edx
  __int128 v23; // xmm0
  __int64 HeapManager; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rcx
  int v29; // r9d
  void *v30; // [rsp+30h] [rbp-51h] BYREF
  size_t v31; // [rsp+38h] [rbp-49h] BYREF
  int v32[2]; // [rsp+40h] [rbp-41h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-39h] BYREF
  __int128 v34; // [rsp+50h] [rbp-31h] BYREF
  __int128 v35; // [rsp+60h] [rbp-21h] BYREF
  __int128 v36; // [rsp+70h] [rbp-11h] BYREF
  __int128 v37; // [rsp+80h] [rbp-1h] BYREF
  __int128 v38; // [rsp+90h] [rbp+Fh]
  __int64 v39; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a3;
  v11 = a6 & 0xBFFFFFFF;
  LOBYTE(v39) = 0;
  BugCheckParameter2 = 0LL;
  if ( a5 > 0 && !(unsigned int)RtlpHpSegHeapCheckCommitLimit(a5 << 12, *(_QWORD *)(a1 + 56)) )
    return 3221225773LL;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v37 = 0LL;
    v38 = 0LL;
    v23 = *(_OWORD *)(a1 + 40);
    v30 = (void *)(a2 & 0xFFFFFFFFFFE00000uLL);
    v34 = v23;
    HeapManager = RtlpHpEnvGetHeapManager(&v34, a2 & 0xFFFFFFFFFFE00000uLL);
    RtlpHpVaMgrCtxQuery(HeapManager + 88, v25, &v37);
    v14 = v38 + 2 * (v10 >> 9);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (void *)((unsigned int)((_DWORD)v10 << 12) + a2);
  *(_QWORD *)v32 = v14;
  v16 = (unsigned int)(a4 << 12);
  while ( 1 )
  {
    v30 = v15;
    v31 = v16;
    if ( !v14 )
      goto LABEL_7;
    v26 = RtlpHpSegMgrCommitInitiate(a1, v14, v8, a7, (ULONG_PTR)&BugCheckParameter2, (__int64)&v39);
    if ( v26 == -1073741568 )
      break;
    if ( v26 == -1073741566 )
    {
      v30 = (void *)((unsigned __int64)v30 & 0xFFFFFFFFFFE00000uLL);
      v27 = v11 | 0x20000000;
      v31 = 0x200000LL;
      if ( (int)v8 <= 0 )
        v27 = v11;
      v11 = v27;
    }
LABEL_7:
    if ( (int)v8 <= 0 )
    {
      v36 = *(_OWORD *)(a1 + 40);
      v20 = RtlpHpFreeVA((unsigned __int64 *)&v30, &v31, v11, &v36);
    }
    else
    {
      if ( v9 && (v11 & 0x20000000) == 0 )
        v11 |= 0x40000000u;
      v17 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) == 0;
      v18 = 64;
      v35 = *(_OWORD *)(a1 + 40);
      if ( v17 )
        v18 = 4;
      v19 = RtlpHpAllocVA((unsigned int)&v30, (unsigned int)&v31, 0, v11, v18, (__int64)&v35);
      v20 = v19;
      if ( v9 && v19 >= 0 && (v11 & 0x40000000) == 0 )
        memset(v30, 0, v16);
    }
    v21 = v32[0];
    if ( !*(_QWORD *)v32 )
      return (unsigned int)v20;
    if ( (**(_WORD **)v32 & 0x4000) != 0 )
    {
      if ( v20 < 0 )
        goto LABEL_40;
      v28 = 1LL;
      if ( (int)v8 <= 0 )
        v28 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v28);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    if ( v20 < 0 )
    {
LABEL_40:
      v29 = 0;
      goto LABEL_37;
    }
    v29 = 1;
LABEL_37:
    RtlpHpSegMgrCommitComplete(a1, v21, v8, v29, (PEX_SPIN_LOCK)&BugCheckParameter2, v39);
    if ( (v11 & 0x20000000) == 0 || v20 >= 0 || (a7 & 2) != 0 )
      return (unsigned int)v20;
    v14 = *(_QWORD *)v32;
    a7 |= 1u;
    v11 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(v30, 0, v16);
  return 0LL;
}
