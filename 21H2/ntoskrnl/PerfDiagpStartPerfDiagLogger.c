/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x14079B414
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079C420 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1402531A8 (RtlStringCbCatW.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14079C550 (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PerfDiagpStartPerfDiagLogger(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v1; // rax
  SIZE_T v3; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  wchar_t *v8; // r8
  char *v9; // r9
  wchar_t v10; // ax
  wchar_t *v11; // rax
  unsigned int started; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( pszSrc[v1] );
  v3 = (unsigned int)(2 * v1 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x64465250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = (unsigned __int64)(unsigned int)v3 >> 1;
    if ( v6 )
    {
      v7 = 2147483646 - v6;
      v8 = PoolWithTag;
      v9 = (char *)((char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - (char *)PoolWithTag);
      do
      {
        if ( !(v7 + v6) )
          break;
        v10 = *(wchar_t *)((char *)v8 + (_QWORD)v9);
        if ( !v10 )
          break;
        *v8++ = v10;
        --v6;
      }
      while ( v6 );
      v11 = v8 - 1;
      if ( v6 )
        v11 = v8;
      *v11 = 0;
    }
    RtlStringCbCatW(v5, v3, pszSrc);
    if ( (unsigned int)PerfDiagpIsTracingAllowed() )
    {
      wcscpy(&xmmword_140C1A22C, L"PerfDiag Logger");
      started = EtwStartAutoLogger(&xmmword_140C1A22C, v5, 0LL);
    }
    else
    {
      started = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return started;
}
