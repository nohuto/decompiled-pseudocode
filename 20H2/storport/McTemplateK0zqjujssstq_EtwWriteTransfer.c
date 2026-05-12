/*
 * XREFs of McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C0046304
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0010870 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitResetBusSrb @ 0x1C0047A40 (RaUnitResetBusSrb.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048198 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0049F18 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C004AF08 (RaidUnitRequestTimeout.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC24 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjujssstq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  const char *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // rax
  __int64 v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v26; // [rsp+40h] [rbp-A1h]
  int v27; // [rsp+48h] [rbp-99h]
  int v28; // [rsp+4Ch] [rbp-95h]
  char *v29; // [rsp+50h] [rbp-91h]
  __int64 v30; // [rsp+58h] [rbp-89h]
  __int64 v31; // [rsp+60h] [rbp-81h]
  __int64 v32; // [rsp+68h] [rbp-79h]
  char *v33; // [rsp+70h] [rbp-71h]
  __int64 v34; // [rsp+78h] [rbp-69h]
  __int64 v35; // [rsp+80h] [rbp-61h]
  __int64 v36; // [rsp+88h] [rbp-59h]
  const char *v37; // [rsp+90h] [rbp-51h]
  int v38; // [rsp+98h] [rbp-49h]
  int v39; // [rsp+9Ch] [rbp-45h]
  const char *v40; // [rsp+A0h] [rbp-41h]
  int v41; // [rsp+A8h] [rbp-39h]
  int v42; // [rsp+ACh] [rbp-35h]
  const char *v43; // [rsp+B0h] [rbp-31h]
  int v44; // [rsp+B8h] [rbp-29h]
  int v45; // [rsp+BCh] [rbp-25h]
  char *v46; // [rsp+C0h] [rbp-21h]
  __int64 v47; // [rsp+C8h] [rbp-19h]
  char *v48; // [rsp+D0h] [rbp-11h]
  __int64 v49; // [rsp+D8h] [rbp-9h]

  v13 = -1LL;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v27 = v15;
  v16 = a9;
  if ( !a4 )
    a4 = L"NULL";
  v28 = 0;
  v26 = a4;
  v29 = &a5;
  v31 = a6;
  v33 = &a7;
  v35 = a8;
  v30 = 4LL;
  v32 = 16LL;
  v34 = 1LL;
  v36 = 16LL;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v38 = v18;
  v39 = 0;
  if ( !a9 )
    v16 = "NULL";
  v37 = v16;
  v19 = a10;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v41 = v21;
  v22 = a11;
  if ( !a10 )
    v19 = "NULL";
  v42 = 0;
  v40 = v19;
  if ( a11 )
  {
    do
      ++v13;
    while ( a11[v13] );
    v23 = (unsigned int)(v13 + 1);
  }
  else
  {
    v23 = 5LL;
  }
  v44 = v23;
  v45 = 0;
  if ( !a11 )
    v22 = "NULL";
  v47 = 4LL;
  v43 = v22;
  v49 = 4LL;
  v46 = &a12;
  v48 = &a13;
  return McGenEventWrite_EtwWriteTransfer(v23, &EventBusReset, 0LL, 0xBu, &v25);
}
