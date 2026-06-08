/*
 * XREFs of PepPerfStateControlHandler @ 0x1C000D830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 */

void __fastcall PepPerfStateControlHandler(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+28h] [rbp-10h]
  char v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+51h] [rbp+19h]
  char v10; // [rsp+52h] [rbp+1Ah]

  if ( a3 )
  {
    if ( !a4 )
    {
      v4 = *a2;
      v5 = *(_QWORD *)(a1 + 16);
      v8 = BYTE1(*a2);
      v9 = BYTE2(v4);
      v10 = v4;
      v6 = PoFxProcessorNotification(v5, 43LL, &v8);
      if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x26u,
          (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
          v7);
      }
    }
  }
}
