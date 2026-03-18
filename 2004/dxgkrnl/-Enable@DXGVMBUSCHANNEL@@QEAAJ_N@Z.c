/*
 * XREFs of ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C02B4E84
 * Callers:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C02B50A8 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B2898 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Enable(DXGVMBUSCHANNEL *this, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KEVENT *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  char v11; // si
  struct _KEVENT *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  void *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _BYTE v23[24]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( !*((_BYTE *)this + 26) && (!*((_BYTE *)this + 24) || *((_BYTE *)this + 25)) )
    {
      v7 = (struct _KEVENT *)*((_QWORD *)this + 4);
      if ( v7 )
      {
        KeClearEvent(v7);
        v6 = *((_QWORD *)this + 2);
      }
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = 1;
      v8 = ((__int64 (__fastcall *)(__int64))qword_1C00B30B0)(v6);
      v4 = v8;
      if ( v8 < 0 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v9, v5);
        v10[3] = v4;
        v10[4] = this;
        v10[5] = *((unsigned __int8 *)this + 24);
        v10[6] = *((unsigned __int8 *)this + 25);
        v10[7] = *((unsigned __int8 *)this + 26);
        WdLogEvent5_WdError(v10);
        *((_BYTE *)this + 24) = 0;
        *((_BYTE *)this + 26) = 0;
      }
      else if ( *((_BYTE *)this + 27) )
      {
        ((void (__fastcall *)(_QWORD))qword_1C00B3160)(*((_QWORD *)this + 2));
      }
    }
    v11 = a2 & *((_BYTE *)this + 24);
  }
  else
  {
    v11 = 0;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v5);
  if ( v11 )
  {
    v12 = (struct _KEVENT *)*((_QWORD *)this + 4);
    if ( v12 )
    {
      if ( !KeReadStateEvent(v12) )
      {
        v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v16 + 24) = this;
        WdLogEvent5_WdWarning(v16);
        Timeout.QuadPart = (-(__int64)((_BYTE)KdDebuggerEnabled != 0) & 0xFFFFFFFF56207380uLL) - 150000000;
        v17 = (void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = KeGetCurrentThread();
        v18 = KeWaitForSingleObject(v17, Executive, 0, 0, &Timeout);
        *((_QWORD *)this + 5) = 0LL;
        v4 = v18;
        if ( v18 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v20, v19);
          v21[3] = v4;
          v21[4] = this;
          v21[5] = *((unsigned __int8 *)this + 24);
          v21[6] = *((unsigned __int8 *)this + 25);
          v21[7] = *((unsigned __int8 *)this + 26);
          WdLogEvent5_WdAssertion(v21);
          LODWORD(v4) = -1073741823;
        }
      }
    }
  }
  if ( (int)v4 < 0 )
    DXGVMBUSCHANNEL::Disable(this);
  return (unsigned int)v4;
}
