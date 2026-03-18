/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C0271704
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C0271818 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall OPM::CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rsi
  unsigned __int64 v10; // rdx
  __int64 i; // r8
  __int64 v12; // rax
  char v13; // cl

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    v8 = OPM::OPMAllocateMemory((OPM *)(8LL * (unsigned int)v7), 1uLL, (enum _POOL_TYPE)a3);
    if ( !v8 )
      return 3221225495LL;
    v10 = *(unsigned int *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; v10 = *(unsigned int *)(a1 + 12) )
    {
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)v10 < (unsigned int)v7 )
      memset(&v8[(unsigned int)v10], 0, 8LL * (unsigned int)(v7 - v10));
    OPM::OPMFreeMemory(*(OPM **)a1, (void *)v10);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v12) )
    {
      v13 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = a2;
      *a3 = v12;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !v13 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
