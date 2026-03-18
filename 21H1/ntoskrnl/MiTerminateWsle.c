/*
 * XREFs of MiTerminateWsle @ 0x14028D950
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiRemoveSystemImagePage @ 0x140311AF8 (MiRemoveSystemImagePage.c)
 *     MiDeleteEmptyPageTable @ 0x1403ED9D0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x1402DE480 (MiCountWslesInPageTable.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402F3DC0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
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
  __int64 v14; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 WsleContents; // bl
  __int64 v20; // r12
  unsigned __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _LIST_ENTRY *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  _KPROCESS *v38; // rcx
  struct _LIST_ENTRY *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 *v42; // rbx
  char v43; // cl
  int v44; // r8d
  unsigned __int64 v47; // [rsp+40h] [rbp-78h] BYREF
  int *v48; // [rsp+48h] [rbp-70h]
  _DWORD v49[8]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 1;
  v48 = a4;
  v6 = 10;
  v7 = 1;
  v8 = 0;
  v9 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v9;
  v11 = MiPteInShadowRange(v9, a2);
  v14 = v11;
  if ( v11 && (unsigned int)MiPteHasShadow(Process, v12) && (v10 & 1) != 0 && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      v17 = v10 | 0x20;
      Process = (_KPROCESS *)(unsigned __int8)v16;
      LOBYTE(Process) = v16 & 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v10;
      v10 = v17;
      if ( (v16 & 0x42) != 0 )
        v10 = v17 | 0x42;
    }
  }
  v18 = (_BYTE *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v4 = 0;
    WsleContents = (*v18 >> 1) & 7;
LABEL_14:
    v20 = a1;
    goto LABEL_15;
  }
  v22 = *v9;
  v6 = 10 - ((a3 & 2) != 0);
  if ( (_DWORD)v14
    && (unsigned int)MiPteHasShadow(Process, v22)
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v14 = v22 | 0x20;
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      if ( (v24 & 0x20) == 0 )
        v14 = v22;
      v22 = v14;
      if ( (v24 & 0x42) != 0 )
        v22 = v14 | 0x42;
    }
  }
  v25 = (v22 >> 60) & 7;
  v26 = HIBYTE(v22) & 0xF;
  WsleContents = v26 | (16 * v25);
  v7 = MI_PFN_IS_PROTO(v18, v26, v14) == 0;
  if ( (WsleContents & 0xF) != 8 )
    goto LABEL_14;
  v20 = a1;
  MiUnlockWsle(a1, a2, v27);
  WsleContents = MiGetWsleContents(v28, a2);
LABEL_15:
  if ( (a3 & 3) == 0 )
  {
    if ( v4 )
    {
      if ( (unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v9, ZeroPte, v14) )
        v8 = 1;
    }
    else
    {
      if ( !(unsigned int)MiEvictPageTableLock(v20, v9, ZeroPte, 0LL) )
      {
        *v48 = 0;
        return 0LL;
      }
      v8 = 1;
    }
  }
  MiRemoveWsle(v20, a2, 1, WsleContents, v6, v7);
  if ( v4 )
  {
    v30 = (a2 >> 18) & 0x3FFFFFF8;
    v31 = (unsigned int)(v30 + 0x40000000);
    v32 = *(_QWORD *)(v30 - 0x904C0000000LL);
    if ( (unsigned int)MiPteInShadowRange(v30 - 0x904C0000000LL, v29)
      && (unsigned int)MiPteHasShadow(v34, v33)
      && (v32 & 1) != 0
      && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v35 )
      {
        v33 = v32 | 0x20;
        v36 = *((_QWORD *)&v35->Flink + ((v31 >> 3) & 0x1FF));
        if ( (v36 & 0x20) == 0 )
          v33 = v32;
        v32 = v33;
        if ( (v36 & 0x42) != 0 )
          v32 = v33 | 0x42;
      }
    }
    v47 = v32;
    if ( (unsigned int)MiPteInShadowRange(&v47, v33)
      && (unsigned int)MiPteHasShadow(v38, v37)
      && (v32 & 1) != 0
      && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process;
      v39 = v38[1].ProcessListEntry.Flink;
      if ( v39 )
      {
        v40 = *((_QWORD *)&v39->Flink + (((unsigned __int64)&v47 >> 3) & 0x1FF));
        v41 = v32 | 0x20;
        v38 = (_KPROCESS *)(unsigned __int8)v40;
        LOBYTE(v38) = v40 & 0x20;
        if ( (v40 & 0x20) == 0 )
          v41 = v32;
        v32 = v41;
        if ( (v40 & 0x42) != 0 )
          v32 = v41 | 0x42;
      }
    }
    v42 = (unsigned __int64 *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v42 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v38, a2, v49);
      v43 = 8;
      while ( 1 )
      {
        v44 = v49[(unsigned __int8)--v43];
        if ( v44 )
          break;
        if ( !v43 )
          goto LABEL_61;
      }
      *v42 = *v42 & 0xFFFFFFFFFFFE000FuLL | (16 * (v44 & 0x3FF | ((unsigned __int64)(v43 & 7) << 10)));
    }
  }
LABEL_61:
  *v48 = v8;
  return 1LL;
}
