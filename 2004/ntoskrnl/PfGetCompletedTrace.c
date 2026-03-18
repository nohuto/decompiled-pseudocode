/*
 * XREFs of PfGetCompletedTrace @ 0x14061D6F4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140692A30 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PfTFreeTraceDump @ 0x14026C3E0 (PfTFreeTraceDump.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PfFbBufferListFlushStandby @ 0x1403051BC (PfFbBufferListFlushStandby.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     PfTAccessTracingStart @ 0x14098D458 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // edx
  int v8; // eax
  int *v9; // r12
  _QWORD *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&Mutex);
    if ( !dword_140C4FBE8 )
      break;
    dword_140C4FBE8 = 0;
    KeReleaseGuardedMutex(&Mutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C4FAA0);
  }
  v7 = dword_140C4FBD8 < (unsigned int)dword_140C4FBDC;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_140C4FBE0;
    if ( v8 )
      v9 = &dword_140C4FBD8;
    v10 = &unk_140C4FBC8;
    if ( v8 )
      v10 = &unk_140C4FBB8;
    v11 = (_DWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = (_DWORD *)*v10;
  v5 = v11[6] + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)v11;
  if ( *((_QWORD **)v11 + 1) != v10 || *(_DWORD **)(v12 + 8) != v11 )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_140C4FBD8 < (unsigned int)dword_140C4FBDC )
  {
    PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 2LL);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&Mutex);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *(_OWORD *)a1 = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140C501E8)) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140C501E8) >> 24);
    memmove(a1 + 2, v4 + 4, (unsigned int)v4[6]);
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&Mutex);
  return v13;
}
