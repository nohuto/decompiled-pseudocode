/*
 * XREFs of MiCountSystemImageCommitment @ 0x14039BF04
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14039BE70 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039C1B8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 SessionVm; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rdi
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // edx
  unsigned __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  KIRQL v26; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned __int64 v28; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v2) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  v28 = SessionVm;
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = SessionVm;
  v10 = 0LL;
  v29 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v9);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v4 + 128;
  v26 = v12;
  v27 = v4 + 128;
  if ( v4 != -128LL )
  {
    v14 = v29;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v13 + 52) & 0x3FFFFFFF;
      v16 = (unsigned int)(*(_DWORD *)(v13 + 44) - v15);
      if ( (*(_BYTE *)(v13 + 32) & 0x3Eu) >= 8 )
      {
        v6 += 8LL * (unsigned int)(*(_DWORD *)(v13 + 44) - v15);
LABEL_12:
        v10 += v16;
        goto LABEL_35;
      }
      if ( MiGetSubsectionDriverProtos((_QWORD *)v13) )
      {
        v6 += 8 * v16;
        goto LABEL_12;
      }
      v17 = 0;
      if ( !v16 )
        goto LABEL_35;
      do
      {
        if ( v14 && _bittest(*(const signed __int32 **)(*(_QWORD *)(v14 + 40) + 8LL), (__int64)(v6 - v5) >> 3) )
        {
LABEL_18:
          ++v10;
          goto LABEL_33;
        }
        v18 = MI_READ_PTE_LOCK_FREE(v6);
        v29 = v18;
        if ( v18 )
        {
          if ( v8 )
            goto LABEL_18;
          if ( (v18 & 1) != 0 )
          {
            MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
            if ( (MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v6 << 25) >> 16) & 0xF) == 9
              || !(unsigned int)MI_PFN_IS_PROTO(v21)
              || (*(_QWORD *)(v22 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v22 + 8) > 0 )
            {
              goto LABEL_18;
            }
            v23 = v10 + 1;
            if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
              v23 = v10;
            v10 = v23;
          }
          else
          {
            v24 = v10 + 1;
            if ( (v18 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v18, v19, v24, v20) )
              v24 = v10;
            v10 = v24;
          }
        }
LABEL_33:
        ++v17;
        v6 += 8LL;
      }
      while ( v17 < v16 );
      v13 = v27;
LABEL_35:
      v13 = *(_QWORD *)(v13 + 16);
      v27 = v13;
      if ( !v13 )
      {
        v9 = v28;
        v12 = v26;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive(v9, v12);
  return v10;
}
