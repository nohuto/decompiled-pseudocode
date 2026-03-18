/*
 * XREFs of MiTerminateWsle @ 0x140234900
 * Callers:
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiRemoveSystemImagePage @ 0x14034F2E8 (MiRemoveSystemImagePage.c)
 *     MiDeleteEmptyPageTable @ 0x1403EED30 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x1402440F0 (MiRemoveWsle.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x1403018B0 (MiCountWslesInPageTable.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403309C0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // edi
  int v6; // r14d
  BOOL v7; // r15d
  int v8; // esi
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  _KPROCESS *Process; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 WsleContents; // bl
  __int64 v21; // r12
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _LIST_ENTRY *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  _KPROCESS *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _LIST_ENTRY *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 *v46; // rbx
  char v47; // cl
  int v48; // r8d
  unsigned __int64 v51; // [rsp+40h] [rbp-78h] BYREF
  int *v52; // [rsp+48h] [rbp-70h]
  _DWORD v53[8]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 1;
  v52 = a4;
  v6 = 10;
  v7 = 1;
  v8 = 0;
  v9 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v9;
  v11 = MiPteInShadowRange(v9);
  v15 = v11;
  if ( v11
    && (unsigned int)MiPteHasShadow(Process, v12, v11, v14)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      v18 = v10 | 0x20;
      Process = (_KPROCESS *)(unsigned __int8)v17;
      LOBYTE(Process) = v17 & 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v10;
      v10 = v18;
      if ( (v17 & 0x42) != 0 )
        v10 = v18 | 0x42;
    }
  }
  v19 = (_BYTE *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v4 = 0;
    WsleContents = (*v19 >> 1) & 7;
LABEL_14:
    v21 = a1;
    goto LABEL_15;
  }
  v23 = *v9;
  v6 = 10 - ((a3 & 2) != 0);
  if ( (_DWORD)v15
    && (unsigned int)MiPteHasShadow(Process, v23, v15, v19)
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = v23 | 0x20;
      v26 = *((_QWORD *)&v24->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      if ( (v26 & 0x20) == 0 )
        v25 = v23;
      v23 = v25;
      if ( (v26 & 0x42) != 0 )
        v23 = v25 | 0x42;
    }
  }
  WsleContents = HIBYTE(v23) & 0xF | (16 * ((v23 >> 60) & 7));
  v7 = MI_PFN_IS_PROTO(v19) == 0;
  if ( (WsleContents & 0xF) != 8 )
    goto LABEL_14;
  v21 = a1;
  MiUnlockWsle(a1, a2, v27);
  WsleContents = MiGetWsleContents(v28, a2);
LABEL_15:
  if ( (a3 & 3) == 0 )
  {
    if ( v4 )
    {
      if ( (unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v9, ZeroPte, v15) )
        v8 = 1;
    }
    else
    {
      if ( !(unsigned int)MiEvictPageTableLock(v21, v9, ZeroPte, 0LL) )
      {
        *v52 = 0;
        return 0LL;
      }
      v8 = 1;
    }
  }
  MiRemoveWsle(v21, a2, 1, WsleContents, v6, v7);
  if ( v4 )
  {
    v29 = (a2 >> 18) & 0x3FFFFFF8;
    v30 = (unsigned int)(v29 + 0x40000000);
    v31 = *(_QWORD *)(v29 - 0x904C0000000LL);
    if ( (unsigned int)MiPteInShadowRange(v29 - 0x904C0000000LL)
      && (unsigned int)MiPteHasShadow(v33, v32, v34, v35)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v37 = v31 | 0x20;
        v38 = *((_QWORD *)&v36->Flink + ((v30 >> 3) & 0x1FF));
        if ( (v38 & 0x20) == 0 )
          v37 = v31;
        v31 = v37;
        if ( (v38 & 0x42) != 0 )
          v31 = v37 | 0x42;
      }
    }
    v51 = v31;
    if ( (unsigned int)MiPteInShadowRange(&v51)
      && (unsigned int)MiPteHasShadow(v40, v39, v41, v42)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v40 = KeGetCurrentThread()->ApcState.Process;
      v43 = v40[1].ProcessListEntry.Flink;
      if ( v43 )
      {
        v44 = *((_QWORD *)&v43->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF));
        v45 = v31 | 0x20;
        v40 = (_KPROCESS *)(unsigned __int8)v44;
        LOBYTE(v40) = v44 & 0x20;
        if ( (v44 & 0x20) == 0 )
          v45 = v31;
        v31 = v45;
        if ( (v44 & 0x42) != 0 )
          v31 = v45 | 0x42;
      }
    }
    v46 = (unsigned __int64 *)(48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v46 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v40, a2, v53);
      v47 = 8;
      while ( 1 )
      {
        v48 = v53[(unsigned __int8)--v47];
        if ( v48 )
          break;
        if ( !v47 )
          goto LABEL_61;
      }
      *v46 = *v46 & 0xFFFFFFFFFFFE000FuLL | (16 * (v48 & 0x3FF | ((unsigned __int64)(v47 & 7) << 10)));
    }
  }
LABEL_61:
  *v52 = v8;
  return 1LL;
}
