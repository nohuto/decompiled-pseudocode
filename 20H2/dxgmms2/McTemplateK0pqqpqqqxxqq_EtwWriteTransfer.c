/*
 * XREFs of McTemplateK0pqqpqqqxxqq_EtwWriteTransfer @ 0x1C002DA5C
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C29C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0023D10 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqpqqqxxqq_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-C9h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-B9h]
  __int64 v15; // [rsp+48h] [rbp-B1h]
  char *v16; // [rsp+50h] [rbp-A9h]
  __int64 v17; // [rsp+58h] [rbp-A1h]
  char *v18; // [rsp+60h] [rbp-99h]
  __int64 v19; // [rsp+68h] [rbp-91h]
  char *v20; // [rsp+70h] [rbp-89h]
  __int64 v21; // [rsp+78h] [rbp-81h]
  char *v22; // [rsp+80h] [rbp-79h]
  __int64 v23; // [rsp+88h] [rbp-71h]
  char *v24; // [rsp+90h] [rbp-69h]
  __int64 v25; // [rsp+98h] [rbp-61h]
  char *v26; // [rsp+A0h] [rbp-59h]
  __int64 v27; // [rsp+A8h] [rbp-51h]
  char *v28; // [rsp+B0h] [rbp-49h]
  __int64 v29; // [rsp+B8h] [rbp-41h]
  char *v30; // [rsp+C0h] [rbp-39h]
  __int64 v31; // [rsp+C8h] [rbp-31h]
  va_list v32; // [rsp+D0h] [rbp-29h]
  __int64 v33; // [rsp+D8h] [rbp-21h]
  va_list v34; // [rsp+E0h] [rbp-19h]
  __int64 v35; // [rsp+E8h] [rbp-11h]
  __int64 v36; // [rsp+128h] [rbp+2Fh] BYREF
  __int64 v37; // [rsp+170h] [rbp+77h] BYREF
  va_list va; // [rsp+170h] [rbp+77h]
  va_list va1; // [rsp+178h] [rbp+7Fh] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v37 = va_arg(va1, _QWORD);
  v36 = a4;
  v15 = 8LL;
  v14 = &v36;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 8LL;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  va_copy(v32, va);
  va_copy(v34, va1);
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 4LL;
  v35 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventIndependentFlip, a3, 0xCu, &v13);
}
