/*
 * XREFs of sub_1800C6C30 @ 0x1800C6C30
 * Callers:
 *     sub_1800C3A30 @ 0x1800C3A30 (sub_1800C3A30.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_18008E820 @ 0x18008E820 (sub_18008E820.c)
 *     sub_18009D404 @ 0x18009D404 (sub_18009D404.c)
 *     sub_1800B1C98 @ 0x1800B1C98 (sub_1800B1C98.c)
 *     ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800B1E10 (-SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z.c)
 *     sub_1800B1ED4 @ 0x1800B1ED4 (sub_1800B1ED4.c)
 *     sub_1800B1EF0 @ 0x1800B1EF0 (sub_1800B1EF0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_1800C6C30(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // r8
  char v8; // di
  Concurrency::details::SchedulerProxy *v9; // rbx
  __int64 v10; // r8
  char v11; // al
  Concurrency::details::SchedulerProxy *v12; // rbx
  __int64 v13; // r8
  char v14; // al
  Concurrency::details::SchedulerProxy *v15; // rbx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  Concurrency::details::SchedulerProxy *v22; // rbx
  char v23; // al
  __int64 v24; // r8
  volatile signed __int32 *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdi
  __int64 *v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rbx
  char v31; // al
  __int64 v32; // rbx
  char v33; // al
  __int64 v34; // rbx
  char v35; // al
  __int64 v36; // rbx
  char v37; // al
  __int64 v38; // rbx
  char v39; // al
  __int64 v40; // rbx
  char v41; // al
  __int64 v42; // rbx
  char v43; // al
  __int64 v44; // rbx
  char v45; // al
  __int64 v46; // rbx
  char v47; // al
  __int64 v48; // rbx
  char v49; // al
  char v50; // bl
  __int64 v51; // r8
  char v52; // di
  __int64 *v53; // rax
  volatile signed __int32 *v54; // rbx
  __int64 *v55; // rax
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  __int128 v58; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v59; // [rsp+48h] [rbp-B8h]
  __int64 v60[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v68; // [rsp+110h] [rbp+10h]
  Concurrency::details::SchedulerProxy *v69[2]; // [rsp+118h] [rbp+18h] BYREF

  v4 = sub_18007AB84(a1, *(_DWORD *)(*a2 + 112));
  *(_OWORD *)v69 = 0LL;
  v58 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a2[1];
  }
  *(_QWORD *)&v58 = *a2;
  *((_QWORD *)&v58 + 1) = v5;
  sub_18007A810(a1, v69, 0LL, &v58);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F908, 0LL);
  sub_1800B1EF0((__int64)v69[0], 0, v6);
  if ( v6 )
    Concurrency::details::SchedulerProxy::SetQueueLength(v69[0], 0);
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F928, v7);
  v59 = v60;
  v64[4] = (__int64)v61;
  v60[2] = 0LL;
  v60[3] = 0LL;
  sub_180020B7C(v60, (__int64)&qword_180213118);
  v61[2] = 0LL;
  v61[3] = 0LL;
  sub_180020B7C(v61, (__int64)&qword_180213198);
  v62[2] = 0LL;
  v62[3] = 0LL;
  sub_180020B7C(v62, (__int64)&qword_180213178);
  sub_1800B1C98((__int64)v69[0], v8 != 0, 0, v62, v61, v60);
  sub_1800B1ED4((__int64)v69[0], 1, v8);
  v9 = v69[0];
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F948, v10);
  sub_1800B1EF0((__int64)v9, 1, v11);
  v12 = v69[0];
  LOBYTE(v13) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F968, v13);
  sub_1800B1EF0((__int64)v12, 2, v14);
  v15 = v69[0];
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F988, v16);
  sub_1800B1EF0((__int64)v15, 3, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F9A8, v18);
  sub_18009D404(0LL, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020F9C8, v20);
  sub_18009D404(1uLL, v21);
  v22 = v69[0];
  v23 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FDC8, 0LL);
  sub_1800B1ED4((__int64)v22, 0x4000000, v23);
  v25 = (volatile signed __int32 *)a2[1];
  if ( v25 )
  {
    _InterlockedIncrement(v25 + 3);
    v25 = (volatile signed __int32 *)a2[1];
  }
  v26 = *(_QWORD **)(a1 + 728);
  v27 = v26;
  v28 = (__int64 *)v26[1];
  if ( *((_BYTE *)v28 + 25) )
    goto LABEL_14;
  do
  {
    if ( v28[5] >= (unsigned __int64)v25 )
    {
      v27 = v28;
      v28 = (__int64 *)*v28;
    }
    else
    {
      v28 = (__int64 *)v28[2];
    }
  }
  while ( !*((_BYTE *)v28 + 25) );
  if ( v27 == v26 || (unsigned __int64)v25 < v27[5] )
LABEL_14:
    v27 = *(_QWORD **)(a1 + 728);
  if ( v25 && _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
  v29 = (__int64 *)v27[6];
  if ( v29 != (__int64 *)v27[7] )
  {
    v30 = *v29;
    v31 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FA48, 0LL);
    sub_1800B1ED4(v30, 0x10000, v31);
    v32 = *(_QWORD *)v27[6];
    v33 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FA68, 0LL);
    sub_1800B1ED4(v32, 0x20000, v33);
    v34 = *(_QWORD *)v27[6];
    v35 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FA88, 0LL);
    sub_1800B1ED4(v34, 0x40000, v35);
    v36 = *(_QWORD *)v27[6];
    v37 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FAA8, 0LL);
    sub_1800B1ED4(v36, 0x80000, v37);
    v38 = *(_QWORD *)v27[6];
    v39 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FAC8, 0LL);
    sub_1800B1ED4(v38, 0x100000, v39);
    v40 = *(_QWORD *)v27[6];
    v41 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FAE8, 0LL);
    sub_1800B1ED4(v40, 0x200000, v41);
    v42 = *(_QWORD *)v27[6];
    v43 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FB08, 0LL);
    sub_1800B1ED4(v42, 0x400000, v43);
    v44 = *(_QWORD *)v27[6];
    v45 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FB28, 0LL);
    sub_1800B1ED4(v44, 0x800000, v45);
    v46 = *(_QWORD *)v27[6];
    v47 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FB48, 0LL);
    sub_1800B1ED4(v46, 0x10000000, v47);
    v48 = *(_QWORD *)v27[6];
    v49 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FB68, 0LL);
    sub_1800B1ED4(v48, 0x20000000, v49);
  }
  LOBYTE(v24) = 1;
  v50 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FE08, v24);
  LOBYTE(v51) = 1;
  v52 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_18020FE28, v51);
  v63[2] = 0LL;
  v63[3] = 0LL;
  sub_18001277C(v63, (__int64)&unk_18020F6C8);
  v53 = sub_18008CDE8(*a2, &v65, v63);
  sub_18008E820(*v53, v50);
  v54 = v66;
  if ( v66 )
  {
    if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
      if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
    }
  }
  v64[2] = 0LL;
  v64[3] = 0LL;
  sub_18001277C(v64, (__int64)&unk_18020F708);
  v55 = sub_18008CDE8(*a2, &v67, v64);
  sub_18008E820(*v55, v52);
  v56 = v68;
  if ( v68 )
  {
    if ( !_InterlockedDecrement(v68 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v56)(v56);
      if ( !_InterlockedDecrement(v56 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
    }
  }
  v57 = (volatile signed __int32 *)v69[1];
  if ( v69[1] && !_InterlockedDecrement((volatile signed __int32 *)v69[1] + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
    if ( !_InterlockedDecrement(v57 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
  }
}
