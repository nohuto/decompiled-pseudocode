/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x14063DCA4
 * Callers:
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140281120 (CmpFindSecurityCellCacheIndex.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x14034D6E4 (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x1405E7754 (CmGetKCBCacheSecurity.c)
 *     CmpConstructName @ 0x1405E8818 (CmpConstructName.c)
 *     CmpAddSecurityCellToCache @ 0x14063E4C4 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063E868 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14063EAE8 (CmpTraceSecurityChanging.c)
 *     SeCheckForCriticalAceRemoval @ 0x14063EBA0 (SeCheckForCriticalAceRemoval.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     CmpAssignSecurityToKcb @ 0x14069CEF4 (CmpAssignSecurityToKcb.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 CmpSetSecurityDescriptorInfo(__int64 a1, unsigned int *a2, ...)
{
  ULONG_PTR v4; // rsi
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 (__fastcall *v8)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned int *KCBCacheSecurity; // rax
  __int64 v12; // rax
  struct _LOOKASIDE_LIST_EX *v13; // r9
  unsigned int *v14; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // edi
  unsigned int v19; // r14d
  __int64 v20; // r13
  __int64 v21; // rbx
  unsigned int v22; // r14d
  __int64 v23; // rbx
  unsigned int v25; // eax
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v27; // r13
  ULONG v28; // eax
  unsigned int Cell; // eax
  __int64 v30; // rax
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  void *v34; // rax
  _DWORD *v35; // rcx
  __int64 v37; // [rsp+50h] [rbp-89h]
  unsigned int v38; // [rsp+58h] [rbp-81h]
  __int64 v39; // [rsp+60h] [rbp-79h] BYREF
  ULONG_PTR v40; // [rsp+68h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-61h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-59h]
  _DWORD v44[2]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v45; // [rsp+90h] [rbp-49h]
  _DWORD v46[2]; // [rsp+98h] [rbp-41h] BYREF
  size_t Size; // [rsp+A0h] [rbp-39h]
  _DWORD *v48; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD v49[2]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD v50[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v54; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v56; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v58; // [rsp+148h] [rbp+6Fh]
  __int64 v59; // [rsp+150h] [rbp+77h]
  __int64 v60; // [rsp+158h] [rbp+7Fh]
  __int64 v61; // [rsp+160h] [rbp+87h]
  __int64 v62; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v54 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v56 = va_arg(va2, _QWORD);
  v58 = va_arg(va2, _QWORD);
  v59 = va_arg(va2, _QWORD);
  v60 = va_arg(va2, _QWORD);
  v61 = va_arg(va2, _QWORD);
  v62 = va_arg(va2, _QWORD);
  SecurityDescriptor = 0LL;
  v44[1] = 0;
  v46[1] = 0;
  v44[0] = -1;
  v46[0] = -1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 40);
  v7 = 0LL;
  v49[0] = -1;
  v50[0] = -1;
  v49[1] = 0;
  v50[1] = 0;
  DestinationString = 0LL;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  LODWORD(v40) = 0;
  v48 = 0LL;
  LOBYTE(v56) = 0;
  v37 = 0LL;
  v39 = 0LL;
  Privileges = 0LL;
  v42 = v6;
  v9 = v8(v4, v6, v50);
  v45 = v9;
  if ( !v9 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, v9, v6);
  v10 = v60;
  KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(a1, v60);
  v38 = *KCBCacheSecurity;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, *KCBCacheSecurity, v44);
  v14 = (unsigned int *)v12;
  if ( !v12
    || (TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                          PagedPool,
                                                          *(unsigned int *)(v12 + 16),
                                                          0x36384D43u,
                                                          v13),
        (Privileges = TransientPoolWithTag) == 0LL) )
  {
    v18 = -1073741670;
    goto LABEL_19;
  }
  memmove(TransientPoolWithTag, v14 + 5, v14[4]);
  v16 = *a2;
  v17 = v62;
  if ( (v16 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(Privileges, v54, v62, (__int64 *)va1);
    if ( (_BYTE)v56 )
    {
      v34 = (void *)CmpConstructName(a1);
      if ( v34 )
      {
        v18 = -1073741822;
        CmpFreeTransientPoolWithTag(v34, 0x624E4D43u);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        v18 = -1073741822;
      }
      goto LABEL_19;
    }
  }
  SecurityDescriptor = Privileges;
  v18 = RtlpSetSecurityObject(0, *a2, v54, (unsigned int)&SecurityDescriptor, 0, v58, v59, v17);
  if ( v18 >= 0 )
  {
    v18 = CmpTraceSecurityChanging(a1, Privileges, *a2, v54, SecurityDescriptor);
    if ( v18 < 0 )
    {
LABEL_19:
      v23 = 0LL;
      goto LABEL_20;
    }
    LODWORD(Size) = RtlLengthSecurityDescriptor(SecurityDescriptor);
    if ( v10 )
      v19 = 1;
    else
      v19 = v42 >> 31;
    v20 = v61;
    v21 = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v4, v38, 0LL) )
      {
LABEL_76:
        v18 = -1073741443;
LABEL_17:
        v7 = v39;
LABEL_18:
        v5 = 0;
        goto LABEL_19;
      }
      *(_DWORD *)(v20 + 96) = -1;
      *(_QWORD *)(v20 + 88) = 0LL;
      *(_DWORD *)(v20 + 68) = 9;
    }
    else if ( !(unsigned __int8)HvMarkCellDirty(v4, v42, 0LL) || !(unsigned __int8)HvMarkCellDirty(v4, v38, 0LL) )
    {
      goto LABEL_76;
    }
    if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, SecurityDescriptor, v19, &v40, &v48) )
    {
      v22 = v40;
      if ( (_DWORD)v40 == v38 )
      {
        if ( v10 )
        {
          ++v14[3];
          *(_QWORD *)(v20 + 88) = v48;
          *(_DWORD *)(v20 + 96) = v22;
        }
        else
        {
          *(_QWORD *)(v45 + 4) = v21;
          *(_QWORD *)(a1 + 168) = v21;
        }
        goto LABEL_17;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(v4, (unsigned int)v40, 0LL) )
        goto LABEL_76;
      if ( v10 )
      {
        v35 = v48;
        *(_DWORD *)(v20 + 96) = *v48;
        *(_QWORD *)(v20 + 88) = v35;
      }
      else if ( v14[3] == 1
             && (!(unsigned __int8)HvMarkCellDirty(v4, v14[1], 0LL) || !(unsigned __int8)HvMarkCellDirty(
                                                                                           v4,
                                                                                           v14[2],
                                                                                           0LL)) )
      {
        goto LABEL_76;
      }
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, v22, v46);
      if ( !v7 )
      {
        if ( !v10 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, (unsigned int)v40);
        v18 = -1073741670;
        goto LABEL_18;
      }
      if ( !v10 )
      {
        v25 = v14[3];
        if ( v25 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v44);
          v14 = 0LL;
          CmpRemoveSecurityCellList(v4, v38);
          HvFreeCell(v4, v38);
        }
        else
        {
          v14[3] = v25 - 1;
        }
        *(_DWORD *)(v45 + 44) = v40;
      }
      ++*(_DWORD *)(v7 + 12);
      LODWORD(BugCheckParameter4) = v38;
    }
    else
    {
      v28 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      Cell = HvAllocateCell(v4, v28 + 20, v19, (unsigned int)&v39, (__int64)v46);
      BugCheckParameter4 = Cell;
      if ( Cell == -1 )
      {
        v18 = -1073741670;
        goto LABEL_17;
      }
      if ( v60 )
      {
        v7 = v39;
        *(_DWORD *)(v39 + 8) = Cell;
        *(_DWORD *)(v7 + 4) = Cell;
      }
      else
      {
        if ( !(unsigned __int8)HvMarkCellDirty(v4, v14[1], 0LL)
          || v14[3] == 1 && !(unsigned __int8)HvMarkCellDirty(v4, v14[2], 0LL) )
        {
          v7 = v39;
          v18 = -1073741443;
          v5 = BugCheckParameter4;
          goto LABEL_45;
        }
        v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, v14[1], v49);
        v7 = v39;
        v37 = v30;
        if ( !v30 )
        {
          v18 = -1073741670;
          v5 = BugCheckParameter4;
          v23 = 0LL;
LABEL_20:
          if ( SecurityDescriptor )
            ExFreePoolWithTag(SecurityDescriptor, 0);
          goto LABEL_22;
        }
        *(_DWORD *)(v39 + 4) = v14[1];
        *(_DWORD *)(v7 + 8) = v38;
        v14[1] = BugCheckParameter4;
        *(_DWORD *)(v30 + 8) = BugCheckParameter4;
        --v14[3];
      }
      *(_WORD *)v7 = 27507;
      v31 = Size;
      *(_DWORD *)(v7 + 12) = 1;
      *(_DWORD *)(v7 + 16) = v31;
      memmove((void *)(v7 + 20), SecurityDescriptor, v31);
      if ( (int)CmpAddSecurityCellToCache(v4, (unsigned int)BugCheckParameter4, 0LL) < 0 )
      {
        v23 = v37;
        if ( !v60 )
        {
          ++v14[3];
          v14[1] = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v37 + 8) = *(_DWORD *)(v7 + 8);
        }
        v18 = -1073741670;
        v5 = BugCheckParameter4;
        goto LABEL_20;
      }
      if ( !v60 )
      {
        v27 = v45;
        *(_DWORD *)(v45 + 44) = BugCheckParameter4;
        if ( !v14[3] )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v44);
          v14 = 0LL;
          CmpRemoveSecurityCellList(v4, v38);
          HvFreeCell(v4, v38);
        }
