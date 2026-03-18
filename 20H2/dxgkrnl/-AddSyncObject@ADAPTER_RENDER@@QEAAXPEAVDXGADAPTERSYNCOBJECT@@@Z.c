/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C015674C
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DAE14 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(ADAPTER_RENDER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  struct _KTHREAD **v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rax

  v2 = (struct _KTHREAD **)((char *)this + 192);
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
  v6 = (char *)this + 232;
  v7 = *(_QWORD *)v6;
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *(_QWORD *)a2 = v7;
  *((_QWORD *)a2 + 1) = v6;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)v6 = a2;
  DXGFASTMUTEX::Release(v2, v5);
}
