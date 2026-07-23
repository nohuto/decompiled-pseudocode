/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x140661B1C
 * Callers:
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     CmpRemoveSecurityCellList @ 0x14024BB74 (CmpRemoveSecurityCellList.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1403F090C (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1403F094C (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1403F09A0 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1403F8690 (RtlLengthSecurityDescriptorStrict.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmpAddSecurityCellToCache @ 0x140662770 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406629A8 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x140662C28 (CmpTraceSecurityChanging.c)
 *     SeSetSecurityDescriptorInfoEx2 @ 0x140662CDC (SeSetSecurityDescriptorInfoEx2.c)
 *     SeCheckForCriticalAceRemoval @ 0x140663290 (SeCheckForCriticalAceRemoval.c)
 *     CmGetKCBCacheSecurity @ 0x1406DECD0 (CmGetKCBCacheSecurity.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     NtWaitLowEventPair @ 0x140726420 (NtWaitLowEventPair.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, _DWORD *a2, ...)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // r15
  ULONG_PTR v4; // r14
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v7; // rax
  __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 (__fastcall *v11)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v12; // rax
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // r13
  int v15; // esi
  __int64 v16; // rbx
  PVOID TransientPoolWithTag; // rax
  int v18; // ecx
  UNICODE_STRING *p_DestinationString; // rbx
  unsigned int v20; // r15d
  __int64 v21; // r13
  __int64 v22; // rbx
  ULONG_PTR v23; // r12
  ULONG_PTR v24; // rdi
  _DWORD *v25; // rcx
  __int64 v26; // rax
  bool v27; // di
  bool v28; // zf
  int v29; // eax
  unsigned int Cell; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  bool v33; // di
  _DWORD *v34; // rcx
  __int64 v35; // rax
  bool v36; // bl
  char *BugCheckParameter4; // [rsp+28h] [rbp-B1h]
  unsigned int *v38; // [rsp+48h] [rbp-91h]
  __int64 v39; // [rsp+50h] [rbp-89h]
  unsigned int v40; // [rsp+58h] [rbp-81h]
  __int64 v41; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v43[3]; // [rsp+74h] [rbp-65h]
  unsigned int v44; // [rsp+80h] [rbp-59h]
  ULONG_PTR v45; // [rsp+84h] [rbp-55h] BYREF
  int v46; // [rsp+8Ch] [rbp-4Dh]
  _DWORD v47[2]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v48; // [rsp+98h] [rbp-41h]
  size_t Size; // [rsp+A0h] [rbp-39h]
  _DWORD *v50; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD v51[2]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD v52[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  char v54; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v57; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v59; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v61; // [rsp+148h] [rbp+6Fh]
  __int64 v62; // [rsp+150h] [rbp+77h]
  __int64 v63; // [rsp+158h] [rbp+7Fh]
  __int64 v64; // [rsp+160h] [rbp+87h]
  __int64 v65; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v57 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v59 = va_arg(va2, _QWORD);
  v61 = va_arg(va2, _QWORD);
  v62 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _QWORD);
  P = 0LL;
  v2 = a1;
  v47[1] = 0;
  v46 = 0;
  v47[0] = -1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v51[0] = -1;
  v52[0] = -1;
  v51[1] = 0;
  v52[1] = 0;
  DestinationString = 0LL;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v45 = 0xFFFFFFFF00000000uLL;
  v40 = 0;
  v50 = 0LL;
  LOBYTE(v59) = 0;
  v39 = 0LL;
  v41 = 0LL;
  *(_QWORD *)&v43[1] = 0LL;
  v44 = v5;
  v7 = v6(v4, v5, v52);
  v48 = v7;
  if ( !v7 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, v7, v5);
  v9 = v63;
  v10 = *(_DWORD *)CmGetKCBCacheSecurity(v2, v63);
  v11 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v43[0] = v10;
  v12 = v11(v4, v10, v47);
  v38 = (unsigned int *)v12;
  v14 = v12;
  if ( !v12
    || (TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, *(unsigned int *)(v12 + 16), 0x36384D43u, v13),
        (*(_QWORD *)&v43[1] = TransientPoolWithTag) == 0LL) )
  {
    v15 = -1073741670;
    goto LABEL_5;
  }
  memmove(TransientPoolWithTag, (const void *)(v14 + 20), *(unsigned int *)(v14 + 16));
  v18 = (int)a2;
  if ( (*a2 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(*(_QWORD *)&v43[1], v57, v65, (__int64 *)va1);
    if ( (_BYTE)v59 )
    {
      p_DestinationString = (UNICODE_STRING *)CmpConstructName(v2);
      if ( p_DestinationString )
      {
        LOBYTE(v59) = 1;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        p_DestinationString = &DestinationString;
        LOBYTE(v59) = 0;
      }
      BugCheckParameter4 = &v54;
      v15 = NtWaitLowEventPair(p_DestinationString);
      if ( (_BYTE)v59 )
        CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
      if ( v15 < 0 )
        goto LABEL_5;
      LODWORD(v2) = a1;
    }
  }
  P = *(PVOID *)&v43[1];
  v15 = SeSetSecurityDescriptorInfoEx2(
          v18,
          (_DWORD)a2,
          v57,
          (unsigned int)&P,
          (_DWORD)BugCheckParameter4,
          v61,
          v62,
          v65);
  if ( v15 >= 0 )
  {
    v15 = CmpTraceSecurityChanging(v2, v43[1], *a2, v57, (__int64)P);
    if ( v15 >= 0 )
    {
      LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
      if ( v9 )
        v20 = 1;
      else
        v20 = v44 >> 31;
      v21 = v64;
      v22 = MEMORY[0xFFFFF78000000014];
      if ( v9 )
      {
        if ( !(unsigned __int8)HvMarkCellDirty(v4, v10, 0LL) )
          goto LABEL_38;
        *(_DWORD *)(v21 + 96) = -1;
        *(_QWORD *)(v21 + 88) = 0LL;
        *(_DWORD *)(v21 + 68) = 9;
        *(_BYTE *)(v21 + 100) = 0;
      }
      else if ( !(unsigned __int8)HvMarkCellDirty(v4, v44, 0LL) || !(unsigned __int8)HvMarkCellDirty(v4, v10, 0LL) )
      {
        goto LABEL_38;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, P, v20, &v45, &v50) )
      {
        v23 = (unsigned int)v45;
        LODWORD(v24) = v43[0];
        if ( (_DWORD)v45 == v43[0] )
        {
          if ( v63 )
          {
            v15 = CmpKeySecurityIncrementReferenceCount((__int64)v38, v4, v45, 0);
            if ( v15 >= 0 )
            {
              *(_QWORD *)(v21 + 88) = v50;
              *(_DWORD *)(v21 + 96) = v23;
            }
          }
          else
          {
            *(_QWORD *)(v48 + 4) = v22;
            *(_QWORD *)(a1 + 168) = v22;
          }
          goto LABEL_39;
        }
        if ( !(unsigned __int8)HvMarkCellDirty(v4, (unsigned int)v45, 0LL) )
          goto LABEL_38;
        if ( v63 )
        {
          v25 = v50;
          *(_DWORD *)(v21 + 96) = *v50;
          *(_QWORD *)(v21 + 88) = v25;
        }
        else
        {
          v15 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v38, v4, v24);
          if ( v15 < 0 )
            goto LABEL_39;
        }
        v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v4 + 8))(v4, (unsigned int)v23, (char *)&v45 + 4);
        v3 = v26;
        if ( !v26 )
        {
          if ( !v63 )
            KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, v23);
          v15 = -1073741670;
          goto LABEL_40;
        }
        v15 = CmpKeySecurityIncrementReferenceCount(v26, v4, v23, 0);
        if ( v15 < 0 )
        {
LABEL_40:
          v14 = (__int64)v38;
LABEL_41:
          v16 = v39;
          goto LABEL_6;
        }
        if ( v63 )
          goto LABEL_83;
        v27 = CmpKeySecurityDecrementReferenceCount((__int64)v38, v4, v24);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v47);
        v38 = 0LL;
        v28 = !v27;
        LODWORD(v24) = v43[0];
        if ( !v28 )
        {
          CmpRemoveSecurityCellList(v4, v43[0]);
          HvFreeCell(v4, (unsigned int)v24);
        }
        *(_DWORD *)(v48 + 44) = v23;
LABEL_80:
        if ( !v63 )
        {
          v14 = (__int64)v38;
LABEL_82:
          v35 = v48;
          *(_QWORD *)(v48 + 4) = v22;
          ++*(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 168) = v22;
          CmpAssignSecurityToKcb(a1, *(unsigned int *)(v35 + 44), 0LL, 1, 0);
          v40 = 0;
          goto LABEL_41;
        }
LABEL_83:
        v40 = 0;
        v15 = CmAddLogForAction(v21, 1);
        if ( v15 < 0 )
        {
          v36 = CmpKeySecurityDecrementReferenceCount(v3, v4, v24);
          (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v45 + 4);
          v3 = 0LL;
          v40 = 0;
          if ( v36 )
          {
            CmpRemoveSecurityCellList(v4, (unsigned int)v24);
            HvFreeCell(v4, (unsigned int)v24);
            v40 = 0;
          }
        }
        goto LABEL_40;
      }
      v29 = RtlLengthSecurityDescriptorStrict();
      Cell = HvAllocateCell(v4, v29 + 20, v20, (unsigned int)&v41, (__int64)&v45 + 4);
      v24 = Cell;
      if ( Cell == -1 )
      {
        v15 = -1073741670;
        goto LABEL_39;
      }
      v40 = Cell;
      if ( v63 )
      {
        v3 = v41;
        *(_DWORD *)(v41 + 8) = Cell;
        *(_DWORD *)(v3 + 4) = Cell;
LABEL_72:
        *(_WORD *)v3 = 27507;
        v32 = Size;
        *(_DWORD *)(v3 + 12) = 1;
        *(_DWORD *)(v3 + 16) = v32;
        memmove((void *)(v3 + 20), P, v32);
        v15 = CmpAddSecurityCellToCache(v4, (unsigned int)v24, 0LL);
        if ( v15 < 0 )
        {
          v14 = (__int64)v38;
          v16 = v39;
          if ( !v63 )
          {
            v38[1] = *(_DWORD *)(v3 + 4);
            *(_DWORD *)(v39 + 8) = *(_DWORD *)(v3 + 8);
          }
          goto LABEL_6;
        }
        if ( !v63 )
        {
          *(_DWORD *)(v48 + 44) = v24;
          v33 = CmpKeySecurityDecrementReferenceCount((__int64)v38, v4, v10);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v47);
          v14 = 0LL;
          if ( v33 )
          {
            CmpRemoveSecurityCellList(v4, v10);
            HvFreeCell(v4, v10);
          }
          goto LABEL_82;
        }
        LODWORD(v57) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v4, v24, (__int64 *)va) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v24);
        v34 = *(_DWORD **)(*(_QWORD *)(v4 + 1880) + 16LL * (unsigned int)v57 + 8);
        *(_QWORD *)(v21 + 88) = v34;
        *(_DWORD *)(v21 + 96) = *v34;
        goto LABEL_80;
      }
      if ( (unsigned __int8)HvMarkCellDirty(v4, v38[1], 0LL) )
      {
        v15 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v38, v4, v10);
        if ( v15 < 0 )
          goto LABEL_39;
        v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, v38[1], v51);
        v3 = v41;
        v39 = v31;
        if ( !v31 )
        {
          v14 = (__int64)v38;
          v15 = -1073741670;
          v16 = 0LL;
LABEL_6:
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_8;
        }
        *(_DWORD *)(v41 + 4) = v38[1];
        *(_DWORD *)(v3 + 8) = v10;
        v38[1] = v24;
        *(_DWORD *)(v31 + 8) = v24;
        goto LABEL_72;
      }
LABEL_38:
      v15 = -1073741443;
LABEL_39:
      v3 = v41;
      goto LABEL_40;
    }
LABEL_5:
    v16 = 0LL;
    goto LABEL_6;
  }
  P = 0LL;
  v16 = 0LL;
LABEL_8:
  if ( *(_QWORD *)&v43[1] )
    CmSiFreeMemory(*(PPRIVILEGE_SET *)&v43[1]);
  if ( v40 )
    HvFreeCell(v4, v40);
  if ( v16 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v51);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v45 + 4);
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v47);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v52);
  return (unsigned int)v15;
}
