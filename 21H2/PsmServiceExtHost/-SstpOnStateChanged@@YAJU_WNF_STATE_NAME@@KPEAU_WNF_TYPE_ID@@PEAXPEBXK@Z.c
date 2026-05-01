/*
 * XREFs of ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003EC20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x18003ED10 (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003ED60 (-SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall SstpOnStateChanged(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        void *a5,
        unsigned int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // ebx
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+34h] [rbp-85h] BYREF
  int v17; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-79h] BYREF
  char *v19; // [rsp+60h] [rbp-59h]
  __int64 v20; // [rsp+68h] [rbp-51h]
  int *v21; // [rsp+70h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-41h]
  int *v23; // [rsp+80h] [rbp-39h]
  __int64 v24; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-29h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A36A3,
      0LL,
      0LL,
      2u,
      &v25);
  RtlAcquireSRWLockExclusive(a4);
  a4[2] = GetCurrentThreadId();
  v10 = a4[4];
  v11 = a4[5];
  if ( v10 != 2 )
  {
    SstpStateChangeTriage(a1, a2, a3, a4, a5, a6);
    if ( a4[4] == 1 )
      SstpPublish((const struct _SYSTEM_STATE_TRACKER *)a4);
  }
  v12 = a4[5];
  a4[2] = 0;
  RtlReleaseSRWLockExclusive(a4);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v24 = v14;
    v23 = &v16;
    v22 = v14;
    v21 = &v17;
    v16 = v12;
    v19 = &v15;
    v17 = v11;
    v15 = v10;
    v20 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A36D1,
      0LL,
      0LL,
      5u,
      &v18);
  }
  return 0LL;
}
