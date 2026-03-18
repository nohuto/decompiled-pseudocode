/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801813A4
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v2; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  struct CManipulationFrame *v7; // rax
  struct CManipulationFrame *v8; // rbx
  struct CManipulationFrame *v9; // rdi
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int i; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  struct CManipulationFrame *v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 37);
  if ( !v2 || (v5 = 248LL * (unsigned int)(v2 - 1), v5 > 0xFFFFFFFF) || (v6 = v5 + 616, v6 < 0x268) )
    v6 = 0;
  v7 = (struct CManipulationFrame *)DefaultHeap::AllocClear(v6);
  *a2 = 0LL;
  v8 = v7;
  memset_0(v7, 0, 0x268uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *((_DWORD *)a1 + 37);
    v11 = *((_DWORD *)a1 + 42);
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &CManipulationFrame::`vftable';
    *((_DWORD *)v8 + 4) = v10;
    *((_DWORD *)v8 + 6) = v11;
    *((_OWORD *)v8 + 2) = *(_OWORD *)a1;
    *((_OWORD *)v8 + 3) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v8 + 4) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v8 + 5) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v8 + 6) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v8 + 7) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v8 + 8) = *((_OWORD *)a1 + 6);
    *((_OWORD *)v8 + 9) = *((_OWORD *)a1 + 7);
    *((_OWORD *)v8 + 10) = *((_OWORD *)a1 + 8);
  }
  v21 = v8;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
  if ( v8 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 37); *((_BYTE *)v8 + v15 + 608) &= ~1u )
    {
      v15 = 248LL * i;
      v16 = 240LL * i++;
      v17 = (_OWORD *)((char *)v8 + v15 + 368);
      v18 = (_OWORD *)((char *)a1 + v16 + 160);
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v17 - 1) = v19;
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      *(_QWORD *)((char *)v8 + v15 + 392) = *(unsigned int *)((char *)a1 + v16 + 352);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
    v13 = 0;
    *a2 = v9;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2147024882, 0x2Cu);
  }
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v21);
  return v13;
}
