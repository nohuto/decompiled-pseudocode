/*
 * XREFs of PfTTraceListAdd @ 0x1406630A4
 * Callers:
 *     PfTGenerateTrace @ 0x14069EA3C (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1406DEEF0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PfTTraceListFree @ 0x1406634DC (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408DBC8C (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
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
  ExAcquireFastMutex(&stru_140C4FD30);
  v2 = (unsigned int)dword_140C4FD1C;
  v3 = dword_140C4FD18 < (unsigned int)dword_140C4FD1C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4FD08;
    v2 = (unsigned int)dword_140C4FD24;
    v4 = &dword_140C4FD20;
    if ( dword_140C4FD20 + 1 == dword_140C4FD24 )
      ++HIDWORD(xmmword_140C4FE10);
  }
  else
  {
    v4 = &dword_140C4FD18;
    v5 = &unk_140C4FCF8;
    if ( dword_140C4FD18 + 1 == dword_140C4FD1C )
      ++DWORD2(xmmword_140C4FE10);
    dword_140C4FD28 = 1;
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
  if ( v5 == (_QWORD *)&unk_140C4FCF8 && (_QWORD *)*v5 == v5 )
    dword_140C4FD28 = 0;
  if ( v3 && dword_140C4FD18 >= (unsigned int)dword_140C4FD1C )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4FD68, 0, 0);
  KeReleaseGuardedMutex(&stru_140C4FD30);
  return PfTTraceListFree(v8);
}
