/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0018650
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // r12
  KIRQL v6; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rdi
  int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v15; // rcx
  KIRQL v16; // al
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h]
  char v22; // [rsp+70h] [rbp-19h]
  _BYTE v23[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v20) = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    LODWORD(v20) = 5122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5122LL);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 5122);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)a1 + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4484LL));
  v6 = KeGetCurrentIrql();
  v7 = v6;
  v8 = 0LL;
  if ( v6 < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)a1 + 2));
  v10 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))(*((_QWORD *)a1 + 2) + 1024LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 280LL),
          a2);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v16 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v7, v16);
  }
  if ( v8 )
  {
    v15 = *((int *)v8 + 12);
    if ( (_DWORD)v15 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v15, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4484LL));
  if ( (_DWORD)v10 != -1073741267 && (_DWORD)v10 != -2147483631 )
  {
    if ( (_DWORD)v10 )
    {
      WdLogSingleEntry1(2LL, v10);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0,
            0,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v10,
            0LL,
            0LL,
            0LL,
            0LL,
            v20,
            v21);
      }
    }
  }
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)a1 + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, (unsigned int)v20);
  return (unsigned int)v10;
}
