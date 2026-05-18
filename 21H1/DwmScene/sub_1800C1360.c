/*
 * XREFs of sub_1800C1360 @ 0x1800C1360
 * Callers:
 *     sub_1800BE160 @ 0x1800BE160 (sub_1800BE160.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180074F40 @ 0x180074F40 (sub_180074F40.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180088F50 @ 0x180088F50 (sub_180088F50.c)
 *     sub_180097B34 @ 0x180097B34 (sub_180097B34.c)
 *     sub_1800AC3C8 @ 0x1800AC3C8 (sub_1800AC3C8.c)
 *     ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800AC540 (-SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z.c)
 *     sub_1800AC604 @ 0x1800AC604 (sub_1800AC604.c)
 *     sub_1800AC620 @ 0x1800AC620 (sub_1800AC620.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_1800C1360(__int64 a1, __int64 *a2)
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

  v4 = sub_1800752B4(a1, *(_DWORD *)(*a2 + 112));
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
  sub_180074F40(a1, v69, 0LL, &v58);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208890, 0LL);
  sub_1800AC620((__int64)v69[0], 0, v6);
  if ( v6 )
    Concurrency::details::SchedulerProxy::SetQueueLength(v69[0], 0);
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1802088B0, v7);
  v59 = v60;
  v64[4] = (__int64)v61;
  v60[2] = 0LL;
  v60[3] = 0LL;
  sub_18001CDF8(v60, (__int64)&qword_18020C0A0);
  v61[2] = 0LL;
  v61[3] = 0LL;
  sub_18001CDF8(v61, (__int64)&qword_18020C120);
  v62[2] = 0LL;
  v62[3] = 0LL;
  sub_18001CDF8(v62, (__int64)&qword_18020C100);
  sub_1800AC3C8((__int64)v69[0], v8 != 0, 0, v62, v61, v60);
  sub_1800AC604((__int64)v69[0], 1, v8);
  v9 = v69[0];
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1802088D0, v10);
  sub_1800AC620((__int64)v9, 1, v11);
  v12 = v69[0];
  LOBYTE(v13) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1802088F0, v13);
  sub_1800AC620((__int64)v12, 2, v14);
  v15 = v69[0];
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208910, v16);
  sub_1800AC620((__int64)v15, 3, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208930, v18);
  sub_180097B34(0LL, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208950, v20);
  sub_180097B34(1uLL, v21);
  v22 = v69[0];
  v23 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208D50, 0LL);
  sub_1800AC604((__int64)v22, 0x4000000, v23);
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
    v31 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1802089D0, 0LL);
    sub_1800AC604(v30, 0x10000, v31);
    v32 = *(_QWORD *)v27[6];
    v33 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1802089F0, 0LL);
    sub_1800AC604(v32, 0x20000, v33);
    v34 = *(_QWORD *)v27[6];
    v35 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208A10, 0LL);
    sub_1800AC604(v34, 0x40000, v35);
    v36 = *(_QWORD *)v27[6];
    v37 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208A30, 0LL);
    sub_1800AC604(v36, 0x80000, v37);
    v38 = *(_QWORD *)v27[6];
    v39 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208A50, 0LL);
    sub_1800AC604(v38, 0x100000, v39);
    v40 = *(_QWORD *)v27[6];
    v41 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208A70, 0LL);
    sub_1800AC604(v40, 0x200000, v41);
    v42 = *(_QWORD *)v27[6];
    v43 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208A90, 0LL);
    sub_1800AC604(v42, 0x400000, v43);
    v44 = *(_QWORD *)v27[6];
    v45 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208AB0, 0LL);
    sub_1800AC604(v44, 0x800000, v45);
    v46 = *(_QWORD *)v27[6];
    v47 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208AD0, 0LL);
    sub_1800AC604(v46, 0x10000000, v47);
    v48 = *(_QWORD *)v27[6];
    v49 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208AF0, 0LL);
    sub_1800AC604(v48, 0x20000000, v49);
  }
  LOBYTE(v24) = 1;
  v50 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208D90, v24);
  LOBYTE(v51) = 1;
  v52 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_180208DB0, v51);
  v63[2] = 0LL;
  v63[3] = 0LL;
  sub_18001269C(v63, (__int64)&unk_180208650);
  v53 = sub_180087518(*a2, &v65, v63);
  sub_180088F50(*v53, v50);
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
  sub_18001269C(v64, (__int64)&unk_180208690);
  v55 = sub_180087518(*a2, &v67, v64);
  sub_180088F50(*v55, v52);
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
