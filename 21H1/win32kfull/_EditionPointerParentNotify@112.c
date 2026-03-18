/*
 * XREFs of _EditionPointerParentNotify@112 @ 0xF1DE0
 * Callers:
 *     <none>
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxSendPointerMessageWorker@24 @ 0x15ABD3 (_xxxSendPointerMessageWorker@24.c)
 */

int __stdcall EditionPointerParentNotify(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        void *a27,
        int a28)
{
  _DWORD *v28; // esi
  void *v29; // edi
  int result; // eax
  _DWORD v31[3]; // [esp+Ch] [ebp-78h] BYREF
  _DWORD *v32[26]; // [esp+18h] [ebp-6Ch] BYREF

  v31[2] = 0;
  qmemcpy(v32, &a1, sizeof(v32));
  v28 = v32[20];
  v29 = a27;
  result = _GetDesktopWindow(v32[20]);
  if ( v28 != (_DWORD *)result )
  {
    result = v28[5];
    if ( (*(_BYTE *)(result + 16) & 4) == 0 )
    {
      v31[0] = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = v31;
      v31[1] = 0;
      do
      {
        if ( (*(_BYTE *)(v28[5] + 23) & 0xC0) != 0x40 )
          break;
        v28 = (_DWORD *)v28[14];
        ThreadLockExchange((int)v28, (int)v31);
        xxxSendPointerMessageWorker(a28, 0, 0, 689);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(_gpTouchProcessor, v29) );
      return ThreadUnlock1();
    }
  }
  return result;
}
