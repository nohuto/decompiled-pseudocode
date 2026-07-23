/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18000662C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010EFD8 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, int a2, PVOID *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  _QWORD **v6; // rbx
  unsigned int *v7; // r12
  unsigned int v8; // esi
  void *v10; // r14
  ULONG_PTR v11; // rdi
  ULONG_PTR v12; // r9
  void *v13; // rcx
  ULONG v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  _DWORD *v17; // rax
  PVOID *v18; // rcx
  PVOID v19; // rax
  _RTL_SRWLOCK *v21; // r12
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  int v24; // r13d
  int v25; // eax
  __int64 v26; // rdx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+48h] BYREF
  int v30; // [rsp+A8h] [rbp+50h]
  PVOID *v31; // [rsp+B0h] [rbp+58h]
  unsigned int *v32; // [rsp+B8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v5 = (_QWORD **)(a1 + 120);
  v6 = (_QWORD **)(a1 + 128);
  v7 = a4;
  v8 = -*(_DWORD *)a1;
  v10 = 0LL;
  v11 = v8;
  RegionSize = v8;
  v12 = v8;
  if ( *(_QWORD *)(a1 + 120) || *v6 )
  {
    v21 = (_RTL_SRWLOCK *)(a1 + 112);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
    v22 = *v6;
    if ( *v6 || (v30 & 2) == 0 && (v22 = *v5, v6 = v5, *v5) )
    {
      v23 = *((unsigned __int16 *)v22 - 3);
      _BitScanForward((unsigned int *)&v24, v23);
      v25 = v23 ^ (1 << v24);
      *((_WORD *)v22 - 3) = v25;
      if ( !(_WORD)v25 )
      {
        if ( *v6 )
          *v6 = (_QWORD *)**v6;
        *v22 = 0LL;
      }
      RtlReleaseSRWLockExclusive(v21);
      v26 = qword_18016C4F0[6 * *((unsigned __int8 *)v22 - 15)];
      v10 = (void *)(*(_QWORD *)(v26 + 8)
                   + v8 * v24
                   + (((unsigned __int64)v22 - *(_QWORD *)(v26 + 40) - 16) >> *(_DWORD *)(v26 + 24) << 20));
    }
    else
    {
      RtlReleaseSRWLockExclusive(v21);
    }
    v7 = v32;
    v11 = v8;
    v12 = RegionSize;
  }
  BaseAddress[0] = v10;
  if ( v10 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v12 = 0x200000LL;
    RegionSize = v12;
  }
  v13 = *(void **)(a1 + 56);
  *(_OWORD *)v28 = *(_OWORD *)(a1 + 40);
  v14 = RtlpHpHeapValidateProtection(v13);
  v16 = RtlpHpAllocVA(BaseAddress, v14, (__int64)v28);
  if ( v16 >= 0 )
  {
    LODWORD(v12) = RegionSize;
    if ( v11 < RegionSize )
    {
      RtlpHpSegMgrVaCtxInitialize(v15, BaseAddress[0], v8);
      LODWORD(v12) = RegionSize;
    }
LABEL_8:
    v17 = a5;
    v16 = 0;
    v18 = v31;
    *v7 = v8;
    *v17 = v12;
    *v18 = BaseAddress[0];
    v19 = 0LL;
    BaseAddress[0] = 0LL;
    goto LABEL_9;
  }
  v19 = BaseAddress[0];
LABEL_9:
  if ( v19 )
  {
    *(_OWORD *)v28 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(BaseAddress, &RegionSize);
  }
  return (unsigned int)v16;
}
