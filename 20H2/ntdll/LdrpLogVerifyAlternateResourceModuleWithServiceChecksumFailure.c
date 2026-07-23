/*
 * XREFs of LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFDA4
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x18004BCC8 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043870 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x180084FF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A8EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // r10d
  __int16 v11; // [rsp+38h] [rbp-59h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  _DWORD *v17; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  _DWORD v20[2]; // [rsp+90h] [rbp-1h] BYREF
  __int16 *v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]
  __int64 v24; // [rsp+B0h] [rbp+1Fh]
  __int16 *v25; // [rsp+B8h] [rbp+27h]
  __int64 v26; // [rsp+C0h] [rbp+2Fh]
  __int64 v27; // [rsp+C8h] [rbp+37h]
  __int64 v28; // [rsp+D0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(
         &stru_18016D270,
         (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
         0LL,
         0LL);
  if ( v6 >= 0 && (unsigned int)dword_180166520 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_180166520, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v13 = 16777728LL;
      v16 = 8LL;
      v15 = &v13;
      v18 = 2LL;
      v17 = v20;
      v19 = *((_QWORD *)a1 + 1);
      v20[0] = *a1;
      v21 = &v11;
      v25 = &v12;
      v20[1] = v9;
      v11 = v9 + 4;
      v22 = 2LL;
      v23 = a2;
      v24 = 16LL;
      v12 = v9 + 4;
      v26 = 2LL;
      v27 = a3;
      v28 = 16LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwEventWriteTransfer(
                     v7,
                     (unsigned __int8 *)dword_18013181D,
                     (unsigned int)(v9 + 4),
                     v8,
                     9u,
                     &v14);
    }
  }
  return v6;
}
