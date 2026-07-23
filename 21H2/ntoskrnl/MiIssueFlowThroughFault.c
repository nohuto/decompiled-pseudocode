/*
 * XREFs of MiIssueFlowThroughFault @ 0x14020923C
 * Callers:
 *     MiHandleCollidedFault @ 0x14020909C (MiHandleCollidedFault.c)
 * Callees:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueFlowThroughFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  char v7; // bl
  struct _KTHREAD *CurrentThread; // r10
  int v10; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  char v16; // r11

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_DWORD *)(a4 + 192);
  *a7 = 2;
  if ( (v10 & 0x80u) != 0 && (int)PsGetIoPriorityThread(CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (CurrentThread->MiscFlags & 0x8000) != 0
    || LODWORD(CurrentThread->Process[2].Affinity.Bitmap[3]) && (*(_QWORD *)(a4 + 256) || (v10 & 8) != 0) )
  {
    v7 = 1;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(a5) && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
  {
    if ( (*(_DWORD *)(v15 + 484) || (*(_DWORD *)(v15 + 116) & 0x400) != 0 || *(_BYTE *)(a1 + 68) || v7 == 1)
      && (v16 & 0x20) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *a7 = 1;
      return MiResolveMappedFileFault(a1, a2, v14, a6);
    }
  }
  else if ( (*(_BYTE *)(v15 + 1310) || (v16 & 8) != 0 || v7 == 1) && (v16 & 0x20) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return MiResolvePageFileFault((unsigned __int64 *)a1, a2, v14, a6);
  }
  return 0LL;
}
