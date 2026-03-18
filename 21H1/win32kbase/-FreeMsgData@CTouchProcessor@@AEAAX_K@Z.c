/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0194228
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C019434C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C01943F8 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019ED3C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  __int16 v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *(_DWORD *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v5 = *(_QWORD **)a2;
  v6 = *(_WORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = *(_QWORD **)(a2 + 8), *v8 != a2) )
    __fastfail(3u);
  *v8 = v5;
  v5[1] = v8;
  Win32FreePool(a2, a2, a3);
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 16);
    if ( v10 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 168));
      v10 = *(_DWORD *)(v7 + 16);
    }
    v11 = v10 - 1;
    *(_DWORD *)(v7 + 16) = v11;
    if ( !v11 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v7);
  }
  v12 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
    v13 = v5 - 30;
    if ( *((_WORD *)v5 - 104) != v6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v12 = (_QWORD *)*v5;
    }
    if ( v12 != v5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    if ( (_QWORD *)v13[28] != v13 + 28 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    if ( *((_DWORD *)v13 + 13) == 3 )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v5 - 30));
  }
}
