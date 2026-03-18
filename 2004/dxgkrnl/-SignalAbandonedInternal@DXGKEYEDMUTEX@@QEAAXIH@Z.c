/*
 * XREFs of ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0291C84
 * Callers:
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0290390 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0291C00 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C029817C (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0048388 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C00483C8 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandonedInternal(DXGKEYEDMUTEX *this, int a2, int a3)
{
  __int64 v6; // rdx
  char v7; // r14
  _QWORD **v8; // rdi
  _QWORD *v9; // rbx
  struct _KEVENT *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGKEYEDMUTEX *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v7 = 0;
  if ( a3
    || DXGKEYEDMUTEX::IsOwner(this, a2)
    || *((_DWORD *)this + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(a2, *((struct DXGPROCESS ***)this + 11)) )
  {
    *((_DWORD *)this + 14) = 3;
    v7 = 1;
  }
  v8 = (_QWORD **)((char *)this + 96);
  v9 = *v8;
  while ( v9 != v8 )
  {
    v10 = (struct _KEVENT *)(v9 - 8);
    if ( v7 || DXGKEYEDMUTEX::IsSameWaiter(a2, (struct DXGPROCESS **)v9 - 8) )
    {
      v11 = v9;
      v9 = (_QWORD *)*v9;
      v10[2].Header.LockNV = 128;
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v11[1] = v11;
      *v11 = v11;
      KeSetEvent(v10 + 1, 0, 0);
    }
    else
    {
      v9 = (_QWORD *)*v9;
    }
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v6);
}
