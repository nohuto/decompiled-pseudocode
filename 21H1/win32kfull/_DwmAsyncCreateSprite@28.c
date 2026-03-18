/*
 * XREFs of _DwmAsyncCreateSprite@28 @ 0x1EE40
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncCreateSprite(void *a1, int a2, int a3, _DWORD *a4, int a5, const void *a6, int a7)
{
  __int64 v7; // kr00_8
  int v8; // edi
  _DWORD v12[49]; // [esp+28h] [ebp-C8h] BYREF

  do
    v7 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v7 );
  v8 = -1073741823;
  if ( a1 )
  {
    memset(v12, 0, 0xC0u);
    LOWORD(v12[1]) = 0x8000;
    v12[7] = a2;
    v12[13] = a5;
    v12[47] = a7;
    v12[0] = 12583080;
    v12[6] = 1073741826;
    v12[8] = a3;
    if ( a4 )
    {
      v12[9] = *a4;
      v12[10] = a4[1];
      v12[11] = a4[2];
      v12[12] = a4[3];
    }
    if ( a6 )
      qmemcpy(&v12[14], a6, 0x84u);
    EtwUpdateEvent(a3, 1073741826);
    v8 = LpcRequestPort(a1, v12);
    ObfDereferenceObject(a1);
  }
  return v8;
}
