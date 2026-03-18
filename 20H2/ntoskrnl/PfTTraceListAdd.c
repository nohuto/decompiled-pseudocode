/*
 * XREFs of PfTTraceListAdd @ 0x14064E5C4
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x14064B020 (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x14064D7B4 (PfTGenerateTrace.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PfTTraceListFree @ 0x14064E9FC (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408E2E3C (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x14099D47C (PfTAccessTracingCleanup.c)
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
  ExAcquireFastMutex(&Mutex);
  v2 = (unsigned int)dword_140C4FC5C;
  v3 = dword_140C4FC58 < (unsigned int)dword_140C4FC5C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4FC48;
    v2 = (unsigned int)dword_140C4FC64;
    v4 = &dword_140C4FC60;
    if ( dword_140C4FC60 + 1 == dword_140C4FC64 )
      ++HIDWORD(xmmword_140C4FD50);
  }
  else
  {
    v4 = &dword_140C4FC58;
    v5 = &unk_140C4FC38;
    if ( dword_140C4FC58 + 1 == dword_140C4FC5C )
      ++DWORD2(xmmword_140C4FD50);
    dword_140C4FC68 = 1;
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
  if ( v5 == (_QWORD *)&unk_140C4FC38 && (_QWORD *)*v5 == v5 )
    dword_140C4FC68 = 0;
  if ( v3 && dword_140C4FC58 >= (unsigned int)dword_140C4FC5C )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4FCA8, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
