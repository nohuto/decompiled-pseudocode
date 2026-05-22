/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009599C
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094780 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094920 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x180095CD0 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003649C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180041054 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006DB38 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x180091A14 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180092AA8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180094F74 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(
        const struct TraceSessionConfig *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r14
  _WORD *v6; // rcx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  wil *v10; // rax
  const unsigned __int16 *v11; // rdx
  int DirectoryDeepNoThrow; // eax
  int v13; // esi
  unsigned int v14; // edi
  unsigned int *v15; // r13
  _QWORD *v16; // rcx
  char *v17; // r8
  const WCHAR *v18; // rdx
  const WCHAR *v19; // rdx
  ULONG started; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdi
  const WCHAR *v25; // rdx
  signed int v26; // eax
  signed int v27; // ebx
  ULONG64 TraceHandle[2]; // [rsp+50h] [rbp-31h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+60h] [rbp-21h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v32; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 v33; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v5 = (_QWORD *)((char *)a1 + 48);
  v6 = v5;
  if ( v5[3] >= 8uLL )
    v6 = (_WORD *)*v5;
  v7 = 1;
  v8 = std::_Traits_find_last_of<std::char_traits<unsigned short>>(v6, v5[2], a3, a4, 1LL);
  v10 = (wil *)std::wstring::substr(v5, (__int64)&EnableParameters, v9, v8);
  if ( *((_QWORD *)v10 + 3) >= 8uLL )
    v10 = *(wil **)v10;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow(v10, v11);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      86LL,
      (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate((__int64)&EnableParameters);
  std::wstring::wstring((__int64)InstanceName, (__int64)a1);
  v13 = 2 * v32;
  v14 = 2 * v32 + 644;
  v15 = (unsigned int *)operator new(v14);
  TraceHandle[1] = (ULONG64)v15;
  memset_0(v15, 0, v14);
  *v15 = v14;
  v15[11] = 0x20000;
  v15[10] = 1;
  *(_OWORD *)(v15 + 6) = *((_OWORD *)a1 + 2);
  v15[12] = *((_DWORD *)a1 + 20);
  v15[17] = *((_DWORD *)a1 + 21);
  v15[16] = *((_DWORD *)a1 + 22);
  v15[14] = *((_DWORD *)a1 + 23);
  v15[13] = *((_DWORD *)a1 + 24);
  v15[15] = *((_DWORD *)a1 + 25);
  v15[29] = 120;
  v15[28] = v13 + 122;
  v16 = v5;
  if ( v5[3] >= 8uLL )
    v16 = (_QWORD *)*v5;
  v17 = (char *)v16 + 2 * v5[2];
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  memmove_0((char *)v15 + (unsigned int)(v13 + 122), v5, v17 - (char *)v5);
  TraceHandle[0] = -1LL;
  if ( !a2 )
  {
    v25 = (const WCHAR *)InstanceName;
    if ( v33 >= 8 )
      v25 = InstanceName[0];
    v26 = ControlTraceW(0LL, v25, (PEVENT_TRACE_PROPERTIES)v15, 1u);
    v27 = v26;
    if ( v26 > 0 )
      v27 = (unsigned __int16)v26 | 0x80070000;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v27);
      v7 = v27;
      goto LABEL_24;
    }
LABEL_23:
    v7 = 0;
    goto LABEL_24;
  }
  v18 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v18 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v18, (PEVENT_TRACE_PROPERTIES)v15, 0) != 4201 )
    goto LABEL_24;
  v19 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v19 = *(const WCHAR **)a1;
  started = StartTraceW(TraceHandle, v19, (PEVENT_TRACE_PROPERTIES)v15);
  if ( !started )
  {
    v22 = *((_QWORD *)a1 + 13);
    v23 = *((_QWORD *)a1 + 14);
    while ( v22 != v23 )
    {
      memset(&EnableParameters.ControlFlags, 0, 40);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      started = EnableTraceEx2(
                  TraceHandle[0],
                  (LPCGUID)v22,
                  1u,
                  *(_BYTE *)(v22 + 16),
                  *(_QWORD *)(v22 + 24),
                  *(_QWORD *)(v22 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v21 = 148LL;
        goto LABEL_28;
      }
      v22 += 40LL;
    }
    goto LABEL_23;
  }
  v21 = 131LL;
LABEL_28:
  v7 = wil::details::in1diag3::Return_Win32(
         retaddr,
         v21,
         (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
         (const char *)started);
LABEL_24:
  if ( TraceHandle[0] != -1LL )
    CloseTrace(TraceHandle[0]);
  std::wstring::_Tidy_deallocate((__int64)InstanceName);
  operator delete(v15, (const struct std::nothrow_t *)0x78);
  return v7;
}
