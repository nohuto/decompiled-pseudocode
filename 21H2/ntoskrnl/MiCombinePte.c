/*
 * XREFs of MiCombinePte @ 0x14055CB40
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiMapArbitraryPage @ 0x1403697C0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140369D50 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140369E30 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x140370250 (MiComputeHash64.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCombineWorkingSetTail @ 0x14055D040 (MiCombineWorkingSetTail.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r9d
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // r13
  __int128 *v11; // r12
  __int64 v12; // rax
  __int64 *v14; // r14
  unsigned __int64 UltraMapping; // rax
  __int64 *v16; // rbx
  _QWORD *v17; // r15
  BOOL v18; // r12d
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rdx
  bool v22; // zf
  BOOL v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rdx
  int v28; // r8d
  bool v29; // zf
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a3;
  if ( !*(_QWORD *)(v4 + 104) )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(_QWORD **)(a1 + 168);
    v9 = v8[3];
    v10 = *(_QWORD **)v9;
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0
      || (*(_DWORD *)(v4 - 1664 + 1124) & 0xC00u) >= 0xC00 && !(unsigned int)MiIsStoreProcess(v4 - 1664) )
    {
      if ( v5 >= 1 )
        return 0LL;
      v30 = MI_READ_PTE_LOCK_FREE(a2);
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFLL;
      v11 = (__int128 *)(48 * v31 - 0x58000000000LL);
      if ( MI_PFN_IS_PROTO((__int64)v11) )
        return 0LL;
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 && *(_DWORD *)(v12 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        return 4LL;
      if ( !(unsigned int)MiCombineCandidate(v10, 0, v11) )
        return 0LL;
      ++*(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL);
      v14 = (__int64 *)(v8[4] + 40LL * v8[1]);
      if ( (v30 & 0x20) != 0 )
      {
        *v14 = MiComputeHash64(((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL);
LABEL_38:
        v14[1] = v31;
        v14[2] = 0LL;
        v14[4] = 0LL;
        if ( ++v8[1] == v8[2] )
          return MiCombineWorkingSetTail(a1);
        return 0LL;
      }
      UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v9 + 208), 3u, 1LL, 0);
      v16 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL )
        return 0LL;
      v17 = *(_QWORD **)(v9 + 16);
      v17[9] = v16;
      v17[8] = v11;
      v18 = MiPteInShadowRange((unsigned __int64)v16);
      v19 = MiMapArbitraryPage((__int64)v10, v17, 0LL, 0LL, 0);
      v20 = 0;
      if ( !v19 )
      {
        v21 = ZeroPte;
        if ( v18 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C4E048) )
            {
              v22 = (v21 & 1) == 0;
              goto LABEL_22;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (v21 & 1) == 0;
LABEL_22:
            if ( !v22 )
              v21 |= 0x8000000000000000uLL;
          }
        }
        *v16 = v21;
        if ( v20 )
          MiWritePteShadow((__int64)v16, v21);
        return 0LL;
      }
      v23 = MiPerformCombineScan(v9, (__int64)v17, 0LL, v14);
      MiReleaseArbitraryPage((__int64)v17, v24, v25, v26);
      v27 = ZeroPte;
      v28 = 0;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v28 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_35;
          v29 = (v27 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_35;
          v29 = (v27 & 1) == 0;
        }
        if ( !v29 )
          v27 |= 0x8000000000000000uLL;
      }
LABEL_35:
      *v16 = v27;
      if ( v28 )
        MiWritePteShadow((__int64)v16, v27);
      if ( !v23 )
        return 0LL;
      goto LABEL_38;
    }
  }
  return 3LL;
}
