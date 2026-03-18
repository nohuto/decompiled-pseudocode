/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C008A640
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C008A49C (xxxDW_SendDestroyMessages.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x1C005DB20 (zzzDestroyCaret.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
  {
    LOBYTE(a2) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
    if ( (_BYTE)a2 == 64 )
    {
      v5 = *(_QWORD *)(gptiCurrent + 408LL);
      v6 = *((_QWORD *)a1 + 13);
      v10[2] = 0LL;
      v10[0] = v5;
      *(_QWORD *)(gptiCurrent + 408LL) = v10;
      v10[1] = v6;
      if ( v6 )
        HMLockObject(v6);
      xxxSetFocus(*((struct tagWND **)a1 + 13), a2, a3, a4);
      ThreadUnlock1(v8, v7, v9);
    }
    else
    {
      xxxSetFocus(0LL, a2, a3, a4);
    }
  }
  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 296LL) )
    zzzDestroyCaret();
}
