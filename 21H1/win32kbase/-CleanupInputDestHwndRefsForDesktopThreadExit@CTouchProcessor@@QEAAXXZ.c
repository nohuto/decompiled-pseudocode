/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C00D0BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(CTouchProcessor *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 v3; // rbp
  __int64 j; // rsi

  v1 = (char *)this + 128;
  for ( i = (char *)*((_QWORD *)this + 16); i != v1; i = *(char **)i )
  {
    v3 = *((_QWORD *)i + 17);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 10); j = (unsigned int)(j + 1) )
      CInputDest::SetEmpty((CInputDest *)(v3 + 160 * j + 16));
  }
}
