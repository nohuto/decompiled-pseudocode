/*
 * XREFs of DwmAsyncSendWindowArrangingData @ 0x1C0274D60
 * Callers:
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02853FC (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C02855DC (bSetDevPreviewRect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall DwmAsyncSendWindowArrangingData(PVOID Object, int a2, __int64 a3, __int128 *a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  _QWORD v12[10]; // [rsp+20h] [rbp-88h] BYREF

  v9 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v12, 0, sizeof(v12));
    v10 = *a4;
    LODWORD(v12[0]) = 5242920;
    WORD2(v12[0]) = 0x8000;
    v12[9] = a5;
    LODWORD(v12[5]) = 1073741928;
    HIDWORD(v12[5]) = a2;
    v12[6] = a3;
    *(_OWORD *)&v12[7] = v10;
    EtwUpdateEvent(0LL, 1073741928LL);
    v9 = LpcRequestPort(Object, v12);
    ObfDereferenceObject(Object);
  }
  return v9;
}
