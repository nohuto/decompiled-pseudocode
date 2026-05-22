/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800AFFA8
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B1958 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180023798 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180023804 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800AFBE0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800B0458 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z @ 0x1800B21B8 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  const struct _MIT_INPUT_INTEROP_MESSAGE *v2; // rax
  bool v4; // zf
  unsigned int SizeForPointerCount; // eax
  __int64 v6; // r8
  const char *v7; // r9
  struct PointerInputInfo *v8; // rcx
  char *v9; // rax
  __int64 v10; // r9
  int *i; // r10
  int *v12; // r8
  char *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  struct PointerInputInfo *v15; // [rsp+20h] [rbp-39h] BYREF
  __int128 v16; // [rsp+30h] [rbp-29h] BYREF
  __int128 v17; // [rsp+40h] [rbp-19h]
  __int128 *v18; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall **v19)(); // [rsp+70h] [rbp+17h] BYREF
  __int128 v20; // [rsp+78h] [rbp+1Fh]
  __int128 v21; // [rsp+88h] [rbp+2Fh]
  __int64 (__fastcall ***v22)(); // [rsp+A8h] [rbp+4Fh]
  const struct _MIT_INPUT_INTEROP_MESSAGE *v23; // [rsp+C8h] [rbp+6Fh] BYREF
  char *v24; // [rsp+D0h] [rbp+77h] BYREF
  struct PointerInputInfo *v25; // [rsp+D8h] [rbp+7Fh] BYREF

  v23 = a2;
  v2 = a2;
  if ( !*(_DWORD *)a2 )
  {
    InputTraceLogging::ISM::ReceivePointerFrame(
      *((_QWORD *)a2 + 18),
      (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8),
      *((_DWORD *)a2 + 18),
      *((_DWORD *)a2 + 13));
    v2 = v23;
  }
  if ( *(_DWORD *)v2 || (v4 = IsEdition(253345LL) == 0, v2 = v23, v4) )
  {
    ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v2, 0LL);
  }
  else
  {
    v24 = (char *)v23 + 8;
    SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v23 + 13));
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
      (void **)&v15,
      SizeForPointerCount,
      v6,
      v7);
    v25 = v15;
    InitializeInputInfoWithPointerInfo(
      (const struct tagPOINTER_INFO_UNION *)(v24 + 56),
      *((_DWORD *)v24 + 12) != 0,
      v15);
    *((_DWORD *)v25 + 53) = *((_DWORD *)v24 + 11);
    *((_DWORD *)v25 + 11) = *((_DWORD *)v24 + 10);
    v8 = v25;
    v9 = v24;
    *(_OWORD *)((char *)v25 + 88) = *(_OWORD *)v24;
    *(_OWORD *)((char *)v8 + 104) = *((_OWORD *)v9 + 1);
    *((_QWORD *)v8 + 15) = *((_QWORD *)v9 + 4);
    v10 = 0LL;
    for ( i = (int *)v25; (unsigned int)v10 < *((_DWORD *)v25 + 53); i = (int *)v25 )
    {
      v12 = &i[36 * v10 + 54];
      v13 = &v24[240 * (unsigned int)v10];
      *(_OWORD *)v12 = *(_OWORD *)(v13 + 56);
      *((_OWORD *)v12 + 1) = *(_OWORD *)(v13 + 72);
      *((_OWORD *)v12 + 2) = *(_OWORD *)(v13 + 88);
      *((_OWORD *)v12 + 3) = *(_OWORD *)(v13 + 104);
      *((_OWORD *)v12 + 4) = *(_OWORD *)(v13 + 120);
      *((_OWORD *)v12 + 5) = *(_OWORD *)(v13 + 136);
      *((_OWORD *)v12 + 6) = *(_OWORD *)(v13 + 152);
      *((_OWORD *)v12 + 7) = *(_OWORD *)(v13 + 168);
      *((_OWORD *)v12 + 8) = *(_OWORD *)(v13 + 184);
      v10 = (unsigned int)(v10 + 1);
    }
    *(_QWORD *)&v16 = &v24;
    *((_QWORD *)&v16 + 1) = &v23;
    *(_QWORD *)&v17 = this;
    *((_QWORD *)&v17 + 1) = &v25;
    v19 = off_1801B0588;
    v20 = v16;
    v21 = v17;
    v22 = &v19;
    *(_QWORD *)&v16 = off_1801AB158;
    *((_QWORD *)&v16 + 1) = &v24;
    v18 = &v16;
    Win32kInterop::DeliverToContextualProcessing((__int64)this, i, (__int64)&v16, (__int64)&v19);
    if ( v15 )
      operator delete(v15, v14);
  }
}
