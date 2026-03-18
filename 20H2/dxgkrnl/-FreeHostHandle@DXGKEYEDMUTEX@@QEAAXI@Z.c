/*
 * XREFs of ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1C028F5AC
 * Callers:
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::FreeHostHandle(DXGKEYEDMUTEX *this, int a2)
{
  struct _KTHREAD **v2; // rdi
  __int64 v5; // rdx
  void **v6; // rbx
  _DWORD *v7; // rcx
  void **v8; // rax
  void **v9; // rdx

  v2 = (struct _KTHREAD **)((char *)this + 112);
  DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
  v6 = (void **)((char *)this + 40);
  v7 = *v6;
  if ( *v6 != v6 )
  {
    while ( 1 )
    {
      v8 = *(void ***)v7;
      if ( v7[4] == a2 )
        break;
      v7 = *(_DWORD **)v7;
      if ( v8 == v6 )
        goto LABEL_4;
    }
    if ( v8[1] != v7 || (v9 = (void **)*((_QWORD *)v7 + 1), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    operator delete(v7);
  }
LABEL_4:
  DXGFASTMUTEX::Release(v2, v5);
}
