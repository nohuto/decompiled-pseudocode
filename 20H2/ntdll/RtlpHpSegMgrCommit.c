/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180022E90
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 *     RtlpHpSegMgrCommitComplete @ 0x18010F1B4 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x18010F254 (RtlpHpSegMgrCommitInitiate.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdi
  _QWORD *v13; // r10
  unsigned __int64 *v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _WORD *v17; // r15
  void *v18; // rax
  size_t v19; // rdi
  int v20; // r13d
  _DWORD *v21; // rcx
  bool v22; // cf
  ULONG v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  unsigned __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int16 v32; // [rsp+28h] [rbp-58h]
  PVOID BaseAddress; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-48h] BYREF
  _RTL_SRWLOCK SRWLock; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h] BYREF
  void *v38; // [rsp+58h] [rbp-28h]
  __int16 v39[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v40; // [rsp+70h] [rbp-10h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+48h]

  v42 = a2;
  SRWLock.0 = 0LL;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  LOBYTE(v41) = 0;
  if ( a5 > 0 )
  {
    v13 = *(_QWORD **)(a1 + 56);
    v14 = v13 + 4;
    v15 = (v13[12] + v13[17]) << 12;
    if ( !dword_1801663E8 )
    {
      v16 = *v14;
      if ( *v14
        || (v16 = *((_QWORD *)&xmmword_18016A670 + 1),
            v14 = (unsigned __int64 *)&xmmword_18016A670 + 1,
            *((_QWORD *)&xmmword_18016A670 + 1)) )
      {
        if ( v15 + (a5 << 12) > v16 )
        {
          v28 = v14[1];
          if ( v28 )
            RtlpLogHeapFailure(21, (_DWORD)v13, 0, v28, a5 << 12, v15);
          return (unsigned int)-1073741523;
        }
      }
      a2 = v42;
    }
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    BaseAddress = (PVOID)(a2 & 0xFFFFFFFFFFE00000uLL);
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v37, 0LL);
    v17 = (_WORD *)(v37 + 2 * (v11 >> 9));
  }
  else
  {
    v17 = 0LL;
  }
  v18 = (void *)(v42 + (unsigned int)((_DWORD)v11 << 12));
  v19 = (unsigned int)(a4 << 12);
  v20 = a7;
  Size = v19;
  v38 = v18;
  while ( 1 )
  {
    BaseAddress = v18;
    RegionSize = v19;
    if ( !v17 )
      goto LABEL_10;
    v29 = RtlpHpSegMgrCommitInitiate(a1, (int)v17, v8, v20, &SRWLock, (__int64)&v41);
    if ( v29 == -1073741568 )
      break;
    if ( v29 == -1073741566 )
    {
      BaseAddress = (PVOID)((unsigned __int64)BaseAddress & 0xFFFFFFFFFFE00000uLL);
      v30 = v10 | 0x20000000;
      RegionSize = 0x200000LL;
      if ( (int)v8 <= 0 )
        v30 = v10;
      v10 = v30;
    }
LABEL_10:
    if ( (int)v8 <= 0 )
    {
      v40 = *(_OWORD *)(a1 + 40);
      v26 = RtlpHpFreeVA(&BaseAddress, &RegionSize, v10, &v40);
    }
    else
    {
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v21 = *(_DWORD **)(a1 + 56);
      v22 = (v21[5] & 0x40000000) != 0;
      *(_OWORD *)v39 = *(_OWORD *)(a1 + 40);
      v23 = RtlpHpHeapValidateProtection(v21, v22 ? 64 : 4);
      v24 = RtlpHpAllocVA(&BaseAddress, &RegionSize, 0LL, v10, v23, (__int128 *)v39);
      v26 = v24;
      if ( v9 && v24 >= 0 && (v10 & 0x40000000) == 0 )
        memset(BaseAddress, 0, Size);
    }
    if ( !v17 )
      return (unsigned int)v26;
    if ( (*v17 & 0x4000) != 0 && v26 >= 0 )
    {
      v31 = 1LL;
      if ( (int)v8 <= 0 )
        v31 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v31);
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(v25, (int)v17, v8, v26 >= 0, &SRWLock, v32);
    if ( (v10 & 0x20000000) == 0 || v26 >= 0 || (v20 & 2) != 0 )
      return (unsigned int)v26;
    v19 = Size;
    v20 |= 1u;
    v18 = v38;
    v10 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(BaseAddress, 0, v19);
  return 0;
}
