/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140001DDC
 * Callers:
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001D50 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001480 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        HANDLE *this,
        int a2,
        _QWORD *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  unsigned int v7; // ebx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  unsigned int v13; // eax
  int v14; // eax

  v7 = 0;
  v11 = HeapAlloc(this[6], 8u, 0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    v11[10] = a2;
    *v11 = 3670032;
    *((_QWORD *)v11 + 6) = *a3;
    v13 = NtAlpcSendWaitReceivePort(this[2], 0x20000LL, v11, 0LL, v11);
    v14 = CPortClient::CheckStatus((CPortClient *)this, v13);
    if ( v14 < 0 )
    {
      v7 = v14 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v14 | 0x10000000,
        0x216u);
    }
    else
    {
      *a7 = v12[11];
    }
    HeapFree(this[6], 0, v12);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0x204u);
  }
  return v7;
}
