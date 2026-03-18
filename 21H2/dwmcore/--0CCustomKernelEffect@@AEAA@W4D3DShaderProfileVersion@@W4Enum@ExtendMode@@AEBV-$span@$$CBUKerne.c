/*
 * XREFs of ??0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@@Z @ 0x1800C9070
 * Callers:
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1800C6CD8 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 * Callees:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x1800C6D54 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 */

__int64 __fastcall CCustomKernelEffect::CCustomKernelEffect(__int64 a1, char a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v12; // rax
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-9h]
  __int128 v16; // [rsp+48h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  __int128 v18; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+70h] [rbp+27h]
  __int128 v20; // [rsp+80h] [rbp+37h] BYREF
  __int64 v21; // [rsp+90h] [rbp+47h]
  __int64 v22; // [rsp+B0h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v4 = (__int64 *)(a1 + 32);
  *(_BYTE *)(a1 + 25) = 3;
  *(_QWORD *)a1 = &CCustomKernelEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  *(_QWORD *)(a1 + 16) = &CCustomKernelEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *(_BYTE *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v6 = *a4;
  *(_QWORD *)&v14 = a4[1];
  v17 = v14;
  *((_QWORD *)&v14 + 1) = v14 + 12 * v6;
  v15 = *((_QWORD *)&v14 + 1);
  v16 = v14;
  v7 = *(_QWORD *)(a1 + 40);
  v18 = v14;
  v22 = v7;
  v19 = *((_QWORD *)&v14 + 1);
  v20 = v14;
  v21 = v14;
  detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
    (_QWORD *)(a1 + 32),
    &v14,
    &v22,
    (__int64)&v20,
    (gsl::details **)&v18);
  v8 = *v4;
  if ( (unsigned __int64)((v4[1] - *v4) >> 4) <= 8 )
  {
    if ( *(_BYTE *)(a1 + 24) < 2u )
    {
      *(_QWORD *)(a1 + 200) = 37531LL;
      v12 = &unk_18035B510;
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 88768LL;
      v12 = &unk_18032CAE0;
    }
    *(_QWORD *)(a1 + 208) = v12;
    v9 = a1 + 240;
    *(_OWORD *)(a1 + 240) = xmmword_1803B2438;
    v13 = *(_QWORD *)(a1 + 40) - v8;
    *(_BYTE *)(a1 + 257) = 0;
    *(_BYTE *)(a1 + 256) = (v13 >> 4) + 48;
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 88768LL;
    v9 = a1 + 240;
    *(_QWORD *)(a1 + 208) = &unk_18032CAE0;
    strcpy((char *)(a1 + 240), "SymmetricKernelMax");
  }
  *(_QWORD *)(a1 + 224) = v9;
  *((_QWORD *)&v14 + 1) = &CCustomKernelEffect::k_shaderLinkingArguments;
  *(_BYTE *)(a1 + 216) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)&v14 = 3LL;
  *(_OWORD *)(a1 + 184) = v14;
  v10 = (v4[1] - *v4) >> 4;
  if ( v10 > 8 )
    LODWORD(v10) = 128;
  *(_DWORD *)(a1 + 232) = 16 * v10;
  *(_WORD *)(a1 + 236) = 512;
  return a1;
}
