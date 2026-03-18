/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0274364
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0278EC0 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00795B8 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  DC **v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 CurrentProcess; // rax

  v4 = (DC **)((char *)this + 104);
  v6 = *((_QWORD *)this + 13);
  if ( v6 && *((_BYTE *)v4 + 17) )
  {
    v7 = *(_QWORD *)(v6 + 48);
    if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
    {
      *(_DWORD *)(v6 + 36) &= ~0x4000u;
      DC::pSurface(*v4, *(struct SURFACE **)(v7 + 2552));
    }
    v8 = *((_QWORD *)this + 16);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 72);
      CurrentProcess = PsGetCurrentProcess(v6, v7, a3);
      MmUnmapViewOfSection(CurrentProcess, v9);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v4, a3, a4);
    DLODCOBJ::vUnlock((DLODCOBJ *)v4);
    *v4 = 0LL;
  }
  return 1LL;
}
