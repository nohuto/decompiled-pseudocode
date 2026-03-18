/*
 * XREFs of PfTTraceListAdd @ 0x1407DBAC0
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x1407D9070 (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x1407DABA4 (PfTGenerateTrace.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PfTTraceListFree @ 0x1407DBEE0 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1409887B0 (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  int *v4; // rcx
  _QWORD *v5; // rbx
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&FastMutex);
  v2 = (unsigned int)dword_140C4EB7C;
  v3 = dword_140C4EB78 < (unsigned int)dword_140C4EB7C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4EB68;
    v2 = (unsigned int)dword_140C4EB84;
    v4 = &dword_140C4EB80;
    if ( dword_140C4EB80 + 1 == dword_140C4EB84 )
      ++HIDWORD(xmmword_140C4EC70);
  }
  else
  {
    v4 = &dword_140C4EB78;
    v5 = &unk_140C4EB58;
    if ( dword_140C4EB78 + 1 == dword_140C4EB7C )
      ++DWORD2(xmmword_140C4EC70);
    dword_140C4EB88 = 1;
  }
  v6 = (void **)v5[1];
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)a1 = v5;
  *((_QWORD *)a1 + 1) = v6;
  *v6 = a1;
  v5[1] = a1;
  if ( ++*v4 > (unsigned int)v2 )
    PfTTraceListTrim(a1[7], v2, v8);
  if ( v5 == (_QWORD *)&unk_140C4EB58 && (_QWORD *)*v5 == v5 )
    dword_140C4EB88 = 0;
  if ( v3 && dword_140C4EB78 >= (unsigned int)dword_140C4EB7C )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4EBC8, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
