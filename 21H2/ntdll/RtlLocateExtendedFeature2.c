/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1800725D0
 * Callers:
 *     RtlpCopyContext @ 0x180030BD0 (RtlpCopyContext.c)
 *     RtlpUnwindPrologue @ 0x1800314A0 (RtlpUnwindPrologue.c)
 *     RtlpWalkFrameChain @ 0x180052760 (RtlpWalkFrameChain.c)
 *     RtlpMergeContextXState @ 0x180072570 (RtlpMergeContextXState.c)
 *     RtlpPopUserShadowStack @ 0x18007E2A0 (RtlpPopUserShadowStack.c)
 *     RtlLocateExtendedFeature @ 0x1800F5D70 (RtlLocateExtendedFeature.c)
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F63E8 (RtlpLocateXStateChunk.c)
 */

__int64 __fastcall RtlLocateExtendedFeature2(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 XStateChunk; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  _DWORD *v14; // r10

  if ( (unsigned int)(a2 - 2) > 0x3D )
    return 0LL;
  v5 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFFC) != 0 )
    return 0LL;
  XStateChunk = RtlpLocateXStateChunk(a1);
  if ( !XStateChunk )
    return 0LL;
  v10 = 2;
  if ( a4 )
  {
    if ( (*(_BYTE *)(v8 + 20) & 2) != 0 )
      *a4 = *(_DWORD *)(v8 + 4 * v9 + 556);
    else
      *a4 = *(_DWORD *)(v8 + 8 * v9 + 28);
  }
  if ( (*(_BYTE *)(v8 + 20) & 2) != 0 )
  {
    v11 = *(_QWORD *)(XStateChunk + 8);
    if ( (v5 & v11) != 0 )
    {
      v12 = *(_QWORD *)(v8 + 544);
      v13 = 576LL;
      if ( (unsigned int)v9 > 2 )
      {
        v14 = (_DWORD *)(v8 + 564);
        do
        {
          if ( ((1LL << v10) & v11) != 0 )
          {
            if ( ((1LL << v10) & v12) != 0 )
              LODWORD(v13) = (v13 + 63) & 0xFFFFFFC0;
            v13 = (unsigned int)(*v14 + v13);
          }
          ++v10;
          ++v14;
        }
        while ( v10 < (unsigned int)v9 );
      }
      if ( (v5 & v12) != 0 )
        v13 = ((_DWORD)v13 + 63) & 0xFFFFFFC0;
      return XStateChunk + v13 - 512;
    }
    return 0LL;
  }
  v13 = *(unsigned int *)(v8 + 8 * v9 + 24);
  return XStateChunk + v13 - 512;
}
