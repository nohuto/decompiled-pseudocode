/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0035384
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::ComputeUIPIForMouseEvent(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  int v2; // ebp
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  char v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h]

  v2 = 0;
  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v3 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 == v6 && *((_BYTE *)a2 + 128) )
  {
    v8 = 1;
    v10 = *(_QWORD *)((char *)a2 + 116);
    LOBYTE(v2) = *((_DWORD *)a2 + 31) != 0;
  }
  else
  {
    v8 = 0;
    if ( gptiCurrent )
    {
      v9 = *((_QWORD *)gptiCurrent + 53);
      v10 = *(_QWORD *)(v9 + 880);
      v2 = *(_DWORD *)(v9 + 12) >> 31;
    }
    else
    {
      v10 = 0xFFFFFFFFLL;
    }
  }
  DWORD2(v11) = v2;
  *(_QWORD *)&v11 = v10;
  BYTE12(v11) = v8;
  *(_OWORD *)((char *)a2 + 132) = v11;
}
