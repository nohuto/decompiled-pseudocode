/*
 * XREFs of _LdrpLogImportRedirectionTelemetry@4 @ 0x4B3304B6
 * Callers:
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

char __thiscall LdrpLogImportRedirectionTelemetry(int this)
{
  struct _PEB *v1; // eax
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-68h] BYREF
  _DWORD *v5; // [esp+30h] [ebp-48h]
  int v6; // [esp+34h] [ebp-44h]
  int v7; // [esp+38h] [ebp-40h]
  int v8; // [esp+3Ch] [ebp-3Ch]
  int v9; // [esp+40h] [ebp-38h]
  int v10; // [esp+44h] [ebp-34h]
  _DWORD v11[8]; // [esp+48h] [ebp-30h] BYREF
  _DWORD v12[3]; // [esp+68h] [ebp-10h] BYREF

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(
                   &LibLoaderTelemetryInitRunOnce,
                   (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce,
                   0,
                   0);
    if ( (unsigned int)dword_4B3A32F0 > 5 )
    {
      LOBYTE(v1) = _tlgKeywordOn(&dword_4B3A32F0, 0x200000000000LL);
      if ( (_BYTE)v1 )
      {
        v5 = v11;
        v9 = *(_DWORD *)(this + 40);
        v11[0] = *(unsigned __int16 *)(this + 36);
        v11[2] = v12;
        v11[6] = *(_DWORD *)(LdrpImageEntry + 40);
        v12[0] = *(unsigned __int16 *)(LdrpImageEntry + 36);
        v7 = 2;
        v11[4] = 2;
        v6 = 0;
        v8 = 0;
        v10 = 0;
        v11[1] = 0;
        v11[3] = 0;
        v11[5] = 0;
        v11[7] = 0;
        v12[1] = 0;
        LOBYTE(v1) = _tlgWriteTransfer_EtwEventWriteTransfer(2, 2, 6u, &UserData);
      }
    }
  }
  return (char)v1;
}
