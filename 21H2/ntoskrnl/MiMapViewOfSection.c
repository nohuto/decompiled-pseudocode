/*
 * XREFs of MiMapViewOfSection @ 0x140702E10
 * Callers:
 *     MmMapSecureViewOfSection @ 0x140655C70 (MmMapSecureViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1406C0BF8 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407020E0 (NtMapViewOfSection.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiArbitraryCodeBlocked @ 0x1406907CC (MiArbitraryCodeBlocked.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        int a6,
        int a7)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r11
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r10d
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // r8d
  __int16 v33; // ax
  unsigned int v34; // ecx
  int ProtectionMask; // esi
  int v36; // r8d
  char v37; // r11
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v44; // eax
  size_t v45; // r14
  unsigned __int64 *v46; // r15
  int v47; // eax
  unsigned __int64 v48; // rax
  int v49; // eax
  char v50[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *v51; // [rsp+58h] [rbp-F0h] BYREF
  void *Src; // [rsp+60h] [rbp-E8h] BYREF
  int v53; // [rsp+68h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-D8h]
  __int64 v55; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v56; // [rsp+80h] [rbp-C8h]
  unsigned __int64 *v57; // [rsp+88h] [rbp-C0h]
  void **v58; // [rsp+90h] [rbp-B8h]
  __int64 v59; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-A8h]
  size_t v61; // [rsp+A8h] [rbp-A0h]
  ULONG_PTR v62; // [rsp+B0h] [rbp-98h]
  __int64 v63; // [rsp+C0h] [rbp-88h]
  void **v64; // [rsp+D0h] [rbp-78h]
  _BYTE v65[48]; // [rsp+D8h] [rbp-70h] BYREF

  v56 = a4;
  v58 = a3;
  v63 = a2;
  v64 = a3;
  v57 = a5;
  memset(v65, 0, sizeof(v65));
  v51 = 0LL;
  Src = 0LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 88);
  v62 = BugCheckParameter1;
  v53 = 0;
  v59 = a1;
  v13 = MiSectionControlArea(a1);
  v60 = v13;
  v14 = *(_QWORD *)v13;
  v55 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v13 + 56) & 0x400) == 0
      && *(_QWORD *)(a2 + 16) >= 0x10000uLL
      && (*(_WORD *)a3 != (_WORD)v12 || *(_WORD *)a5 != (_WORD)v12) )
    {
      return 3221226016LL;
    }
  }
  if ( !a7
    && ((*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0
     || (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && *(_QWORD *)(v11 + 2240) == v12) )
  {
    return 3221225485LL;
  }
  v50[0] = 1;
  v15 = *(_DWORD *)(a2 + 44);
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( (v15 & 0xF0) == 0 )
      return 3221225485LL;
    v50[0] = v12;
    *(_DWORD *)(a2 + 44) = v15 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 80) != v12 && (*(_DWORD *)(a2 + 60) & 0x2000000) == 0 )
      return 3221225485LL;
    v44 = *(_DWORD *)(a2 + 40);
    if ( (v44 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v44 & 0x20000000) != 0
      && (*a5 != v12
       || (MiFlags & 0x40000) != 0
       || (*(_DWORD *)(v13 + 56) & 0x20000) != 0
       || !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 104))) )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
  }
  else
  {
    v16 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(v10 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v16 | v17) != v16 )
      return 3221225550LL;
    v18 = *(_DWORD *)(a2 + 40);
    if ( (v18 & 0x840000) != 0 || (v18 & 0x20002000) != 0 && (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
      return 3221225485LL;
  }
  v19 = *(_QWORD *)(a2 + 24);
  v20 = *a5 + v19;
  if ( v20 < *a5 )
    return 3221225503LL;
  v21 = *(_QWORD *)(a1 + 48);
  if ( v20 > v21 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v19 )
    *(_QWORD *)(a2 + 24) = v21 - *a5;
  if ( (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 16);
    if ( v22 > 0x10000 && *(_QWORD *)(v13 + 64) )
      v22 = 0x10000LL;
    v23 = *(unsigned int *)a5;
    v24 = v23 & (v22 - 1);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v23 & -(int)v22;
      if ( (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
      {
        v48 = *(_QWORD *)(a2 + 24);
        if ( v48 + v24 < v48 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v48 + v24;
      }
    }
  }
  v25 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v25 <= 0 )
    return 3221225503LL;
  v26 = *(_QWORD *)(a2 + 16);
  if ( ((v26 - 1) & (unsigned __int64)*a3) == 0 )
    goto LABEL_24;
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & -v26);
  v25 = *(_QWORD *)(a2 + 24);
LABEL_24:
  *(_QWORD *)(a2 + 32) = v25;
  v27 = v25;
  if ( (v25 & 0xFFF) == 0 )
    goto LABEL_25;
  v27 = v25 + 4096 - (unsigned int)(v25 & 0xFFF);
  if ( v27 < v25 )
    return 3221225503LL;
  *(_QWORD *)(a2 + 24) = v27;
LABEL_25:
  v28 = *(_DWORD *)(a2 + 72) & 1;
  v29 = (unsigned __int64 *)a3;
  if ( !v28 )
    v29 = (unsigned __int64 *)a2;
  v30 = *(_QWORD *)(a2 + 8);
  if ( *v29 > v30 )
    return 3221225485LL;
  if ( v30 - *v29 + 1 < v27 )
    return (unsigned int)(v28 != 0) - 1073741801;
  v31 = v56;
  if ( v56 > v25 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v25 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v32 = *(_DWORD *)(a2 + 40);
  if ( (v32 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v32 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v32 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 60) & 0x4000000) != 0
    && ((*(_DWORD *)(v13 + 56) & 0x420) != 0
     || (v32 & 0xFFFFDFFF) != 0
     || !v28
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v55) )
  {
    return 3221225485LL;
  }
  v33 = *(_WORD *)(v14 + 12);
  v34 = *(_DWORD *)(a2 + 44);
  if ( v33 < 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v34;
    v33 = *(_WORD *)(v14 + 12);
  }
  if ( (v33 & 0x4000) != 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v34;
  }
  ProtectionMask = MiMakeProtectionMask(v34);
  LODWORD(v55) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v39 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v39 + 2512) & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v36 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v39);
    }
  }
  if ( v39 != BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v65);
    v53 = 1;
    v37 = 0;
  }
  v40 = *(_DWORD *)(v13 + 56);
  if ( (v40 & 0x400) != 0 )
  {
    v41 = MiMapViewOfPhysicalSection(a2, (_DWORD)a3, (_DWORD)a5, ProtectionMask, (__int64)v50);
  }
  else
  {
    if ( (v40 & 0x20) != 0 )
    {
      v51 = *a3;
      Src = v51;
      v45 = *(_QWORD *)(a2 + 24);
      v61 = v45;
      while ( 1 )
      {
        v46 = v57;
        v42 = MiMapViewOfImageSection(v13, a2, (unsigned __int64 *)&v51, v57, a1, a6, ProtectionMask, v37);
        LODWORD(v56) = v42;
        v47 = *(_DWORD *)(a2 + 40);
        if ( (v47 & 0x20000000) == 0 )
          break;
        *(_DWORD *)(a2 + 40) = v47 & 0xDFFFFFFF;
        v49 = MiMapViewOfImageSection(v13, a2, (unsigned __int64 *)&Src, v46, a1, a6, ProtectionMask, 0);
        if ( v42 < 0 )
        {
          v51 = Src;
          v42 = v49;
          break;
        }
        if ( v49 >= 0 )
        {
          memmove(v51, Src, v45);
          MiUnmapViewOfSection((_KPROCESS *)BugCheckParameter1, (unsigned __int64)Src, 0, 0);
          break;
        }
        MiUnmapViewOfSection((_KPROCESS *)BugCheckParameter1, (unsigned __int64)v51, 0, 0);
        v37 = 0;
      }
      if ( v42 >= 0 )
        *v58 = v51;
      goto LABEL_46;
    }
    v41 = MiMapViewOfDataSection(v13, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, v31, (__int64)v50);
  }
  v42 = v41;
LABEL_46:
  if ( v53 )
    KiUnstackDetachProcess((__int64)v65, 0LL);
  return (unsigned int)v42;
}
