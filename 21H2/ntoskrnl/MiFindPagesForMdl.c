/*
 * XREFs of MiFindPagesForMdl @ 0x14029542C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140294390 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140533F24 (MiAllocateFastLargePagesForMdl.c)
 *     MiAllocateSkipPagesForMdl @ 0x140534140 (MiAllocateSkipPagesForMdl.c)
 */

unsigned __int64 __fastcall MiFindPagesForMdl(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v2; // edx
  __int64 v4; // r14
  __int64 v5; // rbp
  _DWORD *v6; // rsi
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  int v11; // ecx
  _DWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 64);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v2 &= ~2u;
    v12[0] = 0;
LABEL_3:
    v6 = v12;
    goto LABEL_4;
  }
  v11 = *(_DWORD *)(a1 + 56);
  if ( (v2 & 2) != 0 )
  {
    v12[0] = v11;
    goto LABEL_3;
  }
  v6 = (_DWORD *)(qword_140C4DED8 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * v11);
  v1 = &v6[(unsigned __int16)KeNumberNodes];
LABEL_4:
  v7 = v6 + 1;
  if ( v6 != v12 )
    v7 = v1;
  v8 = v2 | 0x4000000;
  if ( (v2 & 0x100) == 0 )
    v8 = v2;
  if ( (v8 & 0x10052) == 0x10000 )
  {
    result = MiAllocateMdlPagesByLists(
               v4,
               v5,
               v8,
               *(_DWORD *)(a1 + 60),
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 40) - ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 12),
               *(_DWORD *)(a1 + 56));
    if ( (_DWORD)result == 1 )
      return result;
    v8 &= ~0x10000u;
  }
  do
  {
    v10 = (unsigned int)*v6;
    if ( *(_QWORD *)(4544 * v10 + *(_QWORD *)(v4 + 16) + 4176) || !(_DWORD)InitializationPhase )
    {
      if ( (v8 & 0x40) != 0 )
      {
        MiAllocateFastLargePagesForMdl(a1, v10, v8);
      }
      else if ( (v8 & 0x20) != 0 )
      {
        MiAllocateSkipPagesForMdl(a1, v10, v8);
      }
      else
      {
        MiAllocateMostlyContiguousPagesForMdl(a1, v10, v8);
      }
    }
    result = (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12;
    if ( result == *(_QWORD *)(a1 + 40) )
      break;
    if ( (v8 & 2) != 0 )
      break;
    ++v6;
  }
  while ( v6 < v7 );
  return result;
}
