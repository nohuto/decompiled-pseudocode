/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C0189A50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE_HEADER *const a2,
        __int64 a3)
{
  char v3; // si
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *v10; // rsi
  const struct _DXGKWIN32KENG_INTERFACE_HEADER *v11; // rdi
  int v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]
  char v14; // [rsp+60h] [rbp-10h]
  struct DXGPROCESS *v15; // [rsp+A8h] [rbp+38h] BYREF

  v12 = -1;
  v3 = a3;
  v13 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2000);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2000);
  if ( v3 == 1 )
  {
    if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1)) && (*(_WORD *)a2 != 464 || *((_WORD *)a2 + 1) != 11) )
    {
      WdLogSingleEntry4(1LL, *((unsigned __int16 *)a2 + 1), *(unsigned __int16 *)a2, 11LL, 464LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Interface mismatch between Win32k (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
        *((unsigned __int16 *)a2 + 1),
        *(unsigned __int16 *)a2,
        11LL,
        464LL,
        0LL);
      v6 = -1073741811;
      goto LABEL_6;
    }
    v15 = 0LL;
    if ( DXGPROCESS::CreateDxgProcess(&v15, 0LL, 0LL, 0, 0LL) >= 0 )
    {
      v10 = v15;
      *a1 = v15;
      v11 = (const struct _DXGKWIN32KENG_INTERFACE_HEADER *)&gDxgkWin32kEngInterface;
      if ( *(_WORD *)a2 )
        v11 = a2;
      if ( v11 )
        *((_DWORD *)v10 + 106) = ((*((unsigned int (**)(void))v11 + 27))() != 0 ? 4 : 0) | *((_DWORD *)v10 + 106) & 0xFFFFFFFB;
      *((_QWORD *)v10 + 11) = v11;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  v6 = 0;
LABEL_6:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v12);
  }
  return v6;
}
