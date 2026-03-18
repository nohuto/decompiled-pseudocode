/*
 * XREFs of ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002088
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F74 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001480 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequest(CPortClient *this, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // eax
  int v5; // eax
  _BYTE v7[18]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+52h] [rbp-26h]
  _TBYTE v9; // [rsp+62h] [rbp-16h]
  __int16 v10; // [rsp+6Ch] [rbp-Ch]
  __int16 v11; // [rsp+6Eh] [rbp-Ah]

  v2 = 0;
  *(_OWORD *)&v7[2] = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v9 = 0LL;
  v10 = 0;
  *(_DWORD *)((char *)&v9 + 6) = a2;
  v11 = 0;
  *(_DWORD *)v7 = 3145736;
  v4 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 2), 0x10000LL, v7, 0LL, 0LL);
  v5 = CPortClient::CheckStatus(this, v4);
  if ( v5 < 0 )
  {
    v2 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9LL,
      v5 | 0x10000000,
      0x180u);
  }
  return v2;
}
