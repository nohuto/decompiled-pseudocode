/*
 * XREFs of LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFD10
 * Callers:
 *     LdrCreateEnclave @ 0x1800CCAE0 (LdrCreateEnclave.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x180084EF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(__int64 a1, int a2)
{
  struct _PEB *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801644C0 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_1801644C0, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = "LdrCreateEnclave";
        v15 = &v10;
        v18 = &v9;
        v13 = 17;
        v10 = a1;
        v16 = 8;
        v9 = a2;
        v19 = 4;
        LOBYTE(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned __int8 *)dword_180130150, v6, v7, 5u, &v11);
      }
    }
  }
  return (char)v2;
}
