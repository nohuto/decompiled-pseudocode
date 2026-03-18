/*
 * XREFs of _ZombieCursor@4 @ 0x15641C
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YGXPAUtagCURSOR@@@Z @ 0x7B7DE (-UnlinkCursor@@YGXPAUtagCURSOR@@@Z.c)
 */

int __stdcall ZombieCursor(_DWORD *a1)
{
  int v1; // eax
  int i; // edi

  v1 = a1[11];
  if ( (v1 & 0x100) != 0 )
  {
    UnlinkCursor(a1);
    v1 = a1[11];
  }
  if ( (v1 & 8) != 0 )
  {
    for ( i = 0; i < a1[12]; ++i )
      HMChangeOwnerProcessWorker(*(_DWORD *)(a1[14] + 4 * i), _gptiRit);
  }
  return HMChangeOwnerProcessWorker(a1, _gptiRit);
}
