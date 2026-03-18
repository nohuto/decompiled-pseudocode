/*
 * XREFs of ?TrackZorder@@YGPAUtagWND@@PAUtagWINDOWPOS@@PAU1@11PAPAUHWND__@@2@Z @ 0x32A60
 * Callers:
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 */

struct tagWND *__userpurge TrackZorder@<eax>(
        struct tagWINDOWPOS *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3@<esi>,
        struct tagWINDOWPOS *a4,
        struct tagWND *a5,
        struct tagWND *a6,
        struct tagWND *a7,
        HWND *a8,
        HWND *a9)
{
  int v10; // ebx
  struct tagWND *v11; // esi
  struct tagWND *v12; // eax
  struct tagWND *v15; // [esp+0h] [ebp-Ch]

  v10 = _HMObjectFromHandle(*a2);
  if ( !v10 )
    return 0;
  v11 = a7;
  v12 = *(struct tagWND **)a7;
  if ( *(_DWORD *)a7 )
    v12 = (struct tagWND *)_HMObjectFromHandle(*(_DWORD *)a7);
  if ( !TrackBackground(a1, a4, a5, v12, a3, v15) )
  {
    if ( ((*(_BYTE *)(*(_DWORD *)(v10 + 20) + 11) & 4 ^ (*(unsigned __int8 *)(*(_DWORD *)(v10 + 20) + 16) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      v11 = a6;
    if ( *(_DWORD *)v11 )
      a2[1] = *(_DWORD *)v11;
  }
  *(_DWORD *)v11 = *a2;
  return (struct tagWND *)v10;
}
