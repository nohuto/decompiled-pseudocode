/*
 * XREFs of _xxxGetClipboardData@12 @ 0x18310B
 * Callers:
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z @ 0x182A3B (-xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsMetaDummyHandle@@YGHPAX@Z @ 0x181CFC (-IsMetaDummyHandle@@YGHPAX@Z.c)
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z @ 0x182A3B (-xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z @ 0x182AF1 (-xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z.c)
 */

void *__fastcall xxxGetClipboardData(int a1, int a2, struct tagWINDOWSTATION *a3)
{
  unsigned int v4; // edi
  struct tagCLIP *ClipFormat; // eax
  struct tagCLIP *v7; // edx
  void *v8; // esi
  void *RenderData; // eax
  struct tagWINDOWSTATION *v10; // ecx
  int v11; // eax
  struct tagCLIP *v12; // eax
  int v13; // [esp-4h] [ebp-14h]
  unsigned int v14; // [esp+0h] [ebp-10h]
  unsigned int v15; // [esp+0h] [ebp-10h]
  unsigned int v16; // [esp+4h] [ebp-Ch]
  struct tagGETCLIPBDATA *v17; // [esp+4h] [ebp-Ch]

  v4 = a2;
  if ( *(_DWORD *)(a1 + 40) != _gptiCurrent )
  {
    UserSetLastError((struct _NT_TIB *)0x58A);
    return 0;
  }
  ClipFormat = FindClipFormat(a2, a1, (struct tagWINDOWSTATION *)1, v14, v16);
  if ( !ClipFormat )
    return 0;
  if ( IsMetaDummyHandle(*((void **)ClipFormat + 1)) )
  {
    if ( v4 == 14 )
    {
      v13 = 3;
    }
    else
    {
      if ( v4 != 3 )
        goto LABEL_11;
      v13 = 14;
    }
    v4 = v13;
LABEL_11:
    v7 = FindClipFormat(v4, a1, (struct tagWINDOWSTATION *)1, v15, (unsigned int)v17);
    if ( !v7 )
      return 0;
  }
  v8 = (void *)*((_DWORD *)v7 + 1);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
    goto LABEL_30;
  }
  if ( v8 == (void *)2 )
  {
    switch ( v4 )
    {
      case 2u:
        RenderData = (void *)xxxGetDummyBitmap(a1, a3);
        break;
      case 8u:
        RenderData = xxxGetDummyDib(a1, a3);
        break;
      case 9u:
        RenderData = (void *)xxxGetDummyPalette(a1, (int)a3);
        break;
      case 0x11u:
        RenderData = xxxGetDummyDibV5(a1, a3);
        break;
      default:
        goto LABEL_31;
    }
LABEL_30:
    v8 = RenderData;
LABEL_31:
    v12 = FindClipFormat(v4, a1, (struct tagWINDOWSTATION *)1, v15, (unsigned int)v17);
    if ( !v12 )
      return 0;
    v10 = a3;
    if ( a3 )
    {
      v11 = *((_DWORD *)v12 + 2);
      goto LABEL_27;
    }
    return v8;
  }
  if ( v8 == (void *)1 )
  {
    RenderData = (void *)xxxGetDummyText(v4, a1, a3, v15, v17);
    goto LABEL_30;
  }
  v10 = a3;
  if ( a3 )
  {
    v11 = *((_DWORD *)v7 + 2);
LABEL_27:
    *((_DWORD *)v10 + 1) = v11;
  }
  return v8;
}
