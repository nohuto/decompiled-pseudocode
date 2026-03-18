/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DA08C
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01D9F50 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001EE50 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01DA210 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C01DA400 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        void **this,
        DXGPUSHLOCK **a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v9; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v14; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v15; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v16; // rbx
  int v17; // ebp
  unsigned __int64 v18; // rax
  char *v19; // rax
  char *v20; // rsi
  const void *v21; // rdx

  v4 = a3;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v9 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 224)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[113] + ProcessSessionId)) == 0LL )
  {
    if ( v4 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
      DXGPUSHLOCK::AcquireExclusive(a2[1]);
      *((_DWORD *)a2 + 4) = 2;
      if ( (unsigned int)v9 >= *((_DWORD *)this + 224) )
      {
        v17 = v9 + 4;
        v18 = 8LL * (unsigned int)(v9 + 4);
        if ( !is_mul_ok((unsigned int)(v9 + 4), 8uLL) )
          v18 = -1LL;
        v19 = (char *)operator new[](v18, 0x4B677844u, 256LL, v11);
        v20 = v19;
        if ( !v19 )
        {
          WdLogSingleEntry2(2LL, this, v9);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"No memory for the new Present History Token queue session table on ADAPTER_RENDER 0x%I64x for session 0x%I64x",
            (__int64)this,
            v9,
            0LL,
            0LL,
            0LL);
          return 0LL;
        }
        v21 = this[113];
        if ( v21 )
          memmove(v19, v21, 8LL * *((unsigned int *)this + 224));
        memset(&v20[8 * *((unsigned int *)this + 224)], 0, 8LL * (unsigned int)(v17 - *((_DWORD *)this + 224)));
        operator delete[](this[113]);
        this[113] = v20;
        *((_DWORD *)this + 224) = v17;
      }
      v12 = this[113];
      v13 = v9;
      if ( v12[v9] )
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)v12[v13];
      v14 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, 64LL, v11);
      if ( v14 && (v15 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v14), (v16 = v15) != 0LL) )
      {
        if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v15) >= 0 )
        {
          *((_QWORD *)this[113] + v13) = v16;
          v12 = this[113];
          return (struct DXGPRESENTHISTORYTOKENQUEUE *)v12[v13];
        }
        DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v16);
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"No memory for the new Present History Token queue on ADAPTER_RENDER 0x%I64x for session 0x%I64x",
          (__int64)this,
          v13,
          0LL,
          0LL,
          0LL);
      }
    }
    return 0LL;
  }
  return result;
}
