/*
 * XREFs of ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140044150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003BFDC (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003CE40 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14003D380 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  CPipeInstance *v5; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const struct CPipeInstance *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v5);
    v7 = CPipeInstance::ResolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1), 1LL, 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1257LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_11;
    }
  }
  else
  {
    v10 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v10 )
    {
      v7 = CPipeInstance::ConnectToRightPipe(a2, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1261LL;
        goto LABEL_9;
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1264LL;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_11:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
