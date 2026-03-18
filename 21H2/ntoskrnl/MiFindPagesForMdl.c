/*
 * XREFs of MiFindPagesForMdl @ 0x1402652C4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14025AEEC (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateMdlPagesByLists @ 0x140324C60 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateEnclavePagesForMdl @ 0x140589410 (MiAllocateEnclavePagesForMdl.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 *     MiAllocateSkipPagesForMdl @ 0x1405897C4 (MiAllocateSkipPagesForMdl.c)
 */

unsigned __int64 __fastcall MiFindPagesForMdl(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v2; // edx
  __int64 v4; // r14
  __int64 v5; // rbp
  int v6; // ecx
  _DWORD *v7; // rsi
  _DWORD *v8; // r15
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 64);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v2 &= ~2u;
    v13[0] = 0;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 56);
    if ( (v2 & 2) == 0 )
    {
      v7 = (_DWORD *)(qword_140C506D8 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * v6);
      v1 = &v7[(unsigned __int16)KeNumberNodes];
      goto LABEL_4;
    }
    v13[0] = v6;
  }
  v7 = v13;
LABEL_4:
  v8 = v7 + 1;
  if ( v7 != v13 )
    v8 = v1;
  v9 = v2 | 0x4000000;
  if ( (v2 & 0x100) == 0 )
    v9 = v2;
  v10 = (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12;
  if ( (v9 & 0x400) != 0 )
    return MiAllocateEnclavePagesForMdl(
             v4,
             v5,
             v9,
             (unsigned int)*(_QWORD *)(a1 + 40) - (unsigned int)v10,
             *(_DWORD *)(a1 + 56));
  if ( (v9 & 0x10052) == 0x10000 )
  {
    result = MiAllocateMdlPagesByLists(
               v4,
               v5,
               v9,
               *(_DWORD *)(a1 + 60),
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 40) - v10,
               *(_DWORD *)(a1 + 56));
    if ( (_DWORD)result )
      return result;
    v9 &= ~0x10000u;
  }
  do
  {
    v12 = (unsigned int)*v7;
    if ( *(_QWORD *)(24512 * v12 + *(_QWORD *)(v4 + 16) + 22608) || !(_DWORD)InitializationPhase )
    {
      if ( (v9 & 0x40) != 0 )
      {
        MiAllocateFastLargePagesForMdl(a1, v12, v9);
      }
      else if ( (v9 & 0x20) != 0 )
      {
        MiAllocateSkipPagesForMdl(a1, v12, v9);
      }
      else
      {
        MiAllocateMostlyContiguousPagesForMdl(a1, v12, v9);
      }
    }
    result = (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12;
    if ( result == *(_QWORD *)(a1 + 40) )
      break;
    if ( (v9 & 2) != 0 )
      break;
    ++v7;
  }
  while ( v7 < v8 );
  return result;
}
