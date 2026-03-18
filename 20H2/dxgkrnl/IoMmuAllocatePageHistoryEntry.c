/*
 * XREFs of IoMmuAllocatePageHistoryEntry @ 0x1C0055FC4
 * Callers:
 *     IoMmuMapStagingMdl @ 0x1C005616C (IoMmuMapStagingMdl.c)
 *     IoMmuUnmapStagingMdl @ 0x1C00564B0 (IoMmuUnmapStagingMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoMmuAllocatePageHistoryEntry(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // rax
  signed __int64 v9; // rbx
  __int64 *v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // eax
  ULONG v15; // edx

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
    return -1LL;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8), 1uLL);
  v10 = *(__int64 **)(a1 + 24);
  v11 = v9 + 1;
  v12 = *v10;
  v13 = (*((unsigned int *)v10 + 6) + 2LL) * ((unsigned int)v11 & *((_DWORD *)v10 + 5));
  *(_DWORD *)(v12 + 8 * v13 + 4) = 0;
  v14 = *(_DWORD *)(v12 + 8 * v13) & 0xFFFFFFF0;
  *(_QWORD *)(v12 + 8 * v13 + 8) = a4;
  *(_DWORD *)(v12 + 8 * v13) = a3 & 7 | v14 | (8 * (a2 ^ 1));
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( v15 )
    RtlCaptureStackBackTrace(4u, v15, (PVOID *)(v12 + 16 + 8 * v13), 0LL);
  return v11;
}
