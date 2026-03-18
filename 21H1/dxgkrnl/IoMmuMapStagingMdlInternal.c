/*
 * XREFs of IoMmuMapStagingMdlInternal @ 0x1C0055280
 * Callers:
 *     IoMmuMapStagingMdl @ 0x1C005521C (IoMmuMapStagingMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     IoMmuReferenceMdl @ 0x1C00553C4 (IoMmuReferenceMdl.c)
 *     IoMmuUnmapStagingMdlInternal @ 0x1C00555C4 (IoMmuUnmapStagingMdlInternal.c)
 */

__int64 __fastcall IoMmuMapStagingMdlInternal(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebp
  int v7; // esi
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rdx

  v3 = a3;
  v4 = 0;
  while ( 1 )
  {
    LOBYTE(a3) = 1;
    v7 = IoMmuReferenceMdl(a1 + 2, a2, a3, v3);
    if ( v7 < 0 )
      break;
    v8 = a2[7];
    if ( v8 )
    {
      v9 = a1[6];
      v10 = v8 << 12;
      *(_DWORD *)(v9 + 40) = v10;
      *(_QWORD *)v9 = 0LL;
      *(_WORD *)(v9 + 10) = 0;
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_DWORD *)(v9 + 44) = 0;
      *(_WORD *)(v9 + 8) = 8 * ((v10 >> 12) + 6);
      v7 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_1C00AFF70)(a1[1], 3LL, a1[6]);
      if ( v7 < 0 )
        break;
      v4 = a2[6];
    }
    if ( a2[6] == a2[4] )
      return (unsigned int)v7;
  }
  v11 = a1[5];
  if ( v11 )
    *(_DWORD *)(*(_QWORD *)v11 + 8 * (*(unsigned int *)(v11 + 24) + 2LL) * ((unsigned int)v3 & *(_DWORD *)(v11 + 20)) + 4) = v7;
  if ( v4 )
  {
    a2[4] = v4;
    a2[6] = 0;
    IoMmuUnmapStagingMdlInternal(a1, a2, -1LL);
  }
  return (unsigned int)v7;
}
