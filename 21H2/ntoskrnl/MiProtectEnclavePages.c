/*
 * XREFs of MiProtectEnclavePages @ 0x14054AD70
 * Callers:
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140298214 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeCanChangeEnclavePageProtection @ 0x14051535C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x140515424 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x140515674 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x14054A8DC (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x14054B72C (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F498 (VslDebugProtectSecureProcessMemory.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int8 v29; // al
  unsigned int v30; // edx
  unsigned int v31; // r8d
  _KPROCESS *v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  unsigned __int64 v38; // rbx
  ULONG_PTR v39; // rcx
  struct _LIST_ENTRY *v40; // rdx
  unsigned __int64 v41; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rbx
  int v44; // ebx
  unsigned __int64 v45; // r14
  unsigned __int8 v46; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+44h] [rbp-BCh]
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  _KPROCESS *v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  unsigned __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-60h]
  __int64 *v62; // [rsp+A8h] [rbp-58h]
  _DWORD *v63; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v64; // [rsp+B8h] [rbp-48h]
  _QWORD v65[24]; // [rsp+C0h] [rbp-40h] BYREF

  v56 = a3;
  v63 = a9;
  v64 = a10;
  v14 = a4;
  v62 = a11;
  v57 = a4;
  memset(v65, 0, 0xB8uLL);
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
      if ( (v15 & 2) == 0 || (*(_DWORD *)(v56 + 72) & 1) == 0 )
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
    v48 = 0;
    v58 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v60 = 0xFFFFFFFFLL;
    v24 = 0LL;
    v55 = 0LL;
    v54 = -1LL;
    v51 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    if ( !v22 )
      v20 = a7 & 2 | 4;
    LODWORD(v65[0]) = 1;
    WORD2(v65[0]) = 0;
    v65[2] = 0LL;
    LODWORD(v65[1]) = 20;
    v65[3] = 0LL;
    v49 = v22 != 0 ? 2 : 4;
    ValidPte = MiMakeValidPte(v23, -1LL, v20 | 0x80000000);
    v29 = MiLockWorkingSetShared((__int64)v51, v26, v27, v28);
    v30 = 0;
    v31 = v49;
    v32 = (_KPROCESS *)(v57 & 0xFFFFFFFFFFFFF000uLL);
    v46 = v29;
    v33 = v58;
    v61 = v57 & 0xFFFFFFFFFFFFF000uLL;
    v50 = 0;
    while ( 1 )
    {
      v53 = v32;
      v34 = v23;
      BugCheckParameter1 = v23;
      if ( v23 <= v33 )
        break;
      v44 = v48;
LABEL_86:
      if ( v44 < 0 || (++v30, v50 = v30, v30 >= v31) )
      {
LABEL_90:
        MiFlushEnclaveTb((__int64)v65, (_KPROCESS *)v54, a8);
        if ( v55 )
          MiUnlockPageTableInternal((__int64)v51, v55);
        MiUnlockWorkingSetShared((__int64)v51, v46);
        if ( v44 >= 0 )
        {
          v44 = 0;
          *v63 = MmProtectToValue[(unsigned int)v60];
          v45 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v61;
          *v64 = v61;
          *v62 = v45 + 4096;
        }
        return (unsigned int)v44;
      }
      v24 = v55;
      v32 = (_KPROCESS *)v61;
    }
    while ( 1 )
    {
      if ( (v34 & 0x78) != 0 || v34 == v23 )
        goto LABEL_44;
      if ( MiWorkingSetIsContended((__int64)v51) || KeShouldYieldProcessor() )
        goto LABEL_40;
      if ( v24 )
        break;
LABEL_46:
      MiFlushEnclaveTb((__int64)v65, (_KPROCESS *)v54, a8);
      v54 = -1LL;
      if ( v24 )
        MiUnlockPageTableInternal((__int64)v51, v24);
      v55 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(v56 + 48) >> 12) & 0x3F, v46, 0);
      v34 = BugCheckParameter1;
LABEL_49:
      if ( v50 )
      {
        if ( v50 == v49 - 1 )
        {
          v52 = MI_READ_PTE_LOCK_FREE(v34);
          v41 = v52;
          if ( MiPteInShadowRange((unsigned __int64)&v52)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v52 >> 3) & 0x1FF)) & 0x20) != 0 )
                v41 |= 0x20uLL;
            }
          }
          v43 = (v41 >> 12) & 0xFFFFFFFFFLL;
          MiUpdateEnclavePfnProtection(48 * v43 - 0x58000000000LL, v20);
          ValidPte = (v43 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
          MiWriteEnclavePte(BugCheckParameter1, 0);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v52, ValidPte) )
            MiInsertTbFlushEntry((__int64)v65, (unsigned __int64)v53, 1LL, 0);
          v54 = (__int64)v53;
        }
        else if ( v50 == 1 )
        {
          v48 = KeCanChangeEnclavePageProtection();
          if ( v48 < 0 )
          {
            v33 = v58;
            v44 = -1073741800;
            v48 = -1073741800;
LABEL_85:
            v31 = v49;
            v30 = v50;
            goto LABEL_86;
          }
        }
        else
        {
          KeChangeEnclavePageProtection((__int64)v53, v21);
          KeTrackEnclaveTbFlush();
        }
        goto LABEL_80;
      }
      v52 = MI_READ_PTE_LOCK_FREE(v34);
      v38 = v52;
      if ( (v52 & 1) == 0 )
      {
        v44 = -1073741800;
        goto LABEL_90;
      }
      v39 = BugCheckParameter1;
      if ( BugCheckParameter1 == v23 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v52)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
        {
          v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v40 )
          {
            if ( ((__int64)*(&v40->Flink + (((unsigned __int64)&v52 >> 3) & 0x1FF)) & 0x20) != 0 )
              v38 |= 0x20uLL;
          }
        }
        v60 = (*(_DWORD *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
LABEL_80:
        v39 = BugCheckParameter1;
      }
      v53 = (_KPROCESS *)((char *)v53 + 4096);
      v34 = v39 + 8;
      v33 = v58;
      BugCheckParameter1 = v34;
      if ( v34 > v58 )
      {
        v44 = v48;
        goto LABEL_85;
      }
      v24 = v55;
    }
    if ( (unsigned int)MiPageTableLockIsContended((__int64)v51, v24) )
    {
LABEL_40:
      MiFlushEnclaveTb((__int64)v65, (_KPROCESS *)v54, a8);
      v54 = -1LL;
      if ( v24 )
      {
        MiUnlockPageTableInternal((__int64)v51, v24);
        v24 = 0LL;
        v55 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v51, v46);
      MiLockWorkingSetShared((__int64)v51, v35, v36, v37);
    }
    v34 = BugCheckParameter1;
LABEL_44:
    if ( v24 && (v34 & 0xFFF) != 0 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v16 = *(_QWORD *)(a3 + 72);
  v17 = a5 - v14 + 1;
  v59 = v17;
  if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
  {
    *a9 = 4;
    result = 0LL;
LABEL_7:
    v19 = v62;
    *a10 = v14;
    *v19 = v17;
    return result;
  }
  result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v57, (unsigned int)&v59, a6, (__int64)a9);
  if ( (int)result >= 0 )
  {
    v17 = v59;
    v14 = v57;
    goto LABEL_7;
  }
  return result;
}
