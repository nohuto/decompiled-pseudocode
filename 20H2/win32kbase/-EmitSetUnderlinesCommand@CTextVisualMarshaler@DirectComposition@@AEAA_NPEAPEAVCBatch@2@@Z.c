/*
 * XREFs of ?EmitSetUnderlinesCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4DA0
 * Callers:
 *     ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5CF0 (-EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C007C914 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CTextVisualMarshaler::EmitSetUnderlinesCommand(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  bool v5; // zf
  unsigned __int64 v6; // rax
  bool v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // r10
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  void *v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 115);
  if ( (v2 & 8) != 0 )
  {
    v5 = *((_QWORD *)this + 55) == 0LL;
    *((_DWORD *)this + 115) = v2 & 0xFFFFFFF7;
    v6 = *((unsigned int *)this + 114);
    v7 = v5;
    while ( v6 < *((_QWORD *)this + 55) || v7 )
    {
      v7 = 0;
      v8 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      v18 = v8;
      if ( v8 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v18) )
        {
          *((_DWORD *)this + 115) |= 8u;
          return *((unsigned int *)this + 114) == *((_QWORD *)this + 55);
        }
        v8 = v18;
      }
      v9 = *((unsigned int *)this + 114);
      v10 = (v8 - 20) >> 2;
      if ( *((_QWORD *)this + 55) - v9 < v10 )
        LODWORD(v10) = *((_DWORD *)this + 110) - v9;
      v19 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v10 + 20),
        &v19);
      v11 = (char *)v19;
      v12 = 664;
      *(_DWORD *)v19 = 4 * v10 + 20;
      v5 = *((_DWORD *)this + 114) == 0;
      *(_OWORD *)(v11 + 4) = 0LL;
      if ( !v5 )
        v12 = 665;
      *((_DWORD *)v11 + 1) = v12;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v11 + 3) = 4 * v10;
      v13 = *((_DWORD *)this + 114);
      if ( (_DWORD)v10 )
      {
        v14 = 0LL;
        v15 = (unsigned int)v10;
        do
        {
          if ( (unsigned __int64)v13 >= *((_QWORD *)this + 55) )
          {
            v16 = 0LL;
          }
          else
          {
            _mm_lfence();
            v16 = *(_QWORD *)(*((_QWORD *)this + 54) + 8LL * v13);
          }
          ++v13;
          *(_DWORD *)&v11[v14 + 16] = *(_DWORD *)(v16 + 24);
          v14 += 4LL;
          --v15;
        }
        while ( v15 );
        v13 = *((_DWORD *)this + 114);
      }
      v6 = v13 + (unsigned int)v10;
      *((_DWORD *)this + 114) = v6;
    }
  }
  return *((unsigned int *)this + 114) == *((_QWORD *)this + 55);
}
