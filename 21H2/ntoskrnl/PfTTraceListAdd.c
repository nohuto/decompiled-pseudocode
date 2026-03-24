/*
 * XREFs of PfTTraceListAdd @ 0x1406CD70C
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x1406B2DD0 (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x1406CC9FC (PfTGenerateTrace.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     PfTTraceListFree @ 0x1406CDB44 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408E05FC (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
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
  ExAcquireFastMutex(&stru_140C4FDF0);
  v2 = (unsigned int)dword_140C4FDDC;
  v3 = dword_140C4FDD8 < (unsigned int)dword_140C4FDDC;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4FDC8;
    v2 = (unsigned int)dword_140C4FDE4;
    v4 = &dword_140C4FDE0;
    if ( dword_140C4FDE0 + 1 == dword_140C4FDE4 )
      ++HIDWORD(xmmword_140C4FED0);
  }
  else
  {
    v4 = &dword_140C4FDD8;
    v5 = &unk_140C4FDB8;
    if ( dword_140C4FDD8 + 1 == dword_140C4FDDC )
      ++DWORD2(xmmword_140C4FED0);
    dword_140C4FDE8 = 1;
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
  if ( v5 == (_QWORD *)&unk_140C4FDB8 && (_QWORD *)*v5 == v5 )
    dword_140C4FDE8 = 0;
  if ( v3 && dword_140C4FDD8 >= (unsigned int)dword_140C4FDDC )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4FE28, 0, 0);
  KeReleaseGuardedMutex(&stru_140C4FDF0);
  return PfTTraceListFree(v8);
}
