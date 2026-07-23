/*
 * XREFs of _RtlpHpStackDbLogStackDbEnd@8 @ 0x4B36DCFB
 * Callers:
 *     _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0 (_RtlpHpStackTraceEventWriter@12.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __fastcall RtlpHpStackDbLogStackDbEnd(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-2Ch] BYREF
  int v4; // [esp+4h] [ebp-28h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-24h] BYREF
  int *v6; // [esp+18h] [ebp-14h]
  int v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  v4 = a1;
  UserData.Ptr = (unsigned int)&v4;
  v6 = &v3;
  v3 = a2;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v7 = 0;
  v8 = 4;
  v9 = 0;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, &HeapSnapshotEnd, 2u, &UserData);
}
