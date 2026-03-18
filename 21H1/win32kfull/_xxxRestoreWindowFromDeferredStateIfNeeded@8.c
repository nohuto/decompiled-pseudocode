/*
 * XREFs of _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _NtUserRestoreWindowDpiChanges@4 @ 0xC48EC (_NtUserRestoreWindowDpiChanges@4.c)
 * Callees:
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(_DWORD *a1, int a2)
{
  struct tagRECT *v4; // edi
  int result; // eax
  int v6; // ecx
  int v7; // ebx
  int *v8; // edi
  int Prop; // eax
  int v10; // ecx
  struct tagRECT *v11; // [esp+Ch] [ebp-4h]

  v4 = (struct tagRECT *)*(unsigned __int16 *)(a1[5] + 182);
  if ( !(_WORD)v4 )
    return 0;
  if ( !_IsTopLevelWindow(a1) && *(_WORD *)(*(_DWORD *)(a1[14] + 20) + 182) )
  {
    a1[44] &= ~1u;
    return 1;
  }
  else
  {
    v11 = v4;
    result = _SetDeferredDpiStateForWindowAndChildren((int)a1, 0, a2);
    v6 = a1[5];
    v7 = result;
    if ( (_WORD)v4 == *(_WORD *)(v6 + 180) )
    {
      *(_DWORD *)(v6 + 144) &= ~0x4000000u;
    }
    else
    {
      v8 = 0;
      Prop = _GetProp((int)a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
      if ( Prop )
      {
        v10 = *(_DWORD *)(Prop + 48);
        if ( (v10 & 0x80u) != 0 )
        {
          v8 = (int *)(a1[5] + 52);
          *(_DWORD *)(Prop + 48) = v10 & 0xFFFFFF7F;
        }
      }
      xxxNotifyMonitorChanged(a1, v8, 0, v11);
      return v7;
    }
  }
  return result;
}
