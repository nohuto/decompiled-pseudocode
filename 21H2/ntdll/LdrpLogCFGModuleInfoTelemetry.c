/*
 * XREFs of LdrpLogCFGModuleInfoTelemetry @ 0x1800853A8
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800854F4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEEC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

struct _PEB *__fastcall LdrpLogCFGModuleInfoTelemetry(__int64 a1, __int64 a2)
{
  struct _PEB *result; // rax
  int v5; // ecx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  __int64 v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  int v14; // [rsp+7Ch] [rbp-Dh]
  __int64 v15; // [rsp+80h] [rbp-9h]
  _DWORD v16[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  int *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  int *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  __int64 *v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &LibLoaderTelemetryInitRunOnce,
                              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))LibLoaderTelemetryInitOnce,
                              0LL,
                              0LL);
    if ( (unsigned int)dword_1801664E8 > 5 )
    {
      result = (struct _PEB *)tlgKeywordOn(&dword_1801664E8, 0x200000000000LL);
      if ( (_BYTE)result )
      {
        v14 = 0;
        v16[1] = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v12 = v16;
        v15 = *(_QWORD *)(a1 + 80);
        v16[0] = *(unsigned __int16 *)(a1 + 72);
        v9 = *(unsigned int *)(a1 + 128);
        v17 = &v9;
        v7 = *(unsigned __int16 *)(a2 + 68);
        v20 = &v7;
        v8 = *(unsigned __int16 *)(a2 + 70);
        v23 = &v8;
        v10 = *(unsigned int *)(a2 + 88);
        v26 = &v10;
        v21 = 4;
        v24 = 4;
        v13 = 2;
        v18 = 8;
        v27 = 8;
        return (struct _PEB *)tlgWriteTransfer_EtwEventWriteTransfer(
                                v5,
                                (unsigned int)&unk_180131E9A,
                                8,
                                v6,
                                8,
                                (__int64)v11);
      }
    }
  }
  return result;
}
