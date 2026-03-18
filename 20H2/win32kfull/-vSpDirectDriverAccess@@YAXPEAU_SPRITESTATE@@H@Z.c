/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00833A0
 * Callers:
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00832B0 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C0083350 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0085DBC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00B5018 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = *(_QWORD *)a1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( a2 )
  {
    if ( ThreadWin32Thread
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14)
      && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL) = *((_DWORD *)a1 + 23);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL) = *((_DWORD *)a1 + 24);
      CurrentThread = KeGetCurrentThread();
      v7 = *(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(CurrentThread) + 280) + 20LL) = *(_DWORD *)(v7 + 4);
      v8 = KeGetCurrentThread();
      v9 = *(_QWORD *)(W32GetThreadWin32Thread(v8) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v8) + 280) + 24LL) = *(_DWORD *)(v9 + 8);
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 23);
      *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 48);
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( ThreadWin32Thread
         && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14)
         && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL) = *((_DWORD *)a1 + 25);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL) = *((_DWORD *)a1 + 26);
    v10 = KeGetCurrentThread();
    v11 = *(_QWORD *)(W32GetThreadWin32Thread(v10) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v10) + 280) + 20LL) = *(_DWORD *)(v11 + 12);
    v12 = KeGetCurrentThread();
    v13 = *(_QWORD *)(W32GetThreadWin32Thread(v12) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(v12) + 280) + 24LL) = *(_DWORD *)(v13 + 16);
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 25);
    *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 52);
    *((_DWORD *)a1 + 22) = 0;
  }
}
