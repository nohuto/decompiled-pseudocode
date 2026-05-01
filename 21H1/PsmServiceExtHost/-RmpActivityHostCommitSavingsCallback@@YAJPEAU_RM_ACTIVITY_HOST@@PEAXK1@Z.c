/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18006ACE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // r9d
  bool v11; // [rsp+30h] [rbp-69h] BYREF
  int v12; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ProcessInformation[2]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+9Ch] [rbp+3h]
  __int64 *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  bool *v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  int *v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]

  v4 = *a4;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0].Ptr) = 3;
  HIDWORD(ProcessInformation[0].Ptr) = v4 != 0;
  v7 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
  {
    v14 = *((_QWORD *)a1 + 4);
    v27 = v9;
    v11 = v4 != 0;
    v26 = &v12;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v23 = &v11;
    v20 = &v14;
    v17 = &v13;
    v18 = v9;
    v12 = a3;
    v13 = v7;
    v24 = 1;
    v21 = 8;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18009BF30, 0LL, 0LL, 6u, &v16);
  }
  return v7;
}
