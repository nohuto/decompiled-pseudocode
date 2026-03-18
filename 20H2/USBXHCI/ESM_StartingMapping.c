/*
 * XREFs of ESM_StartingMapping @ 0x1C00057F0
 * Callers:
 *     <none>
 * Callees:
 *     TR_StartMapping @ 0x1C000588C (TR_StartMapping.c)
 */

__int64 __fastcall ESM_StartingMapping(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedExchange((volatile __int32 *)(v1 + 32), 0);
  if ( *(_BYTE *)(v1 + 37) && (*(_DWORD *)(*(_QWORD *)(v1 + 136) + 24LL) = 0, *(_BYTE *)(v1 + 37)) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_StartMapping(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_StartMapping(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
