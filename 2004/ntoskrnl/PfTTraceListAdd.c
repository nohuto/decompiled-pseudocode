/*
 * XREFs of PfTTraceListAdd @ 0x14061D984
 * Callers:
 *     PfTGenerateTrace @ 0x1406CC28C (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x140701C60 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PfTTraceListFree @ 0x14061DDBC (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1408DCFFC (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x14099743C (PfTAccessTracingCleanup.c)
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
  v2 = (unsigned int)dword_140C4FBDC;
  v3 = dword_140C4FBD8 < (unsigned int)dword_140C4FBDC;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140C4FBC8;
    v2 = (unsigned int)dword_140C4FBE4;
    v4 = &dword_140C4FBE0;
    if ( dword_140C4FBE0 + 1 == dword_140C4FBE4 )
      ++HIDWORD(xmmword_140C4FCD0);
  }
  else
  {
    v4 = &dword_140C4FBD8;
    v5 = &unk_140C4FBB8;
    if ( dword_140C4FBD8 + 1 == dword_140C4FBDC )
      ++DWORD2(xmmword_140C4FCD0);
    dword_140C4FBE8 = 1;
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
  if ( v5 == (_QWORD *)&unk_140C4FBB8 && (_QWORD *)*v5 == v5 )
    dword_140C4FBE8 = 0;
  if ( v3 && dword_140C4FBD8 >= (unsigned int)dword_140C4FBDC )
    PfTAccessTracingCleanup(&PfTGlobals, v2, 2LL);
  KeSetEvent(qword_140C4FC28, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
