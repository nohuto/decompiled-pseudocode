/*
 * XREFs of _DwmSyncHitTestQuery@40 @ 0xBF4BC
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmSyncHitTestQuery(
        PVOID Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9,
        int a10)
{
  int v11; // esi
  int v12; // eax
  int v14; // [esp+10h] [ebp-5Ch] BYREF
  _WORD v15[3]; // [esp+14h] [ebp-58h] BYREF
  int v16; // [esp+1Ah] [ebp-52h]
  int v17; // [esp+1Eh] [ebp-4Eh]
  int v18; // [esp+22h] [ebp-4Ah]
  int v19; // [esp+26h] [ebp-46h]
  __int16 v20; // [esp+2Ah] [ebp-42h]
  int v21; // [esp+2Ch] [ebp-40h]
  __int64 v22; // [esp+30h] [ebp-3Ch]
  int v23; // [esp+38h] [ebp-34h]
  int v24; // [esp+3Ch] [ebp-30h]
  int v25; // [esp+40h] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-28h]
  int v27; // [esp+48h] [ebp-24h]
  __int64 v28; // [esp+4Ch] [ebp-20h]
  int v29; // [esp+54h] [ebp-18h]
  int v30; // [esp+58h] [ebp-14h]
  int v31; // [esp+5Ch] [ebp-10h]

  v11 = -1073741823;
  if ( Object )
  {
    v11 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v21 = 1073741848;
      v20 = 0;
      v15[0] = 52;
      v15[2] = 0x8000;
      v22 = a2;
      v23 = a3;
      v24 = a9;
      v25 = a10;
      v26 = a4;
      v28 = a5;
      v29 = a6;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v30 = 0;
      v31 = 0;
      v15[1] = 76;
      v27 = 0;
      v14 = 76;
      v12 = LpcSendWaitReceivePort(Object, &loc_20000, v15, v15, &v14, 0);
      v11 = SyncLpcCheckNtStatus(v12, (int)v15);
      if ( v11 >= 0 )
      {
        *a7 = v30;
        *a8 = v31;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v11;
}
