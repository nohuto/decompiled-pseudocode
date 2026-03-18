/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C00D1340
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rdi
  char *i; // rbx
  __int64 v6; // rbp
  __int64 j; // rsi

  v4 = (char *)this + 128;
  for ( i = (char *)*((_QWORD *)this + 16); i != v4; i = *(char **)i )
  {
    v6 = *((_QWORD *)i + 17);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 10); j = (unsigned int)(j + 1) )
      CInputDest::SetEmpty((CInputDest *)(v6 + 160 * j + 16), a2, a3, a4);
  }
}
