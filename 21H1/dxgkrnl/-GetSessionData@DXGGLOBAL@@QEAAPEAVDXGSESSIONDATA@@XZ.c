/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01144D0
 * Callers:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C000BF80 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C100 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C5F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C000E3A8 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014B90 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0014FB0 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DXGFASTMUTEX *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)this + 88);
  v2 = 0LL;
  if ( v1 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
    v12 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL, v3);
      *(_QWORD *)(v9 + 24) = 760LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v12 + 2) == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
      *(_QWORD *)(v10 + 24) = 767LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v13 )
    {
      v11 = WdLogNewEntry5_WdCriticalError(CurrentThread, v3);
      *(_QWORD *)(v11 + 40) = &v12;
      *(_QWORD *)(v11 + 24) = 275LL;
      *(_QWORD *)(v11 + 32) = 4LL;
      *(_OWORD *)(v11 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    DXGFASTMUTEX::Acquire(v12);
    v13 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12, v6);
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * CurrentProcessSessionId);
      v13 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v12, v6);
      return (struct DXGSESSIONDATA *)v7;
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}
