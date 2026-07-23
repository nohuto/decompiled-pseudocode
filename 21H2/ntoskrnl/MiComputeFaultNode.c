/*
 * XREFs of MiComputeFaultNode @ 0x1402E3950
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(unsigned __int64 *a1, __int64 a2, __int64 ***a3)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v7; // r10
  __int64 **v8; // rdx
  unsigned __int64 v9; // r10
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 **Address; // rax
  unsigned int v16; // eax

  v4 = a1[1] >> 57;
  if ( (_DWORD)v4 )
    return (unsigned int)v4;
  v7 = a1[2];
  v8 = *a3;
  if ( (v7 & 1) == 0 )
  {
    v9 = 0LL;
    goto LABEL_4;
  }
  v9 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_BYTE *)v9 == 4 )
  {
    LODWORD(v4) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v9 + 40) + 588LL)]
                                                  + 192)
                                      + 146LL)
                + 1;
  }
  else
  {
    if ( *(_BYTE *)v9 != 2 )
      goto LABEL_4;
    LODWORD(v4) = *(_DWORD *)(v9 + 40);
  }
  if ( (_DWORD)v4 )
    return (unsigned int)v4;
LABEL_4:
  if ( (*(_BYTE *)(a1[7] + 184) & 7) != 0 )
    return (unsigned int)v4;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = Process[1].ActiveProcessorsPadding[8];
  if ( v8
    || ((v13 = *a1, *a1 < 0xFFFFF68000000000uLL) || v13 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v9 || *(_QWORD *)(v12 + 424) || *(_QWORD *)(v12 + 432) || *(_BYTE *)(v12 + 352) == 1)
    && (Address = MiLocateAddress(v13), *a3 = Address, (v8 = Address) != 0LL) )
  {
    v16 = *((_DWORD *)v8 + 12);
    LODWORD(v4) = (v16 >> 12) & 0x3F;
    if ( (_DWORD)v4 )
      return (*((_DWORD *)v8 + 12) >> 12) & 0x3F;
    if ( (v16 & 0x100000) == 0 )
      a2 = *v8[9];
  }
  if ( !a2
    || (result = (*(_DWORD *)(a2 + 56) >> 20) & 0x3F, LODWORD(v4) = (*(_DWORD *)(a2 + 56) >> 20) & 0x3F, !(_DWORD)v4) )
  {
    if ( v9 )
    {
      if ( CurrentThread->ApcStateIndex == 1 )
        LODWORD(v4) = Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
    return (unsigned int)v4;
  }
  return result;
}