LABEL_44:
        *(_QWORD *)(v27 + 4) = v21;
        ++*(_QWORD *)(a1 + 304);
        *(_QWORD *)(a1 + 168) = v21;
        CmpAssignSecurityToKcb(a1, *(unsigned int *)(v27 + 44), 0);
        v5 = 0;
LABEL_45:
        v23 = v37;
        goto LABEL_20;
      }
      LODWORD(v54) = 0;
      if ( !CmpFindSecurityCellCacheIndex(v4, BugCheckParameter4, (__int64 *)va) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, BugCheckParameter4);
      v32 = *(_DWORD **)(*(_QWORD *)(v4 + 1880) + 16LL * (unsigned int)v54 + 8);
      *(_QWORD *)(v20 + 88) = v32;
      *(_DWORD *)(v20 + 96) = *v32;
    }
    if ( v60 )
    {
      v33 = CmAddLogForAction(v20, 1LL);
      v5 = 0;
      v18 = v33;
      if ( v33 < 0 && (*(_DWORD *)(v7 + 12))-- == 1 )
      {
        CmpRemoveSecurityCellList(v4, (unsigned int)BugCheckParameter4);
        HvFreeCell(v4, (unsigned int)BugCheckParameter4);
      }
      goto LABEL_45;
    }
    v27 = v45;
    goto LABEL_44;
  }
  SecurityDescriptor = 0LL;
  v23 = 0LL;
LABEL_22:
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v5 )
    HvFreeCell(v4, v5);
  if ( v23 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v49);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v46);
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v44);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v50);
  return (unsigned int)v18;
}
