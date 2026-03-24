/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0154FD4
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C0154EA0 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023ACE8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001AD48 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C0155158 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C0155344 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        void **this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v15; // rdi
  int v16; // ebp
  SIZE_T v17; // rax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rsi
  const void *v22; // rdx
  __int64 v23; // rax

  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 218)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[110] + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 218) )
    {
      v16 = v8 + 4;
      v17 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v17 = -1LL;
      v18 = (char *)operator new[](v17, 0x4B677844u, PagedPool);
      v21 = v18;
      if ( !v18 )
      {
        v23 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v23 + 32) = v8;
        goto LABEL_23;
      }
      v22 = this[110];
      if ( v22 )
        memmove(v18, v22, 8LL * *((unsigned int *)this + 218));
      memset(&v21[8 * *((unsigned int *)this + 218)], 0, 8LL * (unsigned int)(v16 - *((_DWORD *)this + 218)));
      operator delete[](this[110]);
      this[110] = v21;
      *((_DWORD *)this + 218) = v16;
    }
    v10 = this[110];
    v11 = v8;
    if ( v10[v8] )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
    v12 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v12 )
      v15 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v12);
    else
      v15 = 0LL;
    if ( v15 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v15) >= 0 )
      {
        *((_QWORD *)this[110] + v11) = v15;
        v10 = this[110];
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v15);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v23 + 32) = v11;
LABEL_23:
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    return 0LL;
  }
  return result;
}
