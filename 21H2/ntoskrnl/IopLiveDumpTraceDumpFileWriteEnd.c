/*
 * XREFs of IopLiveDumpTraceDumpFileWriteEnd @ 0x140509810
 * Callers:
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896B80 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceDumpFileWriteEnd(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v4; // edx
  __int64 v5; // rcx
  bool v6; // zf
  _QWORD *v7; // rdx
  const EVENT_DESCRIPTOR *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h] BYREF
  __int64 v13; // [rsp+50h] [rbp-19h] BYREF
  __int64 v14; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 *v22; // [rsp+A0h] [rbp+37h]
  __int64 v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+E0h] [rbp+77h] BYREF

  v24 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v6 = v4 == 0;
    v7 = *(_QWORD **)(v5 + 560);
    v8 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_END;
    if ( !v6 )
      v8 = &LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_END;
    if ( v24 < 0 )
    {
      v11 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v9 = 0LL;
    }
    else
    {
      v11 = v7[500];
      v12 = v7[1028];
      v9 = v7[1029] << 12;
      v10 = v11 - v9 - v12;
    }
    v13 = v9;
    UserData.Ptr = (ULONGLONG)&v24;
    v14 = v10;
    v16 = &v11;
    v18 = &v12;
    v20 = &v13;
    v22 = &v14;
    *(_QWORD *)&UserData.Size = 4LL;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 8LL;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v8, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
