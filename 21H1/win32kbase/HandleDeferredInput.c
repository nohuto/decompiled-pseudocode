/*
 * XREFs of HandleDeferredInput @ 0x1C0001120
 * Callers:
 *     NtUserSetInputServiceState @ 0x1C00351C0 (NtUserSetInputServiceState.c)
 * Callees:
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0001450 (WPP_RECORDER_SF_qiqdd.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0001534 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C00015A0 (ApiSetEditionDelQEntry.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z @ 0x1C0001660 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z.c)
 *     ApiSetEditionWakeSomeone @ 0x1C000190C (ApiSetEditionWakeSomeone.c)
 *     UpdateKeyStateForMessage @ 0x1C002E520 (UpdateKeyStateForMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall HandleDeferredInput(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r9d
  bool v6; // r10
  __int64 v8; // rax
  char v9; // r13
  __int64 v10; // rax
  __int128 *v11; // r8
  __int64 result; // rax
  __int64 **v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rdx
  KeyboardInputTelemetry *v16; // rcx
  char v17; // r14
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  __int64 *i; // rbx
  int v24; // ecx
  __int64 v25; // r8
  bool v26; // [rsp+B8h] [rbp+48h]

  v3 = *(_QWORD *)(a1 + 424);
  v4 = a3;
  v6 = a2 == 4;
  v26 = a2 == 4;
  v8 = *(_QWORD *)(v3 + 120);
  v9 = 1;
  if ( v8 )
    v10 = *(_QWORD *)(v8 + 16);
  else
    v10 = 0LL;
  v11 = &gObjDummyLock;
  if ( v10 )
    LODWORD(v11) = v10 + 384;
  result = *(_QWORD *)(v3 + 96);
  v13 = (__int64 **)(v3 + 24);
  v14 = *(__int64 **)(v3 + 24);
  if ( !v14 )
    goto LABEL_28;
  while ( 1 )
  {
    v15 = v14[13];
    if ( v15 != a1
      || (result = (unsigned int)(*((_DWORD *)v14 + 6) - 256), (unsigned int)result > 9)
      || (v16 = (KeyboardInputTelemetry *)*((unsigned int *)v14 + 25), ((unsigned int)v16 & 0x10000) == 0)
      && ((unsigned int)v16 & 0x20000) == 0
      && ((*(_DWORD *)(v15 + 1216) & 0x1000000) == 0 || ((unsigned int)v16 & 0x40000) != 0) )
    {
      v14 = (__int64 *)*v14;
      goto LABEL_46;
    }
    if ( v9 )
    {
      v9 = 0;
      KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(v16, (struct tagQMSG *)v14, v6);
      v4 = a3;
    }
    if ( (*(_DWORD *)(a1 + 1216) & 0x1000000) == 0 || (v17 = 1, v4 == *((_DWORD *)v14 + 39)) )
      v17 = 0;
    if ( a2 == 6 && !v17 && (*((_DWORD *)v14 + 25) & 0x200000) == 0 )
    {
      result = UpdateKeyStateForMessage(a1, v14);
      *((_DWORD *)v14 + 25) |= 0x200000u;
      return result;
    }
    if ( (*(_DWORD *)(a1 + 1216) & 0x1000000) == 0 && (*((_DWORD *)v14 + 25) & 0x10000) != 0 )
      *(_DWORD *)(v14[13] + 1216) &= ~0x20000000u;
    v18 = *((_DWORD *)v14 + 25);
    if ( (v18 & 0x10000) != 0 || (v18 & 0x20000) != 0 || (v18 & 0x80000) != 0 )
    {
      *((_DWORD *)v14 + 25) = v18 & 0xFFF4FFFF;
      ++*(_DWORD *)(v3 + 40);
      v18 = *((_DWORD *)v14 + 25);
    }
    *((_DWORD *)v14 + 25) = v18 | 0x40000;
    InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qiqdd(v20, v19, v21, 11);
    v22 = 0;
    if ( a2 != 2 && !v17 )
      break;
    if ( v14 == *(__int64 **)(v3 + 80) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v22) = 5;
        WPP_RECORDER_SF_qq(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v22,
          19,
          12,
          (__int64)&WPP_1c7a2d3f68873b8e54a3fdd9a54d5a8c_Traceguids,
          v3,
          *(_QWORD *)(v3 + 80));
      }
      *(_QWORD *)(v3 + 80) = 0LL;
    }
    if ( (*((_DWORD *)v14 + 25) & 0x200000) == 0 )
      UpdateKeyStateForMessage(a1, v14);
    result = ApiSetEditionDelQEntry(v3 + 24, v14);
    v14 = *v13;
    if ( !v17 )
      goto LABEL_28;
    v4 = a3;
    v6 = v26;
LABEL_46:
    if ( !v14 )
      goto LABEL_28;
  }
  if ( a2 == 5 )
    v14[4] = 229LL;
  v25 = *((unsigned int *)v14 + 6);
  *((_DWORD *)v14 + 25) |= 0x100000u;
  result = ApiSetEditionWakeSomeone(v3, a1, v25, v14);
LABEL_28:
  for ( i = *v13; i; i = (__int64 *)*i )
  {
    v24 = *((_DWORD *)i + 25);
    result = (unsigned int)-__CFSHR__(v24, 18);
    if ( __CFSHR__(v24, 18) && a2 != 4 && i[13] == a1 )
      break;
    if ( (v24 & 0x80000) != 0 || __CFSHR__(v24, 18) )
    {
      result = i[13];
      if ( result == a1 || *((_DWORD *)i + 24) == 4 )
      {
        *(_DWORD *)(result + 1216) &= ~0x20000000u;
        *((_DWORD *)i + 25) &= 0xFFF4FFFF;
        ++*(_DWORD *)(v3 + 40);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qiqdd(v24, (unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)v11, 13);
        *((_DWORD *)i + 25) |= 0x100000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)i);
        result = ApiSetEditionWakeSomeone(v3, a1, *((unsigned int *)i + 6), i);
      }
    }
  }
  return result;
}
