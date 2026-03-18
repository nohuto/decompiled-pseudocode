/*
 * XREFs of ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BEEBC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BFCB0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00B7600 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00BFBBC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r12
  _DWORD *v9; // r13
  int v10; // ecx
  struct DirectComposition::CBatch **v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  size_t v16; // r8
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  void *v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 60);
  v4 = *((_DWORD *)this + 56);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 60);
    while ( 1 )
    {
      v9 = *(_DWORD **)(v8 * *((_QWORD *)this + 29) + *((_QWORD *)this + 25));
      v10 = 2 * v9[2];
      if ( ((2 * *((_BYTE *)v9 + 8)) & 3) != 0 )
        v10 += 4 - ((2 * *((_BYTE *)v9 + 8)) & 3);
      v11 = *a2;
      v12 = (unsigned int)(v10 + 20);
      LODWORD(Src) = v10 + 20;
      v18 = (void *)(4096LL - *((_QWORD *)v11[17] + 5));
      if ( (unsigned __int64)v18 < v12
        && (!DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v18) || (unsigned __int64)v18 < v12) )
      {
        break;
      }
      v18 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v12, &v18);
      v13 = (char *)v18;
      *(_DWORD *)v18 = Src;
      *(_OWORD *)(v13 + 4) = 0LL;
      *((_DWORD *)v13 + 1) = 15;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v13 + 3) = *v9;
      *((_DWORD *)v13 + 4) = v9[2];
      memmove(v13 + 20, v9 + 4, 2LL * *((_QWORD *)v9 + 1));
      Win32FreePool(*(_QWORD *)(v8 * *((_QWORD *)this + 29) + *((_QWORD *)this + 25)), v14, v15);
      v16 = *((_QWORD *)this + 29);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 25) + v16 * v2), &Src, v16);
      ++*((_DWORD *)this + 60);
      ++v2;
      ++v8;
      if ( v2 >= v4 )
        goto LABEL_2;
    }
    v6 = 0;
  }
LABEL_2:
  if ( *((_DWORD *)this + 60) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 60) = 0;
  }
  return v6;
}
