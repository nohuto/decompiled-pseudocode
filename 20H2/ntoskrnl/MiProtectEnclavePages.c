/*
 * XREFs of MiProtectEnclavePages @ 0x140549030
 * Callers:
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402528DC (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405135DC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405136A4 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1405138F4 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x140548B9C (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x1405499EC (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140891D98 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        __int64 *a11)
{
  unsigned __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 result; // rax
  __int64 *v19; // rcx
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  int v22; // ecx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int8 v26; // al
  unsigned int v27; // edx
  unsigned int v28; // r8d
  _KPROCESS *v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  ULONG_PTR v33; // rcx
  struct _LIST_ENTRY *v34; // rdx
  unsigned __int64 v35; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v37; // rbx
  int v38; // ebx
  unsigned __int64 v39; // r14
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+44h] [rbp-BCh]
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  _KPROCESS *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  unsigned __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  unsigned __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 *v56; // [rsp+A8h] [rbp-58h]
  _DWORD *v57; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[24]; // [rsp+C0h] [rbp-40h] BYREF

  v50 = a3;
  v57 = a9;
  v58 = a10;
  v14 = a4;
  v56 = a11;
  v51 = a4;
  memset(v59, 0, 0xB8uLL);
  v15 = *(_DWORD *)(a3 + 64);
  if ( (v15 & 1) != 0 )
  {
    v20 = a7;
    LOBYTE(v21) = 0;
    v22 = a8 & 0x20000000;
    if ( (a8 & 0x20000000) != 0 )
    {
      if ( (a8 & 0x90000000) != 0 )
        return 3221225541LL;
    }
    else
    {
      if ( (v15 & 2) == 0 || (*(_DWORD *)(v50 + 72) & 1) == 0 )
        return 3221225496LL;
      if ( a8 < 0 )
      {
        if ( a8 == 0x80000000 && !a6 )
        {
          LOBYTE(v21) = 8;
          goto LABEL_30;
        }
        return 3221225541LL;
      }
      if ( (a8 & 0x10000000) != 0 )
      {
        if ( a8 != 0x10000000 || a6 )
          return 3221225541LL;
        LOBYTE(v21) = 0x80;
        goto LABEL_30;
      }
    }
    if ( a7 > 7 && a7 != 24 || (a7 & 5) == 5 )
      return 3221225541LL;
    if ( a7 == 24 )
    {
      if ( v22 )
        return 3221225541LL;
    }
    else
    {
      v21 = (a7 & 4 | 2) >> 1;
      if ( (a7 & 2) != 0 )
        LOBYTE(v21) = v21 | 4;
    }
LABEL_30:
    v23 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = 0;
    v52 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v54 = 0xFFFFFFFFLL;
    v24 = 0LL;
    v49 = 0LL;
    v48 = -1LL;
    v45 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    if ( !v22 )
      v20 = a7 & 2 | 4;
    LODWORD(v59[0]) = 1;
    WORD2(v59[0]) = 0;
    v59[2] = 0LL;
    LODWORD(v59[1]) = 20;
    v59[3] = 0LL;
    v43 = v22 != 0 ? 2 : 4;
    ValidPte = MiMakeValidPte(v23, -1LL, v20 | 0x80000000, 0x80000000LL);
    v26 = MiLockWorkingSetShared((__int64)v45);
    v27 = 0;
    v28 = v43;
    v29 = (_KPROCESS *)(v51 & 0xFFFFFFFFFFFFF000uLL);
    v40 = v26;
    v30 = v52;
    v55 = v51 & 0xFFFFFFFFFFFFF000uLL;
    v44 = 0;
    while ( 1 )
    {
      v47 = v29;
      v31 = v23;
      BugCheckParameter4 = v23;
      if ( v23 <= v30 )
        break;
      v38 = v42;
LABEL_86:
      if ( v38 < 0 || (++v27, v44 = v27, v27 >= v28) )
      {
LABEL_90:
        MiFlushEnclaveTb((unsigned int *)v59, (_KPROCESS *)v48, a8);
        if ( v49 )
          MiUnlockPageTableInternal((__int64)v45, v49);
        MiUnlockWorkingSetShared((__int64)v45, v40);
        if ( v38 >= 0 )
        {
          v38 = 0;
          *v57 = MmProtectToValue[(unsigned int)v54];
          v39 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v55;
          *v58 = v55;
          *v56 = v39 + 4096;
        }
        return (unsigned int)v38;
      }
      v24 = v49;
      v29 = (_KPROCESS *)v55;
    }
    while ( 1 )
    {
      if ( (v31 & 0x78) != 0 || v31 == v23 )
        goto LABEL_44;
      if ( MiWorkingSetIsContended((__int64)v45) || KeShouldYieldProcessor() )
        goto LABEL_40;
      if ( v24 )
        break;
LABEL_46:
      MiFlushEnclaveTb((unsigned int *)v59, (_KPROCESS *)v48, a8);
      v48 = -1LL;
      if ( v24 )
        MiUnlockPageTableInternal((__int64)v45, v24);
      v49 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(v50 + 48) >> 12) & 0x3F, v40, 0);
      v31 = BugCheckParameter4;
LABEL_49:
      if ( v44 )
      {
        if ( v44 == v43 - 1 )
        {
          v46 = MI_READ_PTE_LOCK_FREE(v31);
          v35 = v46;
          if ( MiPteInShadowRange((unsigned __int64)&v46)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v35 & 1) != 0
            && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF)) & 0x20) != 0 )
                v35 |= 0x20uLL;
            }
          }
          v37 = (v35 >> 12) & 0xFFFFFFFFFLL;
          MiUpdateEnclavePfnProtection(48 * v37 - 0x58000000000LL, v20);
          ValidPte = (v37 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
          MiWriteEnclavePte(BugCheckParameter4, 0);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v46, ValidPte) )
            MiInsertTbFlushEntry((__int64)v59, (unsigned __int64)v47, 1LL, 0);
          v48 = (__int64)v47;
        }
        else if ( v44 == 1 )
        {
          v42 = KeCanChangeEnclavePageProtection();
          if ( v42 < 0 )
          {
            v30 = v52;
            v38 = -1073741800;
            v42 = -1073741800;
LABEL_85:
            v28 = v43;
            v27 = v44;
            goto LABEL_86;
          }
        }
        else
        {
          KeChangeEnclavePageProtection((__int64)v47, v21);
          KeTrackEnclaveTbFlush();
        }
        goto LABEL_80;
      }
      v46 = MI_READ_PTE_LOCK_FREE(v31);
      v32 = v46;
      if ( (v46 & 1) == 0 )
      {
        v38 = -1073741800;
        goto LABEL_90;
      }
      v33 = BugCheckParameter4;
      if ( BugCheckParameter4 == v23 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v46)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v34 )
          {
            if ( ((__int64)*(&v34->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF)) & 0x20) != 0 )
              v32 |= 0x20uLL;
          }
        }
        v54 = (*(_DWORD *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
LABEL_80:
        v33 = BugCheckParameter4;
      }
      v47 = (_KPROCESS *)((char *)v47 + 4096);
      v31 = v33 + 8;
      v30 = v52;
      BugCheckParameter4 = v31;
      if ( v31 > v52 )
      {
        v38 = v42;
        goto LABEL_85;
      }
      v24 = v49;
    }
    if ( (unsigned int)MiPageTableLockIsContended((__int64)v45, v24) )
    {
LABEL_40:
      MiFlushEnclaveTb((unsigned int *)v59, (_KPROCESS *)v48, a8);
      v48 = -1LL;
      if ( v24 )
      {
        MiUnlockPageTableInternal((__int64)v45, v24);
        v24 = 0LL;
        v49 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v45, v40);
      MiLockWorkingSetShared((__int64)v45);
    }
    v31 = BugCheckParameter4;
LABEL_44:
    if ( v24 && (v31 & 0xFFF) != 0 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v16 = *(_QWORD *)(a3 + 72);
  v17 = a5 - v14 + 1;
  v53 = v17;
  if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
  {
    *a9 = 4;
    result = 0LL;
LABEL_7:
    v19 = v56;
    *a10 = v14;
    *v19 = v17;
    return result;
  }
  result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v51, (unsigned int)&v53, a6, (__int64)a9);
  if ( (int)result >= 0 )
  {
    v17 = v53;
    v14 = v51;
    goto LABEL_7;
  }
  return result;
}
