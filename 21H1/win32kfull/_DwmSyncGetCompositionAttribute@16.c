/*
 * XREFs of _DwmSyncGetCompositionAttribute@16 @ 0xBFC92
 * Callers:
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall DwmSyncGetCompositionAttribute(PVOID Object, int a2, int a3, const void *a4)
{
  int v5; // esi
  __int16 v6; // ax
  size_t v7; // eax
  int v8; // eax
  _DWORD v10[2]; // [esp+Ch] [ebp-5Ch] BYREF
  const void *v11; // [esp+14h] [ebp-54h]
  void *v12; // [esp+18h] [ebp-50h] BYREF
  __int16 v13; // [esp+1Ch] [ebp-4Ch] BYREF
  int v14; // [esp+1Eh] [ebp-4Ah]
  int v15; // [esp+22h] [ebp-46h]
  int v16; // [esp+26h] [ebp-42h]
  int v17; // [esp+2Ah] [ebp-3Eh]
  __int16 v18; // [esp+2Eh] [ebp-3Ah]
  int v19; // [esp+30h] [ebp-38h]
  int v20; // [esp+34h] [ebp-34h]
  int v21; // [esp+38h] [ebp-30h]
  int v22; // [esp+3Ch] [ebp-2Ch]
  int v23; // [esp+40h] [ebp-28h]
  size_t v24; // [esp+44h] [ebp-24h]
  _BYTE v25[28]; // [esp+48h] [ebp-20h] BYREF

  v10[0] = a2;
  v5 = -1073741823;
  v10[1] = a3;
  v11 = a4;
  if ( Object )
  {
    v5 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v19 = 1073741866;
      v18 = 0;
      v6 = MaxCount[2 * a3];
      v14 = 0;
      LOWORD(v12) = v6 + 24;
      HIWORD(v12) = 68;
      v13 = 0x8000;
      v21 = v10[0];
      v7 = MaxCount[2 * a3];
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v22 = 0;
      v24 = v7;
      v20 = 1;
      v23 = a3;
      qmemcpy(v25, a4, 0x14u);
      v10[0] = 68;
      v8 = LpcSendWaitReceivePort(Object, &loc_20000, &v12, &v12, v10, 0);
      v5 = SyncLpcCheckNtStatus(v8, (int)&v13);
      if ( v5 >= 0 )
        memcpy(v12, &v25[4], MaxCount[2 * (_DWORD)v11]);
    }
    ObfDereferenceObject(Object);
  }
  return v5;
}
