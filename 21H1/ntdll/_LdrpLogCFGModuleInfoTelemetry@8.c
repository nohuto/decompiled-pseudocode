/*
 * XREFs of _LdrpLogCFGModuleInfoTelemetry@8 @ 0x4B2ADD70
 * Callers:
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

struct _PEB *__fastcall LdrpLogCFGModuleInfoTelemetry(int a1, int a2)
{
  struct _PEB *result; // eax
  _DWORD v5[2]; // [esp+10h] [ebp-A0h] BYREF
  _DWORD v6[2]; // [esp+18h] [ebp-98h] BYREF
  int v7; // [esp+20h] [ebp-90h] BYREF
  int v8; // [esp+24h] [ebp-8Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+28h] [ebp-88h] BYREF
  _DWORD *v10; // [esp+48h] [ebp-68h]
  int v11; // [esp+4Ch] [ebp-64h]
  int v12; // [esp+50h] [ebp-60h]
  int v13; // [esp+54h] [ebp-5Ch]
  int v14; // [esp+58h] [ebp-58h]
  int v15; // [esp+5Ch] [ebp-54h]
  _DWORD v16[19]; // [esp+60h] [ebp-50h] BYREF

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &LibLoaderTelemetryInitRunOnce,
                              (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce,
                              0,
                              0);
    if ( (unsigned int)dword_4B3A32F0 > 5 )
    {
      result = (struct _PEB *)_tlgKeywordOn(0, 0x2000);
      if ( (_BYTE)result )
      {
        v11 = 0;
        v10 = v16;
        v14 = *(_DWORD *)(a1 + 40);
        v16[0] = *(unsigned __int16 *)(a1 + 36);
        v6[0] = *(_DWORD *)(a1 + 68);
        v16[2] = v6;
        v8 = *(unsigned __int16 *)(a2 + 68);
        v16[6] = &v8;
        v7 = *(unsigned __int16 *)(a2 + 70);
        v16[10] = &v7;
        v5[0] = *(_DWORD *)(a2 + 88);
        v16[14] = v5;
        v16[4] = 8;
        v16[8] = 4;
        v16[12] = 4;
        v16[16] = 8;
        v12 = 2;
        v13 = 0;
        v15 = 0;
        v16[1] = 0;
        v6[1] = 0;
        v16[3] = 0;
        v16[5] = 0;
        v16[7] = 0;
        v16[9] = 0;
        v16[11] = 0;
        v16[13] = 0;
        v5[1] = 0;
        v16[15] = 0;
        v16[17] = 0;
        return (struct _PEB *)_tlgWriteTransfer_EtwEventWriteTransfer(4, 4, 8u, &UserData);
      }
    }
  }
  return result;
}
