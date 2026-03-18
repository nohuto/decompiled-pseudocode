/*
 * XREFs of _DwmSyncSignalGhost@8 @ 0x1D2F17
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YGHPAU_GHOSTINFO@@@Z @ 0x170464 (-xxxSendSyncGHOSTINFO@@YGHPAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall DwmSyncSignalGhost(void *a1, void *a2)
{
  unsigned int v2; // esi
  PVOID v3; // ebx
  int v4; // eax
  _WORD v6[3]; // [esp+Ch] [ebp-40h] BYREF
  int v7; // [esp+12h] [ebp-3Ah]
  int v8; // [esp+16h] [ebp-36h]
  int v9; // [esp+1Ah] [ebp-32h]
  int v10; // [esp+1Eh] [ebp-2Eh]
  __int16 v11; // [esp+22h] [ebp-2Ah]
  int v12; // [esp+24h] [ebp-28h]
  _BYTE v13[24]; // [esp+28h] [ebp-24h] BYREF
  void *v14; // [esp+40h] [ebp-Ch]
  int v15; // [esp+44h] [ebp-8h] BYREF
  PVOID Object; // [esp+48h] [ebp-4h]

  v14 = a2;
  Object = a1;
  v2 = -1073741823;
  if ( a1 )
  {
    v2 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( _gbInVideoPnpCallout )
    {
      v3 = a1;
    }
    else
    {
      v12 = 1073741876;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v6[0] = 28;
      v6[2] = 0x8000;
      v6[1] = 52;
      v15 = 52;
      v3 = Object;
      qmemcpy(v13, a2, sizeof(v13));
      v4 = LpcSendWaitReceivePort(Object, &loc_20000, v6, v6, &v15, 0);
      v2 = v4;
      if ( v4 >= 0 )
      {
        qmemcpy(v14, v13, 0x18u);
        v2 = v4;
      }
    }
    ObfDereferenceObject(v3);
  }
  return v2;
}
