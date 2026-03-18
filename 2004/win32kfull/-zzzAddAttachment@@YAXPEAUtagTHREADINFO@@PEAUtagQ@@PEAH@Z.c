/*
 * XREFs of ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C0038A68
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0038958 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall zzzAddAttachment(struct tagTHREADINFO *a1, struct tagQ *a2, int *a3)
{
  struct tagQ *v3; // rax

  v3 = (struct tagQ *)*((_QWORD *)a1 + 81);
  if ( v3 != a2 )
  {
    *((_QWORD *)a1 + 81) = a2;
    if ( v3 )
      zzzDestroyQueue(v3);
    ++*((_DWORD *)a2 + 98);
    *a3 = 1;
  }
}
