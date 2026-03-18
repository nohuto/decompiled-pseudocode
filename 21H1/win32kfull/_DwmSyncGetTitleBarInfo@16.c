/*
 * XREFs of _DwmSyncGetTitleBarInfo@16 @ 0x1D2C74
 * Callers:
 *     _xxxGetTitleBarInfoEx@8 @ 0x1A70D8 (_xxxGetTitleBarInfoEx@8.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmSyncGetTitleBarInfo(int a1, int a2, void *a3, void *a4)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  PVOID Object[2]; // [esp+14h] [ebp-C4h] BYREF
  void *v9; // [esp+1Ch] [ebp-BCh]
  int v10; // [esp+20h] [ebp-B8h] BYREF
  __int16 v11; // [esp+24h] [ebp-B4h] BYREF
  int v12; // [esp+26h] [ebp-B2h]
  int v13; // [esp+2Ah] [ebp-AEh]
  int v14; // [esp+2Eh] [ebp-AAh]
  int v15; // [esp+32h] [ebp-A6h]
  __int16 v16; // [esp+36h] [ebp-A2h]
  int v17; // [esp+38h] [ebp-A0h]
  int v18; // [esp+3Ch] [ebp-9Ch]
  _DWORD v19[37]; // [esp+40h] [ebp-98h] BYREF

  v4 = -1073741823;
  v9 = a4;
  Object[1] = a3;
  if ( a1 )
  {
    v4 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v12 = 0;
      v13 = 0;
      Object[0] = (PVOID)176;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v19[35] = 0;
      v11 = 0x8000;
      v18 = a2;
      v10 = 11534488;
      v17 = 1073741849;
      qmemcpy(v19, a3, 0x8Cu);
      v5 = LpcSendWaitReceivePort(a1, &loc_20000, &v10, &v10, Object, 0);
      v4 = SyncLpcCheckNtStatus(v5, (int)&v11);
      if ( v4 >= 0 )
      {
        if ( v19[1] == 140 )
        {
          v6 = v19[36];
          qmemcpy(v9, &v19[1], 0x8Cu);
          *(_DWORD *)v10 = v6;
        }
        else
        {
          v4 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object[0]);
  }
  return v4;
}
