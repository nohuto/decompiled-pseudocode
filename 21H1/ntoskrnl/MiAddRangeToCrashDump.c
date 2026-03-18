/*
 * XREFs of MiAddRangeToCrashDump @ 0x1405322C8
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1405322C8 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140532AB8 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiIsPageSecured @ 0x140302D58 (MiIsPageSecured.c)
 *     KdCheckForDebugBreak @ 0x140381378 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MiAddRangeToCrashDump @ 0x1405322C8 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int v9; // esi
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int SystemRegionType; // eax
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r14
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 v39; // [rsp+78h] [rbp+10h] BYREF
  __int64 v40; // [rsp+88h] [rbp+20h]

  v40 = a4;
  v5 = a5;
  v6 = a2;
  v7 = a3;
  v9 = 0;
  if ( a2 < *(_QWORD *)(a4 + 16LL * (int)a5) )
    v6 = *(_QWORD *)(a4 + 16LL * (int)a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * (int)a5 + 8) )
    v7 = *(_QWORD *)(a4 + 16LL * (int)a5 + 8);
  while ( v6 <= v7 )
  {
    if ( (_DWORD)v5 == 3 )
      KdCheckForDebugBreak();
    v10 = MI_READ_PTE_LOCK_FREE(v6);
    v39 = v10;
    v12 = v10;
    v13 = v10 & 1;
    if ( (v10 & 1) != 0 )
    {
      v14 = v10;
      if ( MiPteInShadowRange((unsigned __int64)&v39) && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v39 >> 3) & 0x1FF)) & 0x20) != 0 )
              v14 |= 0x20uLL;
          }
        }
        v12 = v39;
      }
      v16 = (v14 >> 12) & 0xFFFFFFFFFLL;
      if ( v16 == MiState[(int)v5 + 1185] || v16 == MiState[(int)v5 + 1181] )
        goto LABEL_73;
    }
    else
    {
      v15 = 0LL;
      if ( (_DWORD)v5 )
        goto LABEL_73;
      v16 = 0LL;
    }
    if ( (_DWORD)v5 == 3 )
    {
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_73;
      v17 = v6;
      v18 = 4LL;
      do
      {
        v17 = (__int64)(v17 << 25) >> 16;
        --v18;
      }
      while ( v18 );
      SystemRegionType = MiGetSystemRegionType(v17);
      v20 = v40;
      if ( *(_DWORD *)(v40 + 80) == 1 && SystemRegionType == 1 )
        goto LABEL_73;
      if ( SystemRegionType == 8 )
        goto LABEL_73;
    }
    else
    {
      v20 = v40;
    }
    if ( (_DWORD)v5 )
    {
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( ((*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          goto LABEL_73;
        v21 = (__int64)((v6 << 25) + 0x10000000) >> 16;
        v22 = (__int64)(v6 << 25) >> 16;
        if ( (int)v5 > 0 )
        {
          v23 = v5;
          do
          {
            v22 = (__int64)(v22 << 25) >> 16;
            v21 = v21 << 25 >> 16;
            --v23;
          }
          while ( v23 );
        }
        v24 = *(_QWORD *)(v20 + 72);
        v25 = *(_QWORD *)(v20 + 64) & 0xFFFFFFFFFFFFF000uLL;
        v26 = 1LL;
        v27 = v21 - 1;
        if ( v22 >= v25 )
          v25 = v22;
        v28 = v24 | 0xFFF;
        if ( v27 <= v28 )
          v28 = v27;
        v29 = (v28 - v25 + 1) >> 12;
        goto LABEL_70;
      }
      if ( ((*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v30 = (*a1)(a1, v16, 1LL);
        if ( v30 < 0 && v9 >= 0 )
          v9 = v30;
      }
      v31 = MiAddRangeToCrashDump(
              (_DWORD)a1,
              (__int64)(v6 << 25) >> 16,
              (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
              v40,
              (int)v5 - 1);
      if ( v31 < 0 && v9 >= 0 )
        v9 = v31;
    }
    else
    {
      if ( !v13 )
      {
        if ( (v12 & 0x400) != 0 || (v12 & 0x800) == 0 )
          goto LABEL_73;
        v32 = v12;
        if ( qword_140C4DE80 && (v12 & 0x10) == 0 )
          v32 = v12 & ~qword_140C4DE80;
        v16 = (v32 >> 12) & 0xFFFFFFFFFLL;
      }
      v33 = (*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
      if ( ((*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v34 = 48 * v16 - 0x58000000000LL;
        if ( !MiIsPageSecured(v34, (__int64)Flink, v15) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v35) == 9 )
          {
            v36 = *(_QWORD *)(v34 + 8) | 0x8000000000000000uLL;
            if ( v36 <= 0xFFFFF6BFFFFFFF78uLL
              && v36 >= 0xFFFFF68000000000uLL
              && ((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
               || (*(_BYTE *)(v34 + 34) & 7) != 6
               || (*(_QWORD *)(v34 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL)
              && v16 != qword_140C4E6B0 )
            {
              LODWORD(v33) = 0;
            }
          }
          if ( (_DWORD)v33 == 1 )
          {
            v26 = 2LL;
            v29 = 1LL;
            v25 = v16;
LABEL_70:
            v37 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, unsigned __int64, __int64))*a1)(
                    a1,
                    v25,
                    v29,
                    v26);
            if ( v37 < 0 && v9 >= 0 )
              v9 = v37;
          }
        }
      }
    }
LABEL_73:
    v6 += 8LL;
  }
  return (unsigned int)v9;
}
