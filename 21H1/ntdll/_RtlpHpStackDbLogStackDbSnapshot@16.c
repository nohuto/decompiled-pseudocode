/*
 * XREFs of _RtlpHpStackDbLogStackDbSnapshot@16 @ 0x4B36DD5E
 * Callers:
 *     _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0 (_RtlpHpStackTraceEventWriter@12.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __fastcall RtlpHpStackDbLogStackDbSnapshot(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-4Ch] BYREF
  int v6; // [esp+4h] [ebp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-44h] BYREF
  int *v8; // [esp+18h] [ebp-34h]
  int v9; // [esp+1Ch] [ebp-30h]
  int v10; // [esp+20h] [ebp-2Ch]
  int v11; // [esp+24h] [ebp-28h]
  int *v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+30h] [ebp-1Ch]
  int v15; // [esp+34h] [ebp-18h]
  int v16; // [esp+38h] [ebp-14h]
  int v17; // [esp+3Ch] [ebp-10h]
  int v18; // [esp+40h] [ebp-Ch]
  int v19; // [esp+44h] [ebp-8h]

  v5 = a2;
  UserData.Ptr = (unsigned int)&v6;
  v8 = &v5;
  v12 = &a3;
  v16 = a4;
  v18 = a3;
  v6 = a1;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v9 = 0;
  v10 = 4;
  v11 = 0;
  v13 = 0;
  v14 = 4;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  return EtwEventWrite(RtlpHpStackTraceProviderHandle, &HeapSnapshotSnap, 4u, &UserData);
}
