/*
 * XREFs of rimObsCopyMessage @ 0x1C017EE50
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C017EFC0 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017F79C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017FA14 (rimObsPushInputMessage.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C017EBAC (rimObsCalculateObserverMessageSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCopyMessage(__int64 a1, __int64 a2, void **a3, __int64 a4)
{
  SIZE_T v4; // rbx
  int v6; // r12d
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r15d
  unsigned __int64 v14; // rcx
  void **v15; // rdx
  void **v16; // r9
  _QWORD *v17; // rcx
  size_t v18; // r8
  const void *v19; // rdx
  void *v20; // rcx
  ULONG64 v21; // r9

  v4 = (unsigned int)a4;
  v6 = a2;
  v8 = rimObsCalculateObserverMessageSize((unsigned int *)a1, a2, (__int64)a3, a4);
  v12 = *(_DWORD *)a1;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( v4 < v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v9, v10, v11);
  }
  if ( v6 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    v15 = a3 + 6;
    if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v15 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
    if ( !v12 && *(_QWORD *)(a1 + 40) )
    {
      v16 = a3 + 5;
      v17 = a3 + 5;
      if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = v15;
      v18 = *(_QWORD *)(a1 + 24);
      v19 = *(const void **)(a1 + 40);
      v20 = *v16;
      v21 = (ULONG64)*v16 + v18;
      if ( v21 > MmUserProbeAddress || v21 <= (unsigned __int64)v20 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, v19, v18);
    }
  }
  else
  {
    memset(a3, 0, v4);
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
    if ( !v12 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *(const void **)(a1 + 40), *(_QWORD *)(a1 + 24));
      }
    }
  }
  return 0LL;
}
