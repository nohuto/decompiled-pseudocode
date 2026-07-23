/*
 * XREFs of LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF934
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x180084EF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

char __fastcall LdrpLogMapAndVerifyResourceFileFailure(
        int a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        unsigned __int16 *a5)
{
  NTSTATUS v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+38h] [rbp-81h] BYREF
  int v14; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v15; // [rsp+40h] [rbp-79h] BYREF
  __int64 v16; // [rsp+48h] [rbp-71h] BYREF
  _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-61h] BYREF
  __int64 *v18; // [rsp+78h] [rbp-41h]
  __int64 v19; // [rsp+80h] [rbp-39h]
  int *v20; // [rsp+88h] [rbp-31h]
  __int64 v21; // [rsp+90h] [rbp-29h]
  _DWORD *v22; // [rsp+98h] [rbp-21h]
  __int64 v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  _DWORD v25[2]; // [rsp+B0h] [rbp-9h] BYREF
  char *v26; // [rsp+B8h] [rbp-1h]
  __int64 v27; // [rsp+C0h] [rbp+7h]
  int *v28; // [rsp+C8h] [rbp+Fh]
  __int64 v29; // [rsp+D0h] [rbp+17h]
  _DWORD *v30; // [rsp+D8h] [rbp+1Fh]
  __int64 v31; // [rsp+E0h] [rbp+27h]
  __int64 v32; // [rsp+E8h] [rbp+2Fh]
  _DWORD v33[2]; // [rsp+F0h] [rbp+37h] BYREF

  v9 = RtlRunOnceExecuteOnce(
         &stru_18016B250,
         (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
         0LL,
         0LL);
  if ( v9 >= 0 && (unsigned int)dword_180164450 > 5 )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)&dword_180164450, 0x200000000000LL);
    if ( (_BYTE)v9 )
    {
      v18 = &v16;
      v16 = 16777728LL;
      v20 = &v14;
      v22 = v25;
      v24 = *((_QWORD *)a2 + 1);
      v25[0] = *a2;
      v26 = &v13;
      v28 = &v15;
      v30 = v33;
      v32 = *((_QWORD *)a5 + 1);
      v33[0] = *a5;
      v19 = 8LL;
      v14 = a1;
      v21 = 4LL;
      v23 = 2LL;
      v25[1] = v11;
      v13 = a3;
      v27 = 1LL;
      v15 = a4;
      v29 = 4LL;
      v31 = 2LL;
      v33[1] = v11;
      LOBYTE(v9) = tlgWriteTransfer_EtwEventWriteTransfer(
                     (__int64)&dword_180164450,
                     (unsigned __int8 *)dword_18012FF93,
                     v10,
                     v11,
                     0xAu,
                     &v17);
    }
  }
  return v9;
}
