/*
 * XREFs of ?_RemoveNonTaskWindows@@YGHPAUtagBWL@@PAUtagWND@@PAHPAPAPAUHWND__@@@Z @ 0x15C758
 * Callers:
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?_IsTaskWindow@@YGHPAUtagWND@@0@Z @ 0x15C703 (-_IsTaskWindow@@YGHPAUtagWND@@0@Z.c)
 */

int __userpurge _RemoveNonTaskWindows@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagBWL *a3,
        struct tagWND *a4,
        int *a5,
        HWND **a6)
{
  unsigned int *v6; // esi
  int v7; // edx
  unsigned int *v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // esi
  int result; // eax
  _DWORD *v17; // [esp+10h] [ebp-10h]
  unsigned int *v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v6 = (unsigned int *)(a2 + 16);
  v7 = 0;
  *(_DWORD *)a3 = -1;
  v20 = 0;
  v8 = (unsigned int *)(a2 + 16);
  while ( 1 )
  {
    v19 = v6;
    if ( *v6 == 1 )
      break;
    v9 = (_DWORD *)HMValidateHandleNoSecure(*v6, 1);
    v10 = v9;
    v17 = v9;
    if ( !v9 || !_IsTaskWindow(v9, a1) )
      goto LABEL_25;
    v11 = v10[5];
    v12 = v10;
    while ( (*(_BYTE *)(v11 + 18) & 4) == 0 )
    {
      v13 = v12[16];
      if ( !v13 )
        break;
      v14 = v12;
      v12 = (_DWORD *)v12[16];
      v11 = *(_DWORD *)(v13 + 20);
      if ( *(char *)(v11 + 16) < 0 )
      {
        if ( (*(_BYTE *)(v14[5] + 18) & 1) == 0 || v12[16] )
          v12 = 0;
        else
          v12 = v10;
        break;
      }
    }
    if ( !v12 )
      goto LABEL_25;
    v15 = (_DWORD *)v12[27];
    if ( !v15 )
      goto LABEL_24;
    do
    {
      if ( _IsTaskWindow(v15, a1) )
        break;
      v15 = (_DWORD *)v15[16];
    }
    while ( v15 );
    if ( v15 && v15 != v17 )
    {
LABEL_24:
      v6 = v19;
LABEL_25:
      v7 = v20;
      goto LABEL_26;
    }
    v6 = v19;
    if ( v8 < v19 )
      *v8 = *v19;
    if ( a1 == v17 )
      *(_DWORD *)a3 = v20;
    v7 = v20 + 1;
    ++v8;
    ++v20;
LABEL_26:
    ++v6;
  }
  result = v7;
  *v8 = 1;
  *(_DWORD *)a4 = v8;
  return result;
}
