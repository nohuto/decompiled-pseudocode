/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402E4228
 * Callers:
 *     PopPepWork @ 0x1402E3E30 (PopPepWork.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int v6; // r14d
  REGHANDLE v10; // rbx
  int v11; // r8d
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // r9
  char v15; // al
  REGHANDLE v16; // rbx
  REGHANDLE v17; // rbx
  int ActivityId; // [rsp+28h] [rbp-E0h]
  int RelatedActivityId; // [rsp+30h] [rbp-D8h]
  char v21; // [rsp+48h] [rbp-C0h] BYREF
  char v22; // [rsp+49h] [rbp-BFh] BYREF
  char v23; // [rsp+4Ah] [rbp-BEh] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  char *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  char *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  char *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v35[32]; // [rsp+E8h] [rbp-20h] BYREF
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  __int64 v39; // [rsp+158h] [rbp+50h] BYREF

  v5 = &retaddr;
  v39 = a1;
  v6 = a5;
  if ( a4 == 2 )
  {
    if ( (unsigned int)dword_140C021E8 > 5 )
    {
      LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL);
      if ( (_BYTE)v5 )
      {
        v24 = v6;
        v36 = &v24;
        v37 = v14;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(
                       (int)&dword_140C021E8,
                       (int)byte_140027345,
                       v13,
                       1,
                       ActivityId,
                       RelatedActivityId,
                       3u,
                       (__int64)v35);
      }
    }
  }
  else if ( a4 == 3 )
  {
    _m_prefetchw(&PopLogFxDefaultPepWorkerOrphaned);
    LODWORD(v5) = _InterlockedAnd(&PopLogFxDefaultPepWorkerOrphaned, 0);
    if ( (_DWORD)v5 )
    {
      if ( (unsigned int)dword_140C021E8 > 5 )
      {
        LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL);
        if ( (_BYTE)v5 )
        {
          LODWORD(v25) = v6;
          v34[4] = (__int64)&v25;
          v34[5] = v12;
          v34[6] = (__int64)&v26;
          v26 = 0x1000000LL;
          v34[7] = 8LL;
          LOBYTE(v5) = tlgWriteEx_EtwWriteEx(
                         (int)&dword_140C021E8,
                         (int)&word_14002747E,
                         v11,
                         1,
                         ActivityId,
                         RelatedActivityId,
                         v12,
                         (__int64)v34);
        }
      }
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END)
      || EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v15 = -1;
        }
        else
        {
          v15 = a3;
          if ( a2 == 3 )
            v15 = -2;
        }
      }
      else
      {
        v15 = -3;
      }
      v21 = v15;
      v22 = a4;
      UserData.Ptr = (ULONGLONG)&v39;
      v23 = v6;
      v28 = &v21;
      v30 = &v22;
      v32 = &v23;
      *(_QWORD *)&UserData.Size = 8LL;
      v29 = 1LL;
      v31 = 1LL;
      v33 = 1LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        v16 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        LOBYTE(v5) = EtwWriteEx(
                       v16,
                       &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED,
                       0LL,
                       1u,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
      if ( a4 == 3 )
      {
        v17 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWriteEx(
                         v17,
                         &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED,
                         0LL,
                         1u,
                         0LL,
                         0LL,
                         4u,
                         &UserData);
      }
    }
  }
  return (char)v5;
}
