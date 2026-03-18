/*
 * XREFs of ACPIWakeCompleteRequestQueue @ 0x1C002ED3C
 * Callers:
 *     ACPIWakeEmptyRequestQueue @ 0x1C002ECA8 (ACPIWakeEmptyRequestQueue.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C005A1F0 (OSNotifyDeviceWakeCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C004FD30 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

void __fastcall ACPIWakeCompleteRequestQueue(_QWORD **a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  const char *v6; // r8
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v6 = (const char *)&unk_1C006FB8B;
    v2 = (_QWORD *)*v2;
    v7 = (const char *)&unk_1C006FB8B;
    LOBYTE(v8) = 0;
    v9 = v5[5];
    if ( v9 )
    {
      v8 = v5[5];
      v10 = *(_QWORD *)(v9 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(v8 + 608);
        if ( (v10 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(v8 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xAu,
        (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
        (char)v5,
        a2,
        v8,
        v6,
        v7);
    *((_DWORD *)v5 + 64) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(v5, v7, v6);
  }
}
