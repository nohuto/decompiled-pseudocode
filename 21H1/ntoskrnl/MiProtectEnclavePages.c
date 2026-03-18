/*
 * XREFs of MiProtectEnclavePages @ 0x140545010
 * Callers:
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402BBEA4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeCanChangeEnclavePageProtection @ 0x14050F65C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14050F724 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x14050F974 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x140544B7C (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x1405459CC (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088AF28 (VslDebugProtectSecureProcessMemory.c)
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
  __int64 v32; // r8
  __int64 v33; // r8
  unsigned __int64 v34; // rbx
  ULONG_PTR v35; // rcx
  struct _LIST_ENTRY *v36; // rdx
  unsigned __int64 v37; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v39; // rbx
  int v40; // ebx
  __int64 v41; // r8
  unsigned __int64 v42; // r14
  unsigned __int8 v43; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh]
  unsigned int v47; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  _KPROCESS *v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  unsigned __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 *v59; // [rsp+A8h] [rbp-58h]
  _DWORD *v60; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v61; // [rsp+B8h] [rbp-48h]
  _QWORD v62[24]; // [rsp+C0h] [rbp-40h] BYREF

  v53 = a3;
  v60 = a9;
  v61 = a10;
  v14 = a4;
  v59 = a11;
  v54 = a4;
  memset(v62, 0, 0xB8uLL);
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
      if ( (v15 & 2) == 0 || (*(_DWORD *)(v53 + 72) & 1) == 0 )
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
    v45 = 0;
    v55 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v57 = 0xFFFFFFFFLL;
    v24 = 0LL;
    v52 = 0LL;
    v51 = -1LL;
    v48 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    if ( !v22 )
      v20 = a7 & 2 | 4;
    LODWORD(v62[0]) = 1;
    WORD2(v62[0]) = 0;
    v62[2] = 0LL;
    LODWORD(v62[1]) = 20;
    v62[3] = 0LL;
    v46 = v22 != 0 ? 2 : 4;
    ValidPte = MiMakeValidPte(v23, -1LL, v20 | 0x80000000, 0x80000000LL);
    v26 = MiLockWorkingSetShared((__int64)v48);
    v27 = 0;
    v28 = v46;
    v29 = (_KPROCESS *)(v54 & 0xFFFFFFFFFFFFF000uLL);
    v43 = v26;
    v30 = v55;
    v58 = v54 & 0xFFFFFFFFFFFFF000uLL;
    v47 = 0;
    while ( 1 )
    {
      v50 = v29;
      v31 = v23;
      BugCheckParameter1 = v23;
      if ( v23 <= v30 )
        break;
      v40 = v45;
LABEL_86:
      if ( v40 < 0 || (++v27, v47 = v27, v27 >= v28) )
      {
LABEL_90:
        MiFlushEnclaveTb((__int64)v62, (_KPROCESS *)v51, a8);
        if ( v52 )
          MiUnlockPageTableInternal((__int64)v48, v52, v41);
        MiUnlockWorkingSetShared((__int64)v48, v43);
        if ( v40 >= 0 )
        {
          v40 = 0;
          *v60 = MmProtectToValue[(unsigned int)v57];
          v42 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v58;
          *v61 = v58;
          *v59 = v42 + 4096;
        }
        return (unsigned int)v40;
      }
      v24 = v52;
      v29 = (_KPROCESS *)v58;
    }
    while ( 1 )
    {
      if ( (v31 & 0x78) != 0 || v31 == v23 )
        goto LABEL_44;
      if ( MiWorkingSetIsContended((__int64)v48) || KeShouldYieldProcessor() )
        goto LABEL_40;
      if ( v24 )
        break;
LABEL_46:
      MiFlushEnclaveTb((__int64)v62, (_KPROCESS *)v51, a8);
      v51 = -1LL;
      if ( v24 )
        MiUnlockPageTableInternal((__int64)v48, v24, v33);
      v52 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(v53 + 48) >> 12) & 0x3F, v43, 0);
      v31 = BugCheckParameter1;
LABEL_49:
      if ( v47 )
      {
        if ( v47 == v46 - 1 )
        {
          v49 = MI_READ_PTE_LOCK_FREE(v31);
          v37 = v49;
          if ( MiPteInShadowRange((unsigned __int64)&v49)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v37 & 1) != 0
            && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF)) & 0x20) != 0 )
                v37 |= 0x20uLL;
            }
          }
          v39 = (v37 >> 12) & 0xFFFFFFFFFLL;
          MiUpdateEnclavePfnProtection(48 * v39 - 0x58000000000LL, v20);
          ValidPte = (v39 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
          MiWriteEnclavePte(BugCheckParameter1, 0);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v49, ValidPte) )
            MiInsertTbFlushEntry((__int64)v62, (unsigned __int64)v50, 1LL, 0);
          v51 = (__int64)v50;
        }
        else if ( v47 == 1 )
        {
          v45 = KeCanChangeEnclavePageProtection();
          if ( v45 < 0 )
          {
            v30 = v55;
            v40 = -1073741800;
            v45 = -1073741800;
LABEL_85:
            v28 = v46;
            v27 = v47;
            goto LABEL_86;
          }
        }
        else
        {
          KeChangeEnclavePageProtection((__int64)v50, v21);
          KeTrackEnclaveTbFlush();
        }
        goto LABEL_80;
      }
      v49 = MI_READ_PTE_LOCK_FREE(v31);
      v34 = v49;
      if ( (v49 & 1) == 0 )
      {
        v40 = -1073741800;
        goto LABEL_90;
      }
      v35 = BugCheckParameter1;
      if ( BugCheckParameter1 == v23 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v49)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v36 )
          {
            if ( ((__int64)*(&v36->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF)) & 0x20) != 0 )
              v34 |= 0x20uLL;
          }
        }
        v57 = (*(_DWORD *)(48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
LABEL_80:
        v35 = BugCheckParameter1;
      }
      v50 = (_KPROCESS *)((char *)v50 + 4096);
      v31 = v35 + 8;
      v30 = v55;
      BugCheckParameter1 = v31;
      if ( v31 > v55 )
      {
        v40 = v45;
        goto LABEL_85;
      }
      v24 = v52;
    }
    if ( (unsigned int)MiPageTableLockIsContended((__int64)v48, v24) )
    {
LABEL_40:
      MiFlushEnclaveTb((__int64)v62, (_KPROCESS *)v51, a8);
      v51 = -1LL;
      if ( v24 )
      {
        MiUnlockPageTableInternal((__int64)v48, v24, v32);
        v24 = 0LL;
        v52 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v48, v43);
      MiLockWorkingSetShared((__int64)v48);
    }
    v31 = BugCheckParameter1;
LABEL_44:
    if ( v24 && (v31 & 0xFFF) != 0 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v16 = *(_QWORD *)(a3 + 72);
  v17 = a5 - v14 + 1;
  v56 = v17;
  if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
  {
    *a9 = 4;
    result = 0LL;
LABEL_7:
    v19 = v59;
    *a10 = v14;
    *v19 = v17;
    return result;
  }
  result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v54, (unsigned int)&v56, a6, (__int64)a9);
  if ( (int)result >= 0 )
  {
    v17 = v56;
    v14 = v54;
    goto LABEL_7;
  }
  return result;
}
