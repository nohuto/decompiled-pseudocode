/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z @ 0x79F82
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ?iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z @ 0x7A3DE (-iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z.c)
 */

int __userpurge GreExtSelectClipRgnLocked@<eax>(
        struct _RECTL *a1@<edx>,
        DC **a2@<ecx>,
        struct XDCOBJ *a3,
        struct _RECTL *a4,
        int a5)
{
  int v6; // ebx
  unsigned int v7; // edx
  struct REGION *v8; // eax
  DC **v9; // edi
  DC *v10; // ecx
  int v11; // eax
  DC *v12; // ecx
  struct REGION *v13; // eax
  DC *v15; // ecx
  struct REGION *v16; // eax
  DC *v17; // ecx
  int v18; // edx
  struct REGION *v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  struct _RECTL *v24; // [esp+24h] [ebp-4h] BYREF
  struct XDCOBJ *v25; // [esp+30h] [ebp+8h]

  v6 = 0;
  v7 = (unsigned int)a3 & 0xF7FFFFFF;
  v24 = a1;
  v8 = (struct REGION *)((unsigned int)a3 & 0x8000000);
  v25 = (struct XDCOBJ *)v7;
  v20 = v8;
  v9 = a2;
  if ( v7 - 1 > 4 )
  {
    EngSetLastError(0x57u);
    return v6;
  }
  v10 = *a2;
  if ( !*v9 )
  {
    EngSetLastError(6u);
    return v6;
  }
  if ( v20 )
  {
    if ( v7 == 5 )
    {
      v6 = DC::iSelectTightenRao(v10, 0, 5);
      DC::bTightenRao(*v9);
      if ( v6 )
      {
        v17 = *v9;
        if ( !*((_DWORD *)*v9 + 290) || (*((_BYTE *)v17 + 28) & 2) == 0 || !DC::bDpiScaledSurface(v17) )
          v18 = *((_DWORD *)v17 + 288);
        if ( *(_DWORD *)(v18 + 56) == 1 )
          return 1;
        else
          return (*(_DWORD *)(v18 + 52) > 0x38u) + 2;
      }
    }
    return v6;
  }
  v11 = *((_DWORD *)v10 + 26);
  if ( v11 && *(_DWORD *)(v11 + 52) == 56 )
  {
    v20 = *(struct REGION **)(v11 + 64);
    v21 = *(_DWORD *)(v11 + 68);
    v22 = *(_DWORD *)(v11 + 72);
    v23 = *(_DWORD *)(v11 + 76);
    a1 = v24;
    if ( (struct REGION *)v24->left == v20 && v24->top == v21 && v24->right == v22 && v24->bottom == v23 )
    {
      if ( DC::prgnRao(v10) )
        v13 = DC::prgnRao(v12);
      else
        v13 = DC::prgnVisSnap(v12);
      v24 = (struct _RECTL *)v13;
      return RGNOBJ::iComplexity((RGNOBJ *)&v24);
    }
    v9 = a2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  if ( !v20 )
  {
LABEL_34:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    return v6;
  }
  if ( ((a1->left & 0xF8000000) == 0 || (a1->left & 0xF8000000) == 0xF8000000)
    && ((a1->bottom & 0xF8000000) == 0 || (a1->bottom & 0xF8000000) == 0xF8000000)
    && ((a1->right & 0xF8000000) == 0 || (a1->right & 0xF8000000) == 0xF8000000)
    && ((a1->top & 0xF8000000) == 0 || (a1->top & 0xF8000000) == 0xF8000000)
    && !ERECTL::bWrapped((ERECTL *)a1) )
  {
    RGNOBJ::vSet((RGNOBJ *)&v20, a1);
    v6 = DC::iSelectTightenRao(*v9, v20, (int)v25);
    DC::bTightenRao(*v9);
    if ( v6 )
    {
      if ( DC::prgnRao(*v9) )
        v16 = DC::prgnRao(v15);
      else
        v16 = DC::prgnVisSnap(v15);
      v24 = (struct _RECTL *)v16;
      v6 = RGNOBJ::iComplexity((RGNOBJ *)&v24);
    }
    goto LABEL_34;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return 0;
}
