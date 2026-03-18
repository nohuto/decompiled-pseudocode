/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4
 * Callers:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007488 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E060 (DxgkGetSessionTokenManager.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00135F4 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013AB0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014500 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00149C0 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0016D40 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
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

  v1 = *((_QWORD *)this + 102);
  v2 = 0LL;
  if ( v1 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
    v12 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL, v3);
      *(_QWORD *)(v9 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v12 + 2) == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
      *(_QWORD *)(v10 + 24) = 769LL;
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
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
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
