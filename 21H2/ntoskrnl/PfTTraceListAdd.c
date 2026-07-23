/*
 * XREFs of PfTTraceListAdd @ 0x14067C39C
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x140611E90 (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x14067B2EC (PfTGenerateTrace.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PfTTraceListFree @ 0x14067C7D4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408E075C (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
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
  v2 = (unsigned int)dword_140C4FE1C;
  v3 = dword_140C4FE18 < (unsigned int)dword_140C4FE1C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4FE08;
    v2 = (unsigned int)dword_140C4FE24;
    v4 = &dword_140C4FE20;
    if ( dword_140C4FE20 + 1 == dword_140C4FE24 )
      ++HIDWORD(xmmword_140C4FF10);
  }
  else
  {
    v4 = &dword_140C4FE18;
    v5 = &unk_140C4FDF8;
    if ( dword_140C4FE18 + 1 == dword_140C4FE1C )
      ++DWORD2(xmmword_140C4FF10);
    dword_140C4FE28 = 1;
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
  if ( v5 == (_QWORD *)&unk_140C4FDF8 && (_QWORD *)*v5 == v5 )
    dword_140C4FE28 = 0;
  if ( v3 && dword_140C4FE18 >= (unsigned int)dword_140C4FE1C )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4FE68, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
