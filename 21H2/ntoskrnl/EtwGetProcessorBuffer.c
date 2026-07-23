/*
 * XREFs of EtwGetProcessorBuffer @ 0x1405AA7C8
 * Callers:
 *     KiSaveCurrentEtwTraceBuffer @ 0x140518B80 (KiSaveCurrentEtwTraceBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v3 = 0;
  if ( !EtwpInitialized )
    return 3221225473LL;
  if ( a1 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    v6 = 1LL;
  }
  else
  {
    _mm_lfence();
    v6 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * a1);
  }
  if ( (v6 & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else if ( *(_DWORD *)(v6 + 316) == 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 12) & 0x10000000) != 0 )
      v7 = *(_QWORD *)(v6 + 144);
    else
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1080) + 4136LL) + ((unsigned __int64)a2 << 6)) + 8LL * a1);
    v8 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v8 )
    {
      *(_DWORD *)(a3 + 8) = *v8;
      v9 = v8[2];
      *(_QWORD *)a3 = v8;
      if ( v9 <= *v8 )
        *(_DWORD *)(a3 + 12) = v8[2];
      else
        *(_DWORD *)(a3 + 12) = v8[1];
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
