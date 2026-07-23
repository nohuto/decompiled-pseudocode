/*
 * XREFs of MiObtainProtoBaseFromNode @ 0x1403030A0
 * Callers:
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x140248878 (MiGetPrototypePteRanges.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiGetPrototypePteBoundaries @ 0x140557FEC (MiGetPrototypePteBoundaries.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405580F0 (MiReplaceSystemProtoPtesNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainProtoBaseFromNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax

  v3 = a1[3] & 7LL;
  if ( v3 > 4 )
    return 0LL;
  if ( !(_DWORD)v3 )
  {
    v4 = *(a1 - 13);
    v5 = *((unsigned int *)a1 - 17);
LABEL_4:
    *a2 = v5;
    return v4;
  }
  v7 = v3 - 1;
  if ( !v7 )
  {
    result = *(a1 - 6);
    *a2 = *((unsigned int *)a1 - 3);
    return result;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v13 = v8 - 1;
    if ( !v13 )
    {
      result = a1[6];
      *a2 = a1[4];
      return result;
    }
    if ( v13 == 1 )
    {
      v4 = a1[4];
      v5 = a1[5];
      goto LABEL_4;
    }
    return 0LL;
  }
  v9 = *(a1 - 7) + 128LL;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(a1 - 7) + 136LL);
  do
  {
    v12 = *(unsigned int *)(v9 + 44);
    v9 = *(_QWORD *)(v9 + 16);
    v10 += v12;
  }
  while ( v9 );
  *a2 = v10;
  return v11;
}
