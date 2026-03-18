/*
 * XREFs of ?Uninitialize@UmfdTls@@SGXXZ @ 0xD0004
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFF72 (-UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Destroy@UmfdUMBuffer@@SGXPAV1@@Z @ 0xD003C (-Destroy@UmfdUMBuffer@@SGXPAV1@@Z.c)
 */

void __usercall UmfdTls::Uninitialize(struct UmfdUMBuffer *a1@<esi>)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v3; // esi

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v3 = *(_DWORD **)(ThreadWin32Thread + 200);
    if ( v3 )
    {
      *(_DWORD *)(ThreadWin32Thread + 200) = 0;
      if ( *v3 )
        UmfdUMBuffer::Destroy(a1);
      EngFreeMem(v3);
    }
  }
}
