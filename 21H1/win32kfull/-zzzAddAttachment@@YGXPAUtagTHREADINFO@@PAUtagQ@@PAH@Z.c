/*
 * XREFs of ?zzzAddAttachment@@YGXPAUtagTHREADINFO@@PAUtagQ@@PAH@Z @ 0xC7DBA
 * Callers:
 *     ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8 (-zzzRecalc2@@YGXPAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge zzzAddAttachment(int a1@<edx>, int a2@<ecx>, struct tagTHREADINFO *a3, struct tagQ *a4, int *a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a2 + 360);
  if ( v5 != a1 )
  {
    *(_DWORD *)(a2 + 360) = a1;
    if ( v5 )
      zzzDestroyQueue(v5, a2);
    ++*(_DWORD *)(a1 + 288);
    *(_DWORD *)a3 = 1;
  }
}
