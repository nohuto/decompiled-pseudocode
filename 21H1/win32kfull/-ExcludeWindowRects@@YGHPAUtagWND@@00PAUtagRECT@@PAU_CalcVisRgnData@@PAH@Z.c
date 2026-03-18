/*
 * XREFs of ?ExcludeWindowRects@@YGHPAUtagWND@@00PAUtagRECT@@PAU_CalcVisRgnData@@PAH@Z @ 0x8D78E
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?ResizeVisExcludeMemory@@YGHPAU_CalcVisRgnData@@@Z @ 0xBFBBA (-ResizeVisExcludeMemory@@YGHPAU_CalcVisRgnData@@@Z.c)
 *     _DpiRectIntersectsRectWithSubpixel@24 @ 0x150F7B (_DpiRectIntersectsRectWithSubpixel@24.c)
 */

int __userpurge ExcludeWindowRects@<eax>(
        int a1@<edx>,
        struct tagRECT *a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagRECT *a6,
        struct _CalcVisRgnData *a7,
        int *a8)
{
  int v8; // esi
  int v9; // eax
  int v10; // edx
  ERECTL *v11; // edi
  LONG top; // ecx
  unsigned int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  int result; // eax
  struct _CalcVisRgnData *v18; // [esp+0h] [ebp-18h]
  unsigned int v19; // [esp+Ch] [ebp-Ch]
  struct tagRECT *v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v8 = a1;
  v20 = a2;
  v9 = 0;
  v21 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      if ( (struct tagWND *)v8 == a3 )
        goto LABEL_28;
      v10 = *(_DWORD *)(v8 + 20);
      v11 = (ERECTL *)(v10 + 52);
      if ( !v9 )
        break;
LABEL_4:
      if ( (*(_BYTE *)(v10 + 23) & 0x10) != 0 && (*(_BYTE *)(v10 + 18) & 8) == 0 && (*(_BYTE *)(v10 + 16) & 0x20) == 0 )
      {
        if ( v9 )
        {
          if ( !DpiRectIntersectsRectWithSubpixel((float *)v8, (int)a4, (int)&a2[7].bottom, a2) )
            goto LABEL_5;
        }
        else if ( *(_DWORD *)a4 >= *(_DWORD *)(v10 + 60)
               || *(_DWORD *)v11 >= *((_DWORD *)a4 + 2)
               || *((_DWORD *)a4 + 1) >= *(_DWORD *)(v10 + 64)
               || *(_DWORD *)(v10 + 56) >= *((_DWORD *)a4 + 3) )
        {
          goto LABEL_5;
        }
        if ( !ERECTL::bWrapped(v11) )
        {
          if ( *((_DWORD *)a5 + 1) == *((_DWORD *)a5 + 2) )
          {
            result = ResizeVisExcludeMemory(v18);
            if ( !result )
              return result;
          }
          v16 = *((_DWORD *)a5 + 1);
          *(_DWORD *)(*((_DWORD *)a5 + 3) + 4 * v16) = v8;
          *((_DWORD *)a5 + 1) = v16 + 1;
        }
      }
LABEL_5:
      v8 = *(_DWORD *)(v8 + 48);
      v9 = v21;
      if ( !v8 )
        goto LABEL_28;
      a2 = v20;
    }
    top = a2[1].top;
    if ( *(_DWORD *)(top + 164) == *(_DWORD *)(v10 + 164) )
    {
      v13 = *(_DWORD *)(top + 184);
      v19 = *(_DWORD *)(v10 + 184);
      if ( (((v19 >> 8) ^ (v13 >> 8)) & 0x1FF) == 0 )
      {
        v14 = (v13 & 0xF) == 2 && (v13 & 0x20000000) != 0;
        v15 = (v19 & 0xF) == 2 && (v19 & 0x20000000) != 0;
        if ( v14 == v15 )
          goto LABEL_16;
      }
    }
    else if ( (*(_DWORD *)(top + 184) & 0xF) == 2 && (*(_DWORD *)(v10 + 184) & 0xF) == 2 )
    {
LABEL_16:
      v9 = v21;
LABEL_17:
      a2 = v20;
      goto LABEL_4;
    }
    v9 = 1;
    v21 = 1;
    goto LABEL_17;
  }
LABEL_28:
  if ( a6 )
  {
    if ( v9 )
      a6->left = 1;
  }
  return 1;
}
