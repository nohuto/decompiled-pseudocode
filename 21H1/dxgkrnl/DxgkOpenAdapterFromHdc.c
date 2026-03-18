/*
 * XREFs of DxgkOpenAdapterFromHdc @ 0x1C0149840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromHdc(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v11; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0 )
  {
    Current = DXGTHREAD::GetCurrent(v6, v5);
    if ( Current )
    {
      v8 = *((_QWORD *)Current + 1);
      if ( v8 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 88) + 456LL))(a1);
    }
  }
  v8 = v7;
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 88) + 456LL))(a1);
  v11 = WdLogNewEntry5_WdError(v6, v5);
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
