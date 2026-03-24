/*
 * XREFs of ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x18003A584
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800784A0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z @ 0x18003A6B8 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 ***v13; // rax
  __int64 ****v14; // rcx
  __int64 **v15; // rax
  __int64 *v16; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<CMegaRect>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v5 = 0LL;
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  if ( !*(_QWORD *)(v6 + 8 * v7) )
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x70uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v9;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v10 = *a2;
  v11 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)v11 = *a2;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  v12 = *(_DWORD *)(*(_QWORD *)(v10 + 184) + 16LL);
  v13 = 0LL;
  *(_DWORD *)(v11 + 24) = v12;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_DWORD *)(v11 + 104) = 0;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v14 = **(__int64 ******)a1;
    if ( v14 )
      v13 = *v14;
  }
  if ( v13 )
  {
    v15 = *v13;
    if ( v15 )
    {
      v16 = *v15;
      if ( v16 )
        v5 = *v16;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v5 + 8)
                   + 8 * ((*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL) & (*(_QWORD *)(v5 + 16) - 1LL)));
}
