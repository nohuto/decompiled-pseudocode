/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14033A030
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14032E970 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x14033A4C0 (MiGetWsleProtection.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUpdatePfnProtection @ 0x1405A6A34 (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int updated; // ebp
  int v9; // r14d
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int8 v14; // di
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v19; // rcx
  unsigned __int8 WsleContents; // al
  int WsleProtection; // eax
  __int64 v22; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  int v32; // r8d
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned __int8 v36; // [rsp+30h] [rbp-148h]
  unsigned int v37; // [rsp+34h] [rbp-144h]
  unsigned int v38; // [rsp+38h] [rbp-140h]
  unsigned __int64 v39; // [rsp+40h] [rbp-138h] BYREF
  __int64 v40; // [rsp+48h] [rbp-130h]
  unsigned __int64 v41; // [rsp+50h] [rbp-128h]
  __int64 v42; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-118h]
  int v44; // [rsp+70h] [rbp-108h] BYREF
  __int16 v45; // [rsp+74h] [rbp-104h]
  __int16 v46; // [rsp+76h] [rbp-102h]
  __int64 v47; // [rsp+78h] [rbp-100h]
  __int64 v48; // [rsp+80h] [rbp-F8h]
  __int64 v49; // [rsp+88h] [rbp-F0h]
  _BYTE v50[152]; // [rsp+90h] [rbp-E8h] BYREF

  v43 = a3;
  v46 = 0;
  v42 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  updated = 1;
  v9 = 4;
  v37 = 4;
  v10 = 0LL;
  v38 = 0;
  v47 = 20LL;
  v44 = 1;
  v45 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v41 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v41;
  v12 = a1 + 1664;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v12;
  v36 = MiLockWorkingSetShared(v12);
  v14 = v36;
  if ( v41 > v13 )
    goto LABEL_17;
  do
  {
    if ( (v11 & 0xFFF) != 0 )
    {
      if ( v10 )
        goto LABEL_5;
    }
    else if ( v10 )
    {
      MiFlushTbList((__int64)&v44);
      MiUnlockPageTableInternal(v12, v10);
    }
    MiMakeSystemAddressValid(v11, (__int64)&v44, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v36, 0);
    v10 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_5:
    v15 = *(_QWORD *)v11;
    if ( MiPteInShadowRange(v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v25 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        v26 = v15 | 0x20;
        if ( (v25 & 0x20) == 0 )
          v26 = v15;
        v15 = v26;
        if ( (v25 & 0x42) != 0 )
          v15 = v26 | 0x42;
      }
    }
    v39 = v15;
    if ( !v15 )
      goto LABEL_25;
    if ( (v15 & 1) != 0 )
    {
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39) >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v16 - 0x220000000000LL;
      if ( *(_WORD *)(v17 + 32) <= 1u || (updated & 7) == 4 )
      {
        if ( *(__int64 *)(v17 + 40) >= 0 )
        {
          if ( ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == (unsigned __int64)v37 )
          {
            updated = MiUpdatePfnProtection(a2, 48 * v16 - 0x220000000000LL, updated);
LABEL_13:
            MiRevertValidPte(a2, v11, updated, v16, (__int64)&v44);
            v9 = v37;
            goto LABEL_14;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0, &v42);
          v19 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
          if ( v19 == ProtoPteAddress )
          {
            WsleContents = MiGetWsleContents(v19, (__int64)(v11 << 25) >> 16);
            WsleProtection = MiGetWsleProtection((__int64)(v11 << 25) >> 16, WsleContents);
            if ( WsleProtection == v37 || !WsleProtection && ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == v37 )
            {
              MiGetWsleContents(v22, (__int64)(v11 << 25) >> 16);
              MiWriteValidPteVolatile(
                (((unsigned __int64)((__int64)(v11 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                0x80000000LL);
              goto LABEL_13;
            }
          }
        }
      }
      goto LABEL_25;
    }
    if ( (v15 & 0x400) != 0 )
    {
      if ( (updated & 7) != 4 )
        goto LABEL_25;
      if ( MiIsPrototypePteVadLookup(v15) )
      {
        v28 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (updated & 0x1F));
        v39 = v28;
        v29 = v28;
        if ( !v27 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v30 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (updated & 0x1F));
          if ( !HIBYTE(word_140C51864) && (v28 & 1) != 0 )
            v30 = v28 | 0x8000000000000000uLL;
          *(_QWORD *)v11 = v30;
          MiWritePteShadow(v11, v30);
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v29 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (updated & 0x1F));
          if ( (v15 & 1) != 0 )
            v29 = v28 | 0x8000000000000000uLL;
LABEL_73:
          *(_QWORD *)v11 = v29;
        }
        else
        {
          *(_QWORD *)v11 = v28;
        }
LABEL_14:
        v11 += 8LL;
        goto LABEL_15;
      }
      v31 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL));
      v39 = v31;
      if ( v32 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v34 = v33;
          if ( !HIBYTE(word_140C51864) && (v33 & 1) != 0 )
            v34 = v33 | 0x8000000000000000uLL;
          *(_QWORD *)v11 = v34;
          MiWritePteShadow(v11, v34);
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          *(_QWORD *)v11 = v33;
LABEL_25:
          if ( v10 != ((v43 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList((__int64)&v44);
            if ( v10 )
            {
              MiUnlockPageTableInternal(v40, v10);
              v10 = 0LL;
            }
          }
          v9 = 1;
          v38 = -1073741755;
          v13 = v11 - 8;
          v37 = 1;
          v11 = v41;
          updated = 4;
          goto LABEL_15;
        }
        v31 = v33;
        if ( (v33 & 1) != 0 )
          v31 = v33 | 0x8000000000000000uLL;
      }
      *(_QWORD *)v11 = v31;
      goto LABEL_25;
    }
    if ( (v15 & 0x800) == 0 )
    {
      if ( ((v15 >> 5) & 0x1F) == v9 )
      {
        v29 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        v39 = v29;
        goto LABEL_73;
      }
      goto LABEL_25;
    }
    v35 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
    if ( !v35 )
      goto LABEL_14;
    if ( v35 != 2 )
      goto LABEL_25;
LABEL_15:
    v12 = v40;
  }
  while ( v11 <= v13 );
  v14 = v36;
LABEL_17:
  MiFlushTbList((__int64)&v44);
  if ( v10 )
    MiUnlockPageTableInternal(v12, v10);
  MiUnlockWorkingSetShared(v12, v14);
  return v38;
}
