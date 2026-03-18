/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18004B198
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z @ 0x18004C33C (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18004B49C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18004B5C0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800B8BE0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4B90 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800D1B74 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this, __int64 a2, unsigned int a3)
{
  char v3; // si
  __int64 v5; // rax
  void *pData; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rcx
  CD3DDevice *v17; // r15
  struct ID3D11Resource *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  _OWORD *v21; // r14
  __int64 v22; // rax
  void *v23; // rcx
  unsigned int *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // ebx
  const void *v31; // rax
  unsigned int i; // r8d
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-40h]
  D3D11_MAPPED_SUBRESOURCE v38; // [rsp+40h] [rbp-38h] BYREF
  __int64 v39; // [rsp+50h] [rbp-28h]
  void *v40[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v41; // [rsp+68h] [rbp-10h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+48h] BYREF
  void *v43; // [rsp+C8h] [rbp+50h] BYREF
  CD3DDevice *v44; // [rsp+D0h] [rbp+58h]
  struct ID3D11Resource *v45; // [rsp+D8h] [rbp+60h]

  v3 = *((_BYTE *)this + 252);
  if ( !v3 )
  {
    v5 = *((_QWORD *)this + 1);
    v39 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v36 = v5;
    std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v38, &v36);
LABEL_3:
    CFragmentIterator::FindFirst((CFragmentIterator *)&v38);
    pData = v38.pData;
    v7 = *(_QWORD *)&v38.RowPitch;
    while ( (v7 - (__int64)pData) >> 4 )
    {
      v8 = *(unsigned int **)(v7 - 16);
      if ( v8[5] )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 80LL))(*(_QWORD *)v8, v8[4]);
        pData = v38.pData;
        if ( v8[6] != v9 )
        {
          v3 = 1;
          break;
        }
        v7 = *(_QWORD *)&v38.RowPitch;
      }
      v7 -= 16LL;
      *(_QWORD *)&v38.RowPitch = v7;
      if ( (v7 - (__int64)pData) >> 4 )
      {
        ++*(_DWORD *)(v7 - 8);
        goto LABEL_3;
      }
    }
    if ( pData )
    {
      v43 = pData;
      v10 = (v39 - (_QWORD)pData) & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = v10;
      if ( v10 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v43, &v42);
        v10 = v42;
        pData = v43;
      }
      operator delete(pData, v10);
    }
    if ( !v3 )
      goto LABEL_16;
  }
  v13 = 0;
  v14 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v15 + *((_QWORD *)this + 4));
      v17 = *(CD3DDevice **)(*(_QWORD *)(v16 + 16) + 80LL);
      v18 = *(struct ID3D11Resource **)(v16 + 112);
      v44 = v17;
      v45 = v18;
      v19 = CD3DDevice::Map(v17, v18, a3, D3D11_MAP_WRITE_DISCARD, v35, &v38);
      v11 = v19;
      if ( v19 < 0 )
        break;
      v21 = v38.pData;
      if ( *((_DWORD *)this + 14) )
      {
        v22 = *((_QWORD *)this + 1);
        v41 = 0LL;
        v37 = 0;
        *(_OWORD *)v40 = 0LL;
        v36 = v22;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          v40,
          &v36);
        CFragmentIterator::FindFirst((CFragmentIterator *)v40);
        while ( 1 )
        {
          v23 = v40[0];
          if ( !(((char *)v40[1] - (char *)v40[0]) >> 4) )
            break;
          v24 = (unsigned int *)*((_QWORD *)v40[1] - 2);
          v25 = v24[5];
          if ( (_DWORD)v25 )
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v24 + 80LL))(*(_QWORD *)v24, v24[4]);
            v28 = *(_QWORD *)v24;
            v29 = v24[4];
            v30 = v24[5];
            v24[6] = v27;
            v31 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 72LL))(v28, v29);
            memcpy_0(v21, v31, v30);
            v25 = v24[5];
          }
          if ( (v25 & 0xF) != 0 )
            v25 = (unsigned int)v25 - (v25 & 0xF) + 16;
          v21 = (_OWORD *)((char *)v21 + v25);
          CFragmentIterator::MoveNext((CFragmentIterator *)v40);
        }
        if ( v40[0] )
        {
          v43 = v40[0];
          v26 = (v41 - (unsigned __int64)v40[0]) & 0xFFFFFFFFFFFFFFF0uLL;
          v42 = v26;
          if ( v26 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v43, &v42);
            v26 = v42;
            v23 = v43;
          }
          operator delete(v23, v26);
        }
        v17 = v44;
      }
      if ( *((_DWORD *)this + 62) )
      {
        for ( i = 0; i < *((_DWORD *)this + 15); ++i )
        {
          v33 = *((_DWORD *)this + 61);
          if ( _bittest(&v33, i) )
          {
            v34 = 44LL * i;
            *v21 = *(_OWORD *)((char *)this + v34 + 80);
            v21[1] = *(_OWORD *)((char *)this + v34 + 96);
            v21 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v17 + 75) + 120LL))(
        *((_QWORD **)v17 + 75),
        v45,
        0LL);
      ++v13;
      v15 += 8LL;
      if ( v13 >= (unsigned int)v14 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1E9u, 0LL);
  }
  else
  {
LABEL_16:
    *((_BYTE *)this + 252) = 0;
    return 0;
  }
  return v11;
}
