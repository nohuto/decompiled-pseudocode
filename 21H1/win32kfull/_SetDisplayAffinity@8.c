/*
 * XREFs of _SetDisplayAffinity@8 @ 0x1A5988
 * Callers:
 *     _NtUserSetWindowDisplayAffinity@8 @ 0x16A051 (_NtUserSetWindowDisplayAffinity@8.c)
 * Callees:
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     _GetDisplayAffinity@8 @ 0xC4A42 (_GetDisplayAffinity@8.c)
 *     ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4 (-ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z.c)
 */

int __fastcall SetDisplayAffinity(_DWORD *a1, int a2)
{
  int v3; // ebx
  int v5; // edi
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(a1[5] + 19) & 0x20) == 0 )
    ComposeWindowIfNeeded((int)a1, 1);
  if ( GetDisplayAffinity(a1, &v7) )
  {
    if ( a2 )
    {
      if ( !InternalSetProp((int)a1, (unsigned __int16)atomDispAffinity, a2, 5) )
        return v3;
    }
    else
    {
      InternalRemoveProp((int)a1, atomDispAffinity, 1);
    }
    v5 = a2 & 0x11;
    v3 = 1;
    if ( (v7 & 0x11) != v5 )
    {
      v3 = ChangeWindowTreeProtection((int)a1, v5);
      if ( !v3 )
        InternalSetProp((int)a1, (unsigned __int16)atomDispAffinity, v7, 5);
    }
  }
  return v3;
}
