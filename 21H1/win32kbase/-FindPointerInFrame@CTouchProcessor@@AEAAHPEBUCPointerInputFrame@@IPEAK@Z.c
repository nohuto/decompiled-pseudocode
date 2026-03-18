/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C0193C60
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0197FC0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C018E7C0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  _DWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  _DWORD *v14; // rax

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  v8 = *((unsigned int *)a2 + 12);
  v9 = v8;
  v10 = *a4;
  if ( *a4 >= (unsigned int)v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v8 = *((unsigned int *)a2 + 12);
    v9 = *((_DWORD *)a2 + 12);
    v10 = *a4;
  }
  if ( v10 < v9 )
  {
    v11 = (_DWORD *)(*((_QWORD *)a2 + 17) + 480LL * v10 + 172);
    do
    {
      if ( *v11 == a3 )
        break;
      ++v10;
      v11 += 120;
    }
    while ( v10 < v9 );
  }
  v12 = v10 == (_DWORD)v8;
  if ( v10 > (unsigned int)v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v12 = v10 == *((_DWORD *)a2 + 12);
  }
  if ( v12 )
  {
    v13 = *a4;
    v10 = 0;
    if ( !(_DWORD)v13 )
      goto LABEL_17;
    v14 = (_DWORD *)(*((_QWORD *)a2 + 17) + 172LL);
    do
    {
      if ( *v14 == a3 )
        break;
      ++v10;
      v14 += 120;
    }
    while ( v10 < (unsigned int)v13 );
    if ( v10 >= (unsigned int)v13 )
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  }
  if ( v10 >= *((_DWORD *)a2 + 12) || *(unsigned __int16 *)(480LL * v10 + *((_QWORD *)a2 + 17) + 172) != a3 )
    return 0LL;
  *a4 = v10;
  return 1LL;
}
