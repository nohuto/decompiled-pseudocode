/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5
 * Callers:
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AllocateHidData@20 @ 0x14415B (_AllocateHidData@20.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 *     ?FillRawKeyboardInput@@YGXPAUtagHIDDATA@@PAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DB6A (-FillRawKeyboardInput@@YGXPAUtagHIDDATA@@PAU_KEYBOARD_INPUT_DATA@@IG@Z.c)
 */

unsigned int *__userpurge PostRawKeyboardInputToForeground@<eax>(
        unsigned int a1@<edx>,
        int *a2@<ecx>,
        struct _RAW_INPUT_FOREGROUND_TARGET *a3,
        unsigned int a4,
        struct tagHIDDATA *a5,
        struct _KEYBOARD_INPUT_DATA *a6,
        unsigned int a7,
        unsigned __int16 a8)
{
  unsigned int *result; // eax
  unsigned int *v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct tagHIDDATA *v19; // eax
  int v20; // eax
  int v21; // esi
  int i; // ecx
  int v23; // esi
  int j; // ecx
  struct tagHIDDATA *v25; // esi
  int k; // ecx
  int v27; // ecx
  int v28; // esi
  int v29; // esi
  int m; // ecx
  int v31; // esi
  int n; // ecx
  int v33; // esi
  int ii; // ecx
  int v35; // esi
  unsigned int v36; // [esp+0h] [ebp-1Ch]
  unsigned __int16 v37; // [esp+4h] [ebp-18h]
  int v39; // [esp+10h] [ebp-Ch]
  int v40; // [esp+14h] [ebp-8h]
  int v41; // [esp+18h] [ebp-4h]
  struct tagHIDDATA *v42; // [esp+2Ch] [ebp+10h]

  result = AllocateHidData((int)a3, 1, 0x10u, 0, a2[2]);
  v10 = result;
  if ( result )
  {
    FillRawKeyboardInput(a4, (int)result, a5, a6, v36, v37);
    v11 = a2[2];
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 8);
    else
      v12 = 0;
    v13 = *a2;
    v14 = *(_DWORD *)(*a2 + 64);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 8);
    else
      v15 = 0;
    if ( v15 )
      v39 = v15 + 216;
    else
      v39 = gObjDummyLock;
    v16 = *(_DWORD *)(v13 + 48);
    if ( v16 )
      v40 = v16 + 216;
    else
      v40 = gObjDummyLock;
    v17 = *(_DWORD *)(v13 + 52);
    if ( v17 )
      v18 = v17 + 216;
    else
      v18 = gObjDummyLock;
    v41 = v18;
    v19 = (struct tagHIDDATA *)gObjDummyLock;
    if ( v12 )
      v19 = (struct tagHIDDATA *)(v12 + 216);
    v42 = v19;
    v20 = gObjDummyLock;
    if ( v11 )
      v20 = v11 + 28;
    v21 = gpsiLock;
    for ( i = 3; i; --i )
      v21 += 4;
    v23 = v20;
    for ( j = 3; j; --j )
      v23 += 4;
    v25 = v42;
    for ( k = 3; k; --k )
      v25 = (struct tagHIDDATA *)((char *)v25 + 4);
    v27 = 3;
    v28 = v13;
    while ( v27 )
    {
      v28 += 4;
      --v27;
    }
    v29 = v41;
    for ( m = 3; m; --m )
      v29 += 4;
    v31 = v40;
    for ( n = 3; n; --n )
      v31 += 4;
    v33 = v39;
    for ( ii = 3; ii; --ii )
      v33 += 4;
    v35 = PostInputMessage(v13, v11, (struct tagQMSG *)0xFF, 0, *v10, a1, 0, 0, *(_DWORD *)(a4 + 8), 0, 0, a3, 0, 0, 0);
    if ( !v35 )
      FreeHidData((int)v10);
    return (unsigned int *)v35;
  }
  return result;
}
