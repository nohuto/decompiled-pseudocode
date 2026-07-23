/*
 * XREFs of RtlpHpStackDbLogStackDbSnapshot @ 0x1801088F4
 * Callers:
 *     RtlpHpStackTraceEventWriter @ 0x180109200 (RtlpHpStackTraceEventWriter.c)
 * Callees:
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpStackDbLogStackDbSnapshot(int a1, int a2, int a3, __int64 a4)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  int *v6; // [rsp+30h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  int *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  int v13; // [rsp+80h] [rbp+10h] BYREF
  int v14; // [rsp+88h] [rbp+18h] BYREF
  int v15; // [rsp+90h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  v11 = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = 4LL;
  UserData.Ptr = (unsigned __int64)&v13;
  v9 = 4LL;
  v6 = &v14;
  v10 = a4;
  v12 = 0;
  v8 = &v15;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, &HeapSnapshotSnap, 4u, &UserData);
}
