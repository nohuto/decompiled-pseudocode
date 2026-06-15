/*
 * XREFs of ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140060B60
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400628D0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140060914 (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140061144 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

bool __fastcall CCrossProcessBaseEndpoint::GetNextTimestampMessage(
        volatile __int32 **this,
        struct SharedMessageQueueItem *a2)
{
  __int32 v3; // ebx
  CCrossProcessBaseEndpoint *v5; // rcx
  __int64 v6; // rsi
  struct SharedMessageQueueItem *v7; // rax
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  volatile __int32 *v12; // rax
  bool v13; // zf
  volatile __int32 *v14; // rcx
  volatile __int32 *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-24h] BYREF
  struct SharedMessageQueueItem *v19; // [rsp+38h] [rbp-20h] BYREF
  bool v20; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0LL;
  v20 = 0;
  CCrossProcessBaseEndpoint::GetCurrentQueue((CCrossProcessBaseEndpoint *)this, &v19, &v21, &v17, &v18, &v20);
  v6 = v21;
  if ( v21 != v17 )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(v5, v21, v18) )
    {
      v7 = v19;
      v8 = v6 + 1;
      v9 = *((_OWORD *)v19 + 4 * v6 + 1);
      *(_OWORD *)a2 = *((_OWORD *)v19 + 4 * v6);
      v10 = *((_OWORD *)v7 + 4 * v6 + 2);
      *((_OWORD *)a2 + 1) = v9;
      v11 = *((_OWORD *)v7 + 4 * v6 + 3);
      v12 = this[9];
      *((_OWORD *)a2 + 2) = v10;
      *((_OWORD *)a2 + 3) = v11;
      v13 = *((_DWORD *)v12 + 45) == -1;
      v14 = this[9];
      v15 = this[10];
      if ( v13 )
      {
        if ( v8 != *((_DWORD *)v15 + 33) )
          v3 = v6 + 1;
      }
      else if ( v8 == *((_DWORD *)v15 + 37) )
      {
        _InterlockedExchange(v14 + 45, -1);
        _InterlockedExchange(this[9] + 46, 0);
        v14 = this[9] + 47;
      }
      else
      {
        v14 += 46;
        v3 = v6 + 1;
      }
      _InterlockedExchange(v14, v3);
      LOBYTE(v3) = 1;
    }
    else
    {
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetNextTimestampMessage", 0x57Fu, -2147467259);
    }
  }
  return v3;
}
