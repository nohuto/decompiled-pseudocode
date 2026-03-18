/*
 * XREFs of _DwmSyncCaptureSurfaceBits@44 @ 0xB368E
 * Callers:
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 */

int __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10,
        int *a11)
{
  signed int v12; // esi
  _DWORD *v13; // ebx
  int *v14; // ecx
  int v16; // [esp+4h] [ebp-58h]
  struct _PORT_MESSAGE *v17; // [esp+8h] [ebp-54h]
  _WORD v18[3]; // [esp+10h] [ebp-4Ch] BYREF
  int v19; // [esp+16h] [ebp-46h]
  int v20; // [esp+1Ah] [ebp-42h]
  int v21; // [esp+1Eh] [ebp-3Eh]
  int v22; // [esp+22h] [ebp-3Ah]
  __int16 v23; // [esp+26h] [ebp-36h]
  int v24; // [esp+28h] [ebp-34h]
  double v25; // [esp+2Ch] [ebp-30h]
  int v26; // [esp+34h] [ebp-28h]
  int v27; // [esp+38h] [ebp-24h]
  int v28; // [esp+3Ch] [ebp-20h]
  int v29; // [esp+40h] [ebp-1Ch]
  int v30; // [esp+44h] [ebp-18h]
  int v31; // [esp+48h] [ebp-14h]
  int v32; // [esp+4Ch] [ebp-10h]
  int v33; // [esp+50h] [ebp-Ch]

  v12 = -1073741823;
  if ( Object )
  {
    v12 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v13 = a10;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v18[0] = 44;
      v18[2] = 0x8000;
      v26 = a4;
      v27 = a5;
      v28 = a6;
      v29 = a7;
      v30 = *a10;
      v31 = a8;
      v25 = *(float *)&a3;
      v18[1] = 68;
      v24 = -2147483642;
      v32 = a9;
      v33 = a2;
      EtwUpdateEvent(0, -2147483642);
      a3 = 68;
      LpcSendWaitReceivePort(Object, &loc_20000, v18, v18, &a3, 0);
      v12 = SyncLpcCheckNtStatus(v16, v17);
      if ( v12 >= 0 && v18[0] == 16 )
      {
        if ( SLODWORD(v25) < 0 )
        {
          v12 = -1073741823;
        }
        else
        {
          v14 = a11;
          *v13 = HIDWORD(v25);
          *v14 = v26;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return v12;
}
