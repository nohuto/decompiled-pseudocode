/*
 * XREFs of rimObsCopyMessage @ 0x1C0184B50
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C018549C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C0185714 (rimObsPushInputMessage.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01848AC (rimObsCalculateObserverMessageSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCopyMessage(int *a1, int a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  unsigned int v8; // eax
  int v9; // r15d
  unsigned __int64 v11; // rcx
  void **v12; // rdx
  void **v13; // r9
  _QWORD *v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  void *v17; // rcx
  ULONG64 v18; // r9

  v4 = a4;
  v8 = rimObsCalculateObserverMessageSize(a1);
  v9 = *a1;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v9 )
  {
    v11 = *((_QWORD *)a1 + 3) + 48LL;
    if ( v4 < v11 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  }
  if ( a2 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    v12 = a3 + 6;
    if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v12 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    if ( !v9 && *((_QWORD *)a1 + 5) )
    {
      v13 = a3 + 5;
      v14 = a3 + 5;
      if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v14 = v12;
      v15 = *((_QWORD *)a1 + 3);
      v16 = (const void *)*((_QWORD *)a1 + 5);
      v17 = *v13;
      v18 = (ULONG64)*v13 + v15;
      if ( v18 > MmUserProbeAddress || v18 <= (unsigned __int64)v17 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v16, v15);
    }
  }
  else
  {
    memset(a3, 0, v4);
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    if ( !v9 )
    {
      if ( *((_QWORD *)a1 + 5) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *((const void **)a1 + 5), *((_QWORD *)a1 + 3));
      }
    }
  }
  return 0LL;
}
