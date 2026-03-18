/*
 * XREFs of _xxxEnableScrollBar@12 @ 0x8E0EE
 * Callers:
 *     _NtUserEnableScrollBar@12 @ 0x8E04C (_NtUserEnableScrollBar@12.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _xxxEnableWindow@8 @ 0x18A3C (_xxxEnableWindow@8.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 */

unsigned int __fastcall xxxEnableScrollBar(int BugCheckParameter2, int a2, unsigned int HighLimit)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  void *v9; // ecx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // [esp+0h] [ebp-8h]
  unsigned int v13; // [esp+4h] [ebp-4h]

  if ( a2 != 2 )
    return xxxEnableWndSBArrows((struct tagWND *)HighLimit, v12, v13);
  v5 = safe_cast_fnid_to_PSBWND();
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 8);
  v7 = v6 & 3;
  if ( v7 == HighLimit )
    return 0;
  if ( HighLimit != 3 )
  {
    if ( !HighLimit )
    {
      if ( v7 == 3 )
      {
        v8 = 2;
        v9 = (void *)(v6 & 0xFFFFFFFC);
        goto LABEL_12;
      }
LABEL_10:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0xE4u, HighLimit, 0, 0, 0, 0, 1u, 1);
    }
    if ( (HighLimit | v7) != 3 )
      goto LABEL_10;
  }
  v9 = (void *)(HighLimit | v6);
  v8 = 1;
LABEL_12:
  *(_DWORD *)(v5 + 8) = v9;
  v10 = xxxEnableWindow(v9, BugCheckParameter2, v8 == 2);
  v11 = *(_BYTE *)(*(_DWORD *)(BugCheckParameter2 + 20) + 23);
  if ( !v10 )
    return v11 & 8;
  LOBYTE(v10) = ~v11;
  return (v10 >> 3) & 1;
}
