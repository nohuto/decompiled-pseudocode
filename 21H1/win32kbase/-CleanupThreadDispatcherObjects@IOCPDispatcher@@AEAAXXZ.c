/*
 * XREFs of ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C004506C
 * Callers:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0044D30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IOCPDispatcher::CleanupThreadDispatcherObjects(IOCPDispatcher *this)
{
  char *v1; // rbx
  char *v3; // rsi
  void *v4; // rcx

  v1 = (char *)this + 2576;
  v3 = (char *)this + 2736;
  while ( v1 != v3 )
  {
    v4 = (void *)*((_QWORD *)v1 + 1);
    if ( v4 )
    {
      ZwClose(v4);
      *((_QWORD *)v1 + 1) = 0LL;
      *(_QWORD *)v1 = 0LL;
    }
    v1 += 16;
  }
  *((_DWORD *)this + 684) = 0;
}
