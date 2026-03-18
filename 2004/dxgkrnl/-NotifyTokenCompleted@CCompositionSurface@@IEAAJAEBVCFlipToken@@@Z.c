/*
 * XREFs of ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000E95C
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E4D0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010E70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001262C (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C0065410 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C006566C (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C00661A8 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x1C0066280 (-InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenCompleted(CCompositionSurface *this, const struct CFlipToken *a2)
{
  int Buffer; // ebx
  CFlipExBuffer *v6; // rdi
  int inserted; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  unsigned __int64 v19; // r8
  __int128 v20; // xmm1
  unsigned __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct CCompositionBuffer *v27; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[464]; // [rsp+50h] [rbp-B0h] BYREF

  Buffer = 0;
  v27 = 0LL;
  if ( *((_QWORD *)this + 12) )
  {
    Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v27);
    if ( Buffer >= 0 )
    {
      v26 = 0LL;
      v25 = 0LL;
      v6 = CFlipExBuffer::FromBuffer(v27);
      inserted = CFlipExBuffer::InsertCascadedTokenWait(v6, &v26, &v25);
      Buffer = inserted;
      if ( inserted < 0 )
      {
        if ( inserted == -1073741267 )
        {
          CFlipExBuffer::DisableCascadedSignaling(v6);
          LOBYTE(v8) = 1;
          Buffer = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 32LL))(
                     *((_QWORD *)this + 12),
                     v8);
          if ( Buffer < 0 )
            return (unsigned int)Buffer;
          Buffer = CCompositionSurface::PairBind(this, v6);
          if ( Buffer < 0 )
            return (unsigned int)Buffer;
          Buffer = CFlipExBuffer::InsertCascadedTokenWait(v6, &v26, &v25);
        }
        if ( Buffer < 0 )
          return (unsigned int)Buffer;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 160LL))(a2) )
      {
        v9 = 3LL;
        v10 = (_OWORD *)((char *)a2 + 104);
        v11 = v28;
        do
        {
          v12 = v10[1];
          *v11 = *v10;
          v13 = v10[2];
          v11[1] = v12;
          v14 = v10[3];
          v11[2] = v13;
          v15 = v10[4];
          v11[3] = v14;
          v16 = v10[5];
          v11[4] = v15;
          v17 = v10[6];
          v11[5] = v16;
          v18 = v10[7];
          v10 += 8;
          v11[6] = v17;
          v11 += 8;
          *(v11 - 1) = v18;
          --v9;
        }
        while ( v9 );
        v19 = v25;
        v20 = v10[1];
        v21 = v26;
        *v11 = *v10;
        v22 = v10[2];
        v11[1] = v20;
        v23 = v10[3];
        v24 = *((_DWORD *)v10 + 16);
        v11[2] = v22;
        v11[3] = v23;
        *((_DWORD *)v11 + 16) = v24;
        Buffer = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _BYTE *))(**((_QWORD **)this + 12)
                                                                                                + 40LL))(
                   *((_QWORD *)this + 12),
                   v21,
                   v19,
                   v28);
        if ( Buffer < 0 )
          CFlipExBuffer::InsertCascadedTokenSignal(v6, v25);
      }
    }
  }
  return (unsigned int)Buffer;
}
