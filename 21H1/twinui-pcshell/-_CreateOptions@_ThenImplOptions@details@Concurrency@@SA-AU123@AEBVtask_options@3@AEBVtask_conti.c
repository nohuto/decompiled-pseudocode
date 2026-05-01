/*
 * XREFs of ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x1803056E8
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180302604 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800BB154 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x180302DD8 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180306414 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Concurrency::details::_ThenImplOptions::_CreateOptions(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  char v7; // bl
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r12
  volatile signed __int32 *v10; // rsi
  __int64 *v11; // rdx
  char v12; // bl
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rdi
  int v15; // r13d
  Concurrency::details::_TaskCreationCallstack *v16; // rcx
  __int64 v17; // rax
  char v18; // bl
  Concurrency::details::_TaskCreationCallstack *v19; // rsi
  std::_Ref_count_base *v20; // rcx
  volatile signed __int32 *v21; // rbx
  std::_Ref_count_base *v23[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  Concurrency::details::_TaskCreationCallstack *v28; // [rsp+58h] [rbp-A8h]
  std::_Ref_count_base **v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  _BYTE v36[8]; // [rsp+98h] [rbp-68h] BYREF
  char v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v39[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h]
  char v43; // [rsp+E8h] [rbp-18h]
  _BYTE v44[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v45[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v46[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v47[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v48[80]; // [rsp+130h] [rbp+30h] BYREF
  Concurrency::details::_RefCounter *v49; // [rsp+198h] [rbp+98h]

  v7 = 0;
  v27 = 0;
  if ( *((_BYTE *)a2 + 88) )
  {
    v8 = (volatile signed __int32 *)a2[3];
    if ( v8 )
      _InterlockedIncrement(v8 + 2);
    v7 = 1;
    v9 = (__int64)v8;
    if ( !v8 )
      v9 = 2LL;
  }
  else
  {
    v9 = 0LL;
    v8 = (volatile signed __int32 *)v49;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v8 )
      Concurrency::details::_RefCounter::_Release((Concurrency::details::_RefCounter *)v8);
  }
  if ( *((_BYTE *)a2 + 89) )
  {
    v10 = (volatile signed __int32 *)a2[1];
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = (volatile signed __int32 *)a2[1];
    }
    v30 = *a2;
    v31 = v10;
    v32 = a2[2];
    v11 = &v30;
    v12 = v7 | 2;
    v13 = (volatile signed __int32 *)v34;
  }
  else
  {
    v13 = (volatile signed __int32 *)a4[1];
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = (volatile signed __int32 *)a4[1];
    }
    v33 = *a4;
    v34 = (std::_Ref_count_base *)v13;
    v35 = a4[2];
    v11 = &v33;
    v12 = v7 | 4;
    v10 = v31;
  }
  v14 = (volatile signed __int32 *)v11[1];
  if ( v14 )
  {
    _InterlockedIncrement(v14 + 2);
    v10 = v31;
    v13 = (volatile signed __int32 *)v34;
  }
  *(_QWORD *)&v25 = *v11;
  *((_QWORD *)&v25 + 1) = v14;
  v26 = v11[2];
  if ( (v12 & 4) != 0 )
  {
    v12 &= ~4u;
    if ( v13 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  }
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v10 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  }
  Concurrency::details::_ContextCallback::_Assign((Concurrency::details::_ContextCallback *)v36, (void *)a2[4]);
  v37 = *((_BYTE *)a2 + 40);
  v15 = -(v37 != 0);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)v36);
  v43 = *((_BYTE *)a2 + 48);
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)v44,
    (const struct Concurrency::details::_TaskCreationCallstack *)(a2 + 7));
  if ( v43 )
  {
    v16 = Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
            (Concurrency::details::_TaskCreationCallstack *)v46,
            (const struct Concurrency::details::_TaskCreationCallstack *)v44);
    v17 = *(_QWORD *)v16;
    v18 = v12 | 0x48;
  }
  else
  {
    v41 = 0LL;
    v42 = 0LL;
    v40 = 0LL;
    v16 = (Concurrency::details::_TaskCreationCallstack *)&v40;
    v17 = 0LL;
    v18 = v12 | 0x50;
  }
  v38 = v17;
  v39[0] = *((_QWORD *)v16 + 1);
  v39[1] = *((_QWORD *)v16 + 2);
  v39[2] = *((_QWORD *)v16 + 3);
  *((_QWORD *)v16 + 1) = 0LL;
  *((_QWORD *)v16 + 2) = 0LL;
  *((_QWORD *)v16 + 3) = 0LL;
  if ( (v18 & 0x10) != 0 )
  {
    v18 &= ~0x10u;
    std::vector<void *>::_Tidy((__int64)&v41);
  }
  if ( (v18 & 8) != 0 )
    std::vector<void *>::_Tidy((__int64)v47);
  v19 = Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
          (Concurrency::details::_TaskCreationCallstack *)v48,
          (const struct Concurrency::details::_TaskCreationCallstack *)&v38);
  v28 = v19;
  *(_OWORD *)v23 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement(v14 + 2);
    v14 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
  }
  *(_OWORD *)v23 = v25;
  v24 = v26;
  v29 = v23;
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v20 = (std::_Ref_count_base *)v14;
  v21 = v14;
  if ( v14 )
  {
    _InterlockedIncrement(v14 + 2);
    v20 = v23[1];
    v14 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
  }
  *(std::_Ref_count_base **)(a1 + 8) = v23[0];
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v24;
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)(a1 + 32),
    v19);
  *(_DWORD *)(a1 + 64) = v15;
  *(_QWORD *)(a1 + 72) = a3;
  if ( v23[1] )
    std::_Ref_count_base::_Decref(v23[1]);
  std::vector<void *>::_Tidy((__int64)v19 + 8);
  std::vector<void *>::_Tidy((__int64)v39);
  std::vector<void *>::_Tidy((__int64)v45);
  if ( v21 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  return a1;
}
