/*
 * XREFs of ?_RemoveClipboardFormatListener@@YGXPAUtagWND@@@Z @ 0xD44B2
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _NtUserRemoveClipboardFormatListener@4 @ 0xD444C (_NtUserRemoveClipboardFormatListener@4.c)
 * Callees:
 *     <none>
 */

void __thiscall _RemoveClipboardFormatListener(_DWORD *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  _DWORD *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  v1 = (_DWORD *)(*(_DWORD *)(PsGetCurrentProcessWin32Process() + 356) + 80);
  v2 = (_DWORD *)*v1;
  if ( *v1 )
  {
    while ( v2 != v3 )
    {
      v1 = v2 + 35;
      v2 = (_DWORD *)v2[35];
      if ( !v2 )
        return;
    }
    *v1 = v3[35];
    v3[35] = 0;
    *(_DWORD *)(v3[5] + 144) &= ~1u;
    HMAssignmentUnlock(&v3);
  }
}
