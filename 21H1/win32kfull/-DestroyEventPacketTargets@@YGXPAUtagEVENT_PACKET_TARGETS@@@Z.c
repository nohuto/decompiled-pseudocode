/*
 * XREFs of ?DestroyEventPacketTargets@@YGXPAUtagEVENT_PACKET_TARGETS@@@Z @ 0xF55BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall DestroyEventPacketTargets(struct tagEVENT_PACKET_TARGETS *a1)
{
  int v1; // ebx
  _DWORD *v2; // edi

  v1 = 0;
  if ( *(int *)a1 > 0 )
  {
    v2 = (_DWORD *)((char *)a1 + 4);
    do
    {
      if ( *v2 )
        HMAssignmentUnlock(v2);
      ++v1;
      ++v2;
    }
    while ( v1 < *(_DWORD *)a1 );
  }
  Win32FreePool(a1);
}
