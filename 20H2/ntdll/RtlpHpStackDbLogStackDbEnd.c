/*
 * XREFs of RtlpHpStackDbLogStackDbEnd @ 0x180108A18
 * Callers:
 *     RtlpHpStackTraceEventWriter @ 0x1801093A0 (RtlpHpStackTraceEventWriter.c)
 * Callees:
 *     EtwEventWrite @ 0x18004F1F0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpStackDbLogStackDbEnd(int a1, int a2)
{
  _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-38h] BYREF
  int *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v3.Ptr = (unsigned __int64)&v7;
  v3.Reserved = 0;
  v3.Size = 4;
  v4 = &v8;
  v6 = 0;
  v5 = 4;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, &HeapSnapshotEnd, 2u, &v3);
}
