/*
 * XREFs of LdrpLogCFGModuleInfoTelemetry @ 0x180084DA8
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x180084EF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

int __fastcall LdrpLogCFGModuleInfoTelemetry(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  int v5; // ecx
  int v6; // r9d
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  __int64 v16; // [rsp+80h] [rbp-9h]
  _DWORD v17[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  int *v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]
  int *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  __int64 *v27; // [rsp+C0h] [rbp+37h]
  int v28; // [rsp+C8h] [rbp+3Fh]
  int v29; // [rsp+CCh] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LODWORD(v2) = RtlRunOnceExecuteOnce(&LibLoaderTelemetryInitRunOnce, LibLoaderTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_180164418 > 5 )
    {
      LODWORD(v2) = tlgKeywordOn(&dword_180164418, 0x200000000000LL);
      if ( (_BYTE)v2 )
      {
        v15 = 0;
        v17[1] = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v13 = v17;
        v16 = *(_QWORD *)(a1 + 80);
        v17[0] = *(unsigned __int16 *)(a1 + 72);
        v10 = *(unsigned int *)(a1 + 128);
        v18 = &v10;
        v8 = *(unsigned __int16 *)(a2 + 68);
        v21 = &v8;
        v9 = *(unsigned __int16 *)(a2 + 70);
        v24 = &v9;
        v11 = *(unsigned int *)(a2 + 88);
        v27 = &v11;
        v22 = 4;
        v25 = 4;
        v14 = 2;
        v19 = 8;
        v28 = 8;
        LODWORD(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v5, (int)&dword_18013035A, 8, v6, 8u, &v12);
      }
    }
  }
  return (int)v2;
}
