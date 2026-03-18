/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C018C008
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018C12C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C018C1D8 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0196B1C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int16 v7; // r14
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rdi

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = *(_QWORD **)a2;
  v7 = *(_WORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v9 = *(_QWORD **)(a2 + 8), *v9 != a2) )
    __fastfail(3u);
  *v9 = v6;
  v6[1] = v9;
  Win32FreePool(a2);
  if ( v8 )
  {
    v14 = *(_DWORD *)(v8 + 16);
    if ( v14 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v8 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v8 + 168));
      v14 = *(_DWORD *)(v8 + 16);
    }
    v15 = v14 - 1;
    *(_DWORD *)(v8 + 16) = v15;
    if ( !v15 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v8);
  }
  v16 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
    v17 = v6 - 30;
    if ( *((_WORD *)v6 - 104) != v7 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
      v16 = (_QWORD *)*v6;
    }
    if ( v16 != v6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    if ( (_QWORD *)v17[28] != v17 + 28 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    if ( *((_DWORD *)v17 + 13) == 3 )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v6 - 30));
  }
}
