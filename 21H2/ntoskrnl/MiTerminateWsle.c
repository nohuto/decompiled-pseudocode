/*
 * XREFs of MiTerminateWsle @ 0x140341B00
 * Callers:
 *     MiRemoveSystemImagePage @ 0x14023FB28 (MiRemoveSystemImagePage.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeleteEmptyPageTable @ 0x1403F49E0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140341A70 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // edi
  int v6; // r14d
  BOOL v7; // r15d
  int v8; // esi
  volatile __int64 *v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 WsleContents; // bl
  __int64 v17; // r12
  unsigned __int64 v19; // rdx
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  struct _LIST_ENTRY *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 Process; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 *v35; // rbx
  char v36; // cl
  int v37; // r8d
  unsigned __int64 v40; // [rsp+40h] [rbp-78h] BYREF
  int *v41; // [rsp+48h] [rbp-70h]
  _OWORD v42[2]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 1;
  v41 = a4;
  v6 = 10;
  v7 = 1;
  v8 = 0;
  v9 = (volatile __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v9;
  v11 = MiPteInShadowRange(v9);
  if ( v11 && (unsigned int)MiPteHasShadow() && (v10 & 1) != 0 && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      v14 = v10 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v10;
      v10 = v14;
      if ( (v13 & 0x42) != 0 )
        v10 = v14 | 0x42;
    }
  }
  v15 = (_BYTE *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v4 = 0;
    WsleContents = (*v15 >> 1) & 7;
LABEL_14:
    v17 = a1;
    goto LABEL_15;
  }
  v19 = *v9;
  v6 = 10 - ((a3 & 2) != 0);
  if ( v11 && (unsigned int)MiPteHasShadow() && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v20 )
    {
      v21 = v19 | 0x20;
      v22 = *((_QWORD *)&v20->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      if ( (v22 & 0x20) == 0 )
        v21 = v19;
      v19 = v21;
      if ( (v22 & 0x42) != 0 )
        v19 = v21 | 0x42;
    }
  }
  WsleContents = HIBYTE(v19) & 0xF | (16 * ((v19 >> 60) & 7));
  v7 = MI_PFN_IS_PROTO(v15) == 0;
  if ( (WsleContents & 0xF) != 8 )
    goto LABEL_14;
  v17 = a1;
  MiUnlockWsle(a1, a2, v23);
  WsleContents = MiGetWsleContents(v24, a2);
LABEL_15:
  if ( (a3 & 3) == 0 )
  {
    if ( v4 )
    {
      if ( MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v9, ZeroPte) )
        v8 = 1;
    }
    else
    {
      if ( !(unsigned int)MiEvictPageTableLock(v17, (unsigned __int64)v9, ZeroPte, 0) )
      {
        *v41 = 0;
        return 0LL;
      }
      v8 = 1;
    }
  }
  MiRemoveWsle(v17, a2, 1, WsleContents, v6, v7);
  if ( v4 )
  {
    v25 = (a2 >> 18) & 0x3FFFFFF8;
    v26 = (unsigned int)(v25 + 0x40000000);
    v27 = *(_QWORD *)(v25 - 0x904C0000000LL);
    if ( (unsigned int)MiPteInShadowRange(v25 - 0x904C0000000LL)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = v27 | 0x20;
        v30 = *((_QWORD *)&v28->Flink + ((v26 >> 3) & 0x1FF));
        if ( (v30 & 0x20) == 0 )
          v29 = v27;
        v27 = v29;
        if ( (v30 & 0x42) != 0 )
          v27 = v29 | 0x42;
      }
    }
    v40 = v27;
    if ( (unsigned int)MiPteInShadowRange(&v40)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v32 = *(_QWORD *)(Process + 1928);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
        v34 = v27 | 0x20;
        Process = (unsigned __int8)v33;
        LOBYTE(Process) = v33 & 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = v27;
        v27 = v34;
        if ( (v33 & 0x42) != 0 )
          v27 = v34 | 0x42;
      }
    }
    v35 = (unsigned __int64 *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v35 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(Process, a2, v42);
      v36 = 8;
      while ( 1 )
      {
        v37 = *((_DWORD *)v42 + (unsigned __int8)--v36);
        if ( v37 )
          break;
        if ( !v36 )
          goto LABEL_61;
      }
      *v35 = *v35 & 0xFFFFFFFFFFFE000FuLL | (16 * (v37 & 0x3FF | ((unsigned __int64)(v36 & 7) << 10)));
    }
  }
LABEL_61:
  *v41 = v8;
  return 1LL;
}
