/*
 * XREFs of MiAddRangeToCrashDump @ 0x140538028
 * Callers:
 *     MiAddRangeToCrashDump @ 0x140538028 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MiIsPageSecured @ 0x140232F18 (MiIsPageSecured.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiAddRangeToCrashDump @ 0x140538028 (MiAddRangeToCrashDump.c)
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
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int SystemRegionType; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r14
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  int v36; // eax
  __int64 v38; // [rsp+78h] [rbp+10h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h]

  v39 = a4;
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
    v38 = v10;
    v11 = v10;
    v12 = v10 & 1;
    if ( (v10 & 1) != 0 )
    {
      v13 = v10;
      if ( MiPteInShadowRange((unsigned __int64)&v38) && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF)) & 0x20) != 0 )
              v13 |= 0x20uLL;
          }
        }
        v11 = v38;
      }
      v15 = (v13 >> 12) & 0xFFFFFFFFFLL;
      if ( v15 == MiState[(int)v5 + 1185] || v15 == MiState[(int)v5 + 1181] )
        goto LABEL_73;
    }
    else
    {
      if ( (_DWORD)v5 )
        goto LABEL_73;
      v15 = 0LL;
    }
    if ( (_DWORD)v5 == 3 )
    {
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_73;
      v16 = v6;
      v17 = 4LL;
      do
      {
        v16 = (__int64)(v16 << 25) >> 16;
        --v17;
      }
      while ( v17 );
      SystemRegionType = MiGetSystemRegionType(v16);
      v19 = v39;
      if ( *(_DWORD *)(v39 + 80) == 1 && SystemRegionType == 1 )
        goto LABEL_73;
      if ( SystemRegionType == 8 )
        goto LABEL_73;
    }
    else
    {
      v19 = v39;
    }
    if ( (_DWORD)v5 )
    {
      if ( (v11 & 0x80u) != 0LL )
      {
        if ( ((*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          goto LABEL_73;
        v20 = (__int64)((v6 << 25) + 0x10000000) >> 16;
        v21 = (__int64)(v6 << 25) >> 16;
        if ( (int)v5 > 0 )
        {
          v22 = v5;
          do
          {
            v21 = (__int64)(v21 << 25) >> 16;
            v20 = v20 << 25 >> 16;
            --v22;
          }
          while ( v22 );
        }
        v23 = *(_QWORD *)(v19 + 72);
        v24 = *(_QWORD *)(v19 + 64) & 0xFFFFFFFFFFFFF000uLL;
        v25 = 1LL;
        v26 = v20 - 1;
        if ( v21 >= v24 )
          v24 = v21;
        v27 = v23 | 0xFFF;
        if ( v26 <= v27 )
          v27 = v26;
        v28 = (v27 - v24 + 1) >> 12;
        goto LABEL_70;
      }
      if ( ((*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v29 = (*a1)(a1, v15, 1LL);
        if ( v29 < 0 && v9 >= 0 )
          v9 = v29;
      }
      v30 = MiAddRangeToCrashDump(
              (_DWORD)a1,
              (__int64)(v6 << 25) >> 16,
              (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
              v39,
              (int)v5 - 1);
      if ( v30 < 0 && v9 >= 0 )
        v9 = v30;
    }
    else
    {
      if ( !v12 )
      {
        if ( (v11 & 0x400) != 0 || (v11 & 0x800) == 0 )
          goto LABEL_73;
        v31 = v11;
        if ( qword_140C4DF80 && (v11 & 0x10) == 0 )
          v31 = v11 & ~qword_140C4DF80;
        v15 = (v31 >> 12) & 0xFFFFFFFFFLL;
      }
      v32 = (*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
      if ( ((*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v33 = 48 * v15 - 0x58000000000LL;
        if ( !MiIsPageSecured(v33) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v34) == 9 )
          {
            v35 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL;
            if ( v35 <= 0xFFFFF6BFFFFFFF78uLL
              && v35 >= 0xFFFFF68000000000uLL
              && ((*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
               || (*(_BYTE *)(v33 + 34) & 7) != 6
               || (*(_QWORD *)(v33 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL)
              && v15 != qword_140C4E7B0 )
            {
              LODWORD(v32) = 0;
            }
          }
          if ( (_DWORD)v32 == 1 )
          {
            v25 = 2LL;
            v28 = 1LL;
            v24 = v15;
LABEL_70:
            v36 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, unsigned __int64, __int64))*a1)(
                    a1,
                    v24,
                    v28,
                    v25);
            if ( v36 < 0 && v9 >= 0 )
              v9 = v36;
          }
        }
      }
    }
LABEL_73:
    v6 += 8LL;
  }
  return (unsigned int)v9;
}
