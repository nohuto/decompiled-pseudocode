/*
 * XREFs of MiCountSystemImageCommitment @ 0x14039EDE4
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14039ED50 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039F098 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
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
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  KIRQL v24; // [rsp+70h] [rbp+8h]
  unsigned __int64 v25; // [rsp+78h] [rbp+10h]
  unsigned __int64 v26; // [rsp+80h] [rbp+18h]
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

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
  v26 = SessionVm;
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = SessionVm;
  v10 = 0LL;
  v27 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v9);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v4 + 128;
  v24 = v12;
  v25 = v4 + 128;
  if ( v4 != -128LL )
  {
    v14 = v27;
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
        v27 = v18;
        if ( v18 )
        {
          if ( v8 )
            goto LABEL_18;
          if ( (v18 & 1) != 0 )
          {
            MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
            if ( (MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v6 << 25) >> 16) & 0xF) == 9
              || !(unsigned int)MI_PFN_IS_PROTO(v19)
              || (*(_QWORD *)(v20 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v20 + 8) > 0 )
            {
              goto LABEL_18;
            }
            v21 = v10 + 1;
            if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
              v21 = v10;
            v10 = v21;
          }
          else
          {
            v22 = v10 + 1;
            if ( (v18 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v18) )
              v22 = v10;
            v10 = v22;
          }
        }
LABEL_33:
        ++v17;
        v6 += 8LL;
      }
      while ( v17 < v16 );
      v13 = v25;
LABEL_35:
      v13 = *(_QWORD *)(v13 + 16);
      v25 = v13;
      if ( !v13 )
      {
        v9 = v26;
        v12 = v24;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive(v9, v12);
  return v10;
}
