/*
 * XREFs of MiCountSystemImageCommitment @ 0x1402DBA28
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x1402DB994 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSubsectionDriverProtos @ 0x14027B234 (MiGetSubsectionDriverProtos.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1402DBCA8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 SessionVm; // rax
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rbp
  unsigned int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-58h]
  KIRQL v24; // [rsp+80h] [rbp+8h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h]
  unsigned __int64 v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  v26 = SessionVm;
  v7 = *(_DWORD *)(v4 + 56) & 0x800;
  v8 = SessionVm;
  v9 = 0LL;
  v23 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = (volatile LONG *)MiGetSharedVm(v8);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v13 = v4 + 128;
  v24 = v11;
  v25 = v4 + 128;
  if ( v4 != -128LL )
  {
    v14 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v13 + 52) & 0x3FFFFFFF;
      v15 = (unsigned int)(*(_DWORD *)(v13 + 44) - v12);
      if ( (*(_BYTE *)(v13 + 32) & 0x3Eu) >= 8 )
      {
        v5 += 8LL * (unsigned int)(*(_DWORD *)(v13 + 44) - v12);
      }
      else
      {
        if ( !MiGetSubsectionDriverProtos((_QWORD *)v13) )
        {
          v16 = 0;
          if ( !v15 )
            goto LABEL_21;
          while ( 1 )
          {
            v17 = v9;
            if ( v23 )
            {
              v12 = (v5 - v14) >> 3;
              if ( _bittest(*(const signed __int32 **)(*(_QWORD *)(v23 + 40) + 8LL), v12) )
                goto LABEL_31;
            }
            v18 = MI_READ_PTE_LOCK_FREE(v5);
            v27 = v18;
            if ( v18 )
              break;
LABEL_19:
            ++v16;
            v5 += 8LL;
            if ( v16 >= v15 )
            {
              v13 = v25;
              goto LABEL_21;
            }
          }
          if ( !v7 )
          {
            if ( (v18 & 1) != 0 )
            {
              MI_READ_PTE_LOCK_FREE(&v27);
              if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v5 << 25 >> 16) & 0xF) != 9 )
              {
                v21 = *(_QWORD *)(v20 + 40);
                if ( v21 < 0 )
                {
                  if ( (v21 & 0x10000000000LL) != 0 || (v22 = *(_QWORD *)(v20 + 8), v22 < 0) || !v22 )
                  {
                    ++v9;
                    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
                      v9 = v17;
                    goto LABEL_19;
                  }
                }
              }
            }
            else if ( (v18 & 0x400) != 0 )
            {
              ++v9;
              if ( !MI_PROTO_FORMAT_COMBINED(v18) )
                v9 = v17;
              goto LABEL_19;
            }
          }
LABEL_31:
          ++v9;
          goto LABEL_19;
        }
        v5 += 8 * v15;
      }
      v9 += v15;
LABEL_21:
      v13 = *(_QWORD *)(v13 + 16);
      v25 = v13;
      if ( !v13 )
      {
        v8 = v26;
        v11 = v24;
        break;
      }
    }
  }
  LOBYTE(v12) = v11;
  MiUnlockWorkingSetExclusive(v8, v12);
  return v9;
}
