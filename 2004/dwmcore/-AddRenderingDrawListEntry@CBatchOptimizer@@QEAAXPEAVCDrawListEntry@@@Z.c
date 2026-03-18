/*
 * XREFs of ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180064B00
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800643E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x1801ABFA4 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007BAA4 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18007BCBC (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007E480 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x1800C85A4 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::AddRenderingDrawListEntry(CBatchOptimizer *this, struct CDrawListEntry *a2)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r13d
  int v9; // edi
  char v10; // r8
  float v11; // xmm7_4
  float v12; // xmm6_4
  int v13; // ebp
  int *v14; // rdx
  char *v15; // r14
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD); // rdi
  void (__fastcall ***v21)(_QWORD); // r15
  void (__fastcall ***v22)(_QWORD); // rcx
  char *v23; // r13
  __int64 v24; // rdi
  void (__fastcall ***v25)(_QWORD); // r15
  __int64 v26; // rcx
  char *v27; // rdx
  __int64 v28; // rcx
  void (__fastcall ***v29)(_QWORD); // rdi
  void (__fastcall ***v30)(_QWORD); // rax
  int v31; // eax
  int *v32; // r10
  __int64 v33; // rcx
  char *v34; // rax
  __int64 v35; // rdx
  float *v36; // rax
  int v37; // ecx
  bool v38; // al
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // [rsp+30h] [rbp-98h]
  char v45[7]; // [rsp+31h] [rbp-97h] BYREF
  __int128 v46; // [rsp+38h] [rbp-90h] BYREF
  __int128 v47; // [rsp+48h] [rbp-80h]
  char v48[16]; // [rsp+58h] [rbp-70h] BYREF

  v2 = 0LL;
  if ( !*((_DWORD *)this + 8) )
  {
    v40 = *((_OWORD *)this + 1);
    *((_DWORD *)this + 8) = 1;
    *(_OWORD *)((char *)this + 520 * *((int *)this + 12) + 80) = v40;
  }
  ++*((_DWORD *)a2 + 6);
  v5 = (char *)a2 + 16;
  (*(void (__fastcall **)(char *, CBatchOptimizer *))(*((_QWORD *)a2 + 2) + 32LL))((char *)a2 + 16, this);
  v6 = *(_QWORD *)a2;
  v7 = *((_QWORD *)a2 + 8);
  v47 = 0LL;
  v46 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CDrawListEntry *, char *))(v6 + 24))(a2, v48);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v7 + 8));
  v8 = *((_DWORD *)this + 8);
  v9 = 0;
  v10 = 1;
  v44 = 1;
  if ( !v8 )
    goto LABEL_37;
  v11 = *((float *)&v47 + 3);
  v12 = *((float *)&v47 + 2);
  while ( 1 )
  {
    v13 = v9;
    v14 = (int *)((char *)this + 4 * v9 + 48);
    if ( *((_DWORD *)this + 130 * *v14 + 26) )
    {
      do
      {
        v41 = v14[1];
        ++v14;
        ++v13;
      }
      while ( *((_DWORD *)this + 130 * v41 + 26) );
    }
    v15 = (char *)this + 520 * *((int *)this + v13 + 12);
    if ( *((_QWORD *)v15 + 10) != *((_QWORD *)this + 2) )
      goto LABEL_35;
    if ( *((_QWORD *)v15 + 14) || (v31 = *((_DWORD *)v15 + 25), v31 == 1) )
    {
      if ( *((_DWORD *)v15 + 22) != *((_DWORD *)this + 6) )
        goto LABEL_35;
      v16 = v15[92];
      if ( v16 != *((_BYTE *)this + 28) || v16 == 2 )
        goto LABEL_35;
    }
    else if ( v31 )
    {
      goto LABEL_35;
    }
    if ( v10 )
    {
      v9 = v8 - 1;
      v17 = v8 - 1;
      if ( v17 != v13 )
      {
        v32 = (int *)((char *)this + 4 * v9 + 48);
        while ( 1 )
        {
          v33 = 0LL;
          v34 = (char *)this + 520 * *v32;
          v35 = *((int *)v34 + 25);
          if ( *((_DWORD *)v34 + 25) )
            break;
LABEL_59:
          --v9;
          --v17;
          --v32;
          if ( v17 == v13 )
            goto LABEL_13;
        }
        v36 = (float *)(v34 + 284);
        while ( v12 < *(v36 - 1) || v36[1] < *(float *)&v47 || v11 < *v36 || v36[2] < *((float *)&v47 + 1) )
        {
          ++v33;
          v36 += 4;
          if ( v33 == v35 )
            goto LABEL_59;
        }
        v37 = *((_DWORD *)this + 8);
        v10 = 0;
        v44 = 0;
        if ( v37 == 8 && v9 == 7 )
        {
          if ( *((_BYTE *)this + 4240) )
          {
            if ( *((_DWORD *)this + 130 * *((int *)this + v9 + 12) + 25) == 1 )
            {
              v38 = CBatchOptimizer::TryMergeOneLayer(this);
              v10 = 0;
              if ( v38 )
              {
                v8 = *((_DWORD *)this + 8);
                v9 = v8 - 1;
              }
            }
          }
        }
        goto LABEL_36;
      }
    }
LABEL_13:
    v18 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 40LL))(v5);
    v19 = *((_QWORD *)v15 + 14);
    v20 = (void (__fastcall ***)(_QWORD))v18;
    if ( v19 )
      goto LABEL_14;
    if ( *((_DWORD *)v15 + 25) != 1 )
      goto LABEL_51;
    v42 = 16LL;
    v43 = (unsigned int)(*((_DWORD *)v15 + 24) - 1);
    if ( *(_QWORD *)&v15[8 * v43 + 120] )
      v42 = *(_QWORD *)&v15[8 * v43 + 120];
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
    if ( v19 )
    {
LABEL_14:
      (*(void (__fastcall **)(__int64, __int128 *, void (__fastcall ***)(_QWORD), char *))(*(_QWORD *)v19 + 80LL))(
        v19,
        &v46,
        v20,
        v45);
      if ( !v45[0] )
      {
        v39 = v46;
        *(_QWORD *)&v46 = 0LL;
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      }
      v20 = (void (__fastcall ***)(_QWORD))v46;
      v21 = (void (__fastcall ***)(_QWORD))v46;
      *(_QWORD *)&v46 = 0LL;
    }
    else
    {
LABEL_51:
      v21 = v20;
      if ( v20 )
        (**v20)(v20);
    }
    v22 = v2;
    v2 = v20;
    if ( v22 )
      (*v22)[1](v22);
    if ( v21 )
      break;
    v10 = v44;
    v5 = (char *)a2 + 16;
LABEL_35:
    v9 = v13 + 1;
LABEL_36:
    if ( v9 == v8 )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v15 + 25) )
  {
    *((_DWORD *)v15 + 22) = *((_DWORD *)this + 6);
    v15[92] = *((_BYTE *)this + 28);
  }
  if ( v13 != v8 )
  {
    v23 = (char *)a2 + 16;
    goto LABEL_23;
  }
LABEL_37:
  v23 = (char *)a2 + 16;
  v29 = v2;
  v30 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 40LL))((char *)a2 + 16);
  v2 = v30;
  if ( v30 )
    (**v30)(v30);
  if ( v29 )
    (*v29)[1](v29);
  if ( *((_DWORD *)this + 8) == 8 && (!*((_BYTE *)this + 4240) || !CBatchOptimizer::TryMergeOneLayer(this)) )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    CBatchOptimizer::RecycleLayer(this, 0);
  }
  *(_OWORD *)((char *)this + 520 * *((int *)this + ++*((_DWORD *)this + 8) + 11) + 80) = *((_OWORD *)this + 1);
  v13 = *((_DWORD *)this + 8) - 1;
LABEL_23:
  (**(void (__fastcall ***)(struct CDrawListEntry *))a2)(a2);
  v24 = 520LL * *((int *)this + v13 + 12);
  if ( v2 )
  {
    v25 = v2;
    if ( *(_DWORD *)((char *)this + v24 + 100) )
    {
      v26 = *(_QWORD *)((char *)this + v24 + 112);
      v2 = 0LL;
      *(_QWORD *)((char *)this + v24 + 112) = v25;
      if ( v26 )
        goto LABEL_26;
    }
    else if ( !*(_QWORD *)((char *)this + v24 + 112) )
    {
      if ( (((__int64 (__fastcall *)(_QWORD))(*v2)[9])(v2) & 0x10000) != 0 )
      {
        v26 = *(_QWORD *)((char *)this + v24 + 112);
        v2 = 0LL;
        *(_QWORD *)((char *)this + v24 + 112) = v25;
        if ( v26 )
LABEL_26:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      }
      else if ( v13 && !*((_DWORD *)this + 130 * *((int *)this + v13 + 11) + 26) )
      {
        *((_BYTE *)this + 4240) = 1;
      }
    }
  }
  if ( v13 && *(_DWORD *)((char *)this + v24 + 100) == 20 || *(_DWORD *)((char *)this + v24 + 96) == 20 )
    CBatchOptimizer::ContinueLayer(this, v13);
  v27 = (char *)this + 520 * *((int *)this + v13 + 12);
  v28 = *((unsigned int *)v27 + 24);
  *((_DWORD *)v27 + 24) = v28 + 1;
  *(_QWORD *)&v27[8 * v28 + 120] = v23;
  if ( v13 )
    *(_OWORD *)&v27[16 * *((unsigned int *)v27 + 25) + 280] = v47;
  ++*((_DWORD *)v27 + 25);
  if ( v2 )
    (*v2)[1](v2);
}
