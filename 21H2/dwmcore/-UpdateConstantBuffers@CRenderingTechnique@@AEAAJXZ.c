/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180039D9C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18003A700 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v4; // r15
  __int64 v6; // rax
  HANDLE ProcessHeap; // rax
  _OWORD *v8; // rax
  _DWORD *v9; // rbx
  _OWORD *v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  unsigned int *v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  struct ID3D11Resource *v25; // r14
  CD3DDevice *v26; // r13
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r9
  _OWORD *v31; // rbx
  __int64 v32; // rax
  unsigned int *v33; // r14
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int i; // r8d
  int v38; // eax
  __int64 v39; // rcx
  char *pData; // rcx
  _OWORD *v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-50h]
  __int128 v43; // [rsp+30h] [rbp-40h] BYREF
  D3D11_MAPPED_SUBRESOURCE v44; // [rsp+40h] [rbp-30h] BYREF
  char *v45; // [rsp+50h] [rbp-20h]
  __int128 v46; // [rsp+58h] [rbp-18h] BYREF
  __int64 v47; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned __int64 v49; // [rsp+B0h] [rbp+40h] BYREF
  void *v50; // [rsp+B8h] [rbp+48h] BYREF

  v3 = *((_BYTE *)this + 264);
  v4 = 0LL;
  if ( v3 )
    goto LABEL_24;
  v6 = *((_QWORD *)this + 1);
  v44 = 0LL;
  *(_QWORD *)&v43 = v6;
  v45 = 0LL;
  DWORD2(v43) = 0;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v8 = v43;
  v10 = *(_OWORD **)&v44.RowPitch;
  if ( *(_QWORD *)&v44.RowPitch )
  {
    pData = (char *)v44.pData;
    if ( v44.pData )
    {
      do
      {
        *v8++ = *(_OWORD *)pData;
        pData += 16;
      }
      while ( pData );
      v10 = *(_OWORD **)&v44.RowPitch;
      pData = (char *)v44.pData;
    }
    v41 = 0LL;
    if ( !v10 )
      goto LABEL_53;
    do
    {
      *(_OWORD *)((char *)v41 + (_QWORD)v9 + 16) = *v41;
      ++v41;
    }
    while ( v41 != v10 );
LABEL_52:
    pData = (char *)v44.pData;
LABEL_53:
    if ( pData )
      std::_Deallocate<16,0>(pData, (v45 - pData) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_5;
  }
  v11 = v8;
  v12 = v44.pData;
  if ( v44.pData )
  {
    do
      *v11++ = *v12++;
    while ( v12 );
    goto LABEL_52;
  }
LABEL_5:
  v13 = v9 + 4;
  v44.pData = v9;
  *(_QWORD *)&v44.RowPitch = v9 + 4;
  v45 = (char *)(v9 + 4);
  v14 = v9[2];
  v15 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
  a3 = (*(_QWORD *)(*(_QWORD *)v9 + 40LL) - v15) >> 4;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)a3 )
      goto LABEL_10;
    if ( *(_QWORD *)(v15 + 16LL * v14 + 8) )
      break;
    ++v14;
  }
  v9[2] = v14;
  *(_QWORD *)&v43 = *(_QWORD *)(v15 + 16LL * v14 + 8);
  DWORD2(v43) = 0;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v44,
    &v43,
    a3,
    v15);
LABEL_9:
  CFragmentIterator::FindFirst((CFragmentIterator *)&v44);
  v13 = *(_DWORD **)&v44.RowPitch;
  v9 = v44.pData;
LABEL_10:
  while ( ((char *)v13 - (char *)v9) >> 4 )
  {
    v16 = (unsigned int *)*((_QWORD *)v13 - 2);
    if ( v16[5] )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v16 + 80LL))(*(_QWORD *)v16, v16[4]);
      v9 = v44.pData;
      if ( v16[6] != v20 )
      {
        v3 = 1;
        break;
      }
      v13 = *(_DWORD **)&v44.RowPitch;
    }
    v13 -= 4;
    *(_QWORD *)&v44.RowPitch = v13;
    if ( ((char *)v13 - (char *)v9) >> 4 )
    {
      ++*(v13 - 2);
      goto LABEL_9;
    }
  }
  if ( v9 )
  {
    v50 = v9;
    v17 = (v45 - (char *)v9) & 0xFFFFFFFFFFFFFFF0uLL;
    v49 = v17;
    if ( v17 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v50, &v49);
      v17 = v49;
      v9 = v50;
    }
    operator delete(v9, v17);
  }
  if ( !v3 )
    goto LABEL_19;
LABEL_24:
  v21 = 0;
  v22 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3;
  if ( !(_DWORD)v22 )
  {
LABEL_19:
    *((_BYTE *)this + 264) = 0;
    return 0;
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(v4 + *((_QWORD *)this + 4));
    v24 = *(_QWORD *)(v23 + 24);
    v25 = *(struct ID3D11Resource **)(v23 + 96);
    v49 = (unsigned __int64)v25;
    v26 = *(CD3DDevice **)(v24 + 80);
    v27 = CD3DDevice::Map(v26, v25, a3, D3D11_MAP_WRITE_DISCARD, v42, &v44);
    v18 = v27;
    if ( v27 < 0 )
      break;
    v31 = v44.pData;
    if ( *((_DWORD *)this + 14) )
    {
      v32 = *((_QWORD *)this + 1);
      v47 = 0LL;
      DWORD2(v43) = 0;
      v46 = 0LL;
      *(_QWORD *)&v43 = v32;
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        &v46,
        &v43,
        v29,
        v30);
      CFragmentIterator::FindFirst((CFragmentIterator *)&v46);
      while ( (__int64)(*((_QWORD *)&v46 + 1) - v46) >> 4 )
      {
        v33 = *(unsigned int **)(*((_QWORD *)&v46 + 1) - 16LL);
        v34 = v33[5];
        if ( (_DWORD)v34 )
        {
          v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v33 + 80LL))(*(_QWORD *)v33, v33[4]);
          v36 = *(_QWORD *)v33;
          v33[6] = v35;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)v36 + 72LL))(v36, v33[4], v33[5], v31);
          v34 = v33[5];
        }
        if ( (v34 & 0xF) != 0 )
          v34 = (unsigned int)v34 - (v34 & 0xF) + 16;
        v31 = (_OWORD *)((char *)v31 + v34);
        CFragmentIterator::MoveNext((CFragmentIterator *)&v46);
      }
      if ( (_QWORD)v46 )
        std::_Deallocate<16,0>(v46, (v47 - v46) & 0xFFFFFFFFFFFFFFF0uLL);
      v25 = (struct ID3D11Resource *)v49;
    }
    if ( *((_DWORD *)this + 62) )
    {
      for ( i = 0; i < *((_DWORD *)this + 15); ++i )
      {
        v38 = *((_DWORD *)this + 61);
        if ( _bittest(&v38, i) )
        {
          v39 = 44LL * i;
          *v31 = *(_OWORD *)((char *)this + v39 + 80);
          v31[1] = *(_OWORD *)((char *)this + v39 + 96);
          v31 += 2;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v26 + 70) + 120LL))(
      *((_QWORD **)v26 + 70),
      v25,
      0LL);
    ++v21;
    v4 += 8LL;
    if ( v21 >= (unsigned int)v22 )
      goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x279u, 0LL);
  return v18;
}
