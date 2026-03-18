/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C018DF60
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01922C0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0188AC0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  _DWORD *v17; // rax

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  v11 = *((unsigned int *)a2 + 12);
  v12 = (unsigned int)v11;
  v13 = *a4;
  if ( *a4 >= (unsigned int)v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, (unsigned int)v11, v9, v10);
    v11 = *((unsigned int *)a2 + 12);
    v12 = v11;
    v13 = *a4;
  }
  if ( v13 < (unsigned int)v12 )
  {
    v14 = (_DWORD *)(*((_QWORD *)a2 + 17) + 480LL * v13 + 172);
    do
    {
      if ( *v14 == a3 )
        break;
      ++v13;
      v14 += 120;
    }
    while ( v13 < (unsigned int)v12 );
  }
  v15 = v13 == (_DWORD)v11;
  if ( v13 > (unsigned int)v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12, v9, v10);
    v15 = v13 == *((_DWORD *)a2 + 12);
  }
  if ( v15 )
  {
    v16 = *a4;
    v13 = 0;
    if ( !(_DWORD)v16 )
      goto LABEL_17;
    v17 = (_DWORD *)(*((_QWORD *)a2 + 17) + 172LL);
    do
    {
      if ( *v17 == a3 )
        break;
      ++v13;
      v17 += 120;
    }
    while ( v13 < (unsigned int)v16 );
    if ( v13 >= (unsigned int)v16 )
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v9, v10);
  }
  if ( v13 >= *((_DWORD *)a2 + 12) || *(unsigned __int16 *)(480LL * v13 + *((_QWORD *)a2 + 17) + 172) != a3 )
    return 0LL;
  *a4 = v13;
  return 1LL;
}
