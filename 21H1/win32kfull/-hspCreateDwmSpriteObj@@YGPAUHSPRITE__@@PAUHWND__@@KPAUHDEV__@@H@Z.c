/*
 * XREFs of ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124 (-hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84 (-hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z.c)
 */

int __userpurge hspCreateDwmSpriteObj@<eax>(
        int a1@<edx>,
        struct SFMLOGICALSURFACE *a2@<ecx>,
        HWND a3,
        unsigned int a4,
        HDEV a5,
        int a6)
{
  int v6; // ebx
  HDEV Object; // eax
  HDEV v8; // esi
  struct DwmState *v9; // edi
  int v10; // edx
  int v11; // ecx
  struct DwmState **v12; // ecx
  int v13; // edi
  HLSURF v14; // eax
  int v15; // edx
  HDEV v16; // ecx
  HSPRITE NeighborSprite; // eax
  int v19; // edx
  struct DwmState **v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // [esp+0h] [ebp-38h]
  struct _CD_HLSURF_CREATIONCONTEXT *v26; // [esp+4h] [ebp-34h]
  unsigned __int8 NewElement; // [esp+13h] [ebp-25h] BYREF
  int v28; // [esp+14h] [ebp-24h] BYREF
  struct SFMLOGICALSURFACE *Buffer; // [esp+18h] [ebp-20h] BYREF
  int v30; // [esp+1Ch] [ebp-1Ch]
  int v31; // [esp+20h] [ebp-18h]
  struct HDEV__ v32; // [esp+24h] [ebp-14h] BYREF
  int v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+2Ch] [ebp-Ch]
  int v35; // [esp+30h] [ebp-8h]
  int v36; // [esp+34h] [ebp-4h]

  v6 = 0;
  v31 = a1;
  Buffer = a2;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  Object = (HDEV)AllocateObject(144, 15, 1);
  v8 = Object;
  if ( !Object )
    return v6;
  v9 = (struct DwmState *)(Object + 4);
  *((_DWORD *)Object + 5) = Object + 4;
  *((_DWORD *)Object + 4) = Object + 4;
  NewElement = 0;
  ++*((_DWORD *)g_pDwmState + 13);
  v28 = 0;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v28, (struct OBJECT *)Object, 0xFu, 8u) )
    goto LABEL_11;
  v11 = *(_DWORD *)v8;
  LOBYTE(v10) = 15;
  NewElement = 1;
  HmgMarkUndeletable(v11, v10);
  if ( *((_DWORD *)g_pDwmState + 20) )
  {
    NeighborSprite = hspGetNeighborSprite(0, v25, (bool)v26);
    if ( NeighborSprite )
    {
      LOBYTE(v19) = 15;
      v22 = HmgLock(NeighborSprite, v19);
      v23 = v22 != 0 ? v22 + 16 : 0;
      v24 = *(_DWORD *)v23;
      if ( *(_DWORD *)(*(_DWORD *)v23 + 4) == v23 )
      {
        *(_DWORD *)v9 = v24;
        *((_DWORD *)v8 + 5) = v23;
        *(_DWORD *)(v24 + 4) = v9;
        *(_DWORD *)v23 = v9;
        if ( v22 )
          _InterlockedDecrement((volatile signed __int32 *)(v22 + 8));
        goto LABEL_6;
      }
    }
    else
    {
      v20 = (struct DwmState **)((char *)g_pDwmState + 44);
      v21 = *((_DWORD *)g_pDwmState + 11);
      if ( *(struct DwmState **)(v21 + 4) == (struct DwmState *)((char *)g_pDwmState + 44) )
      {
        *(_DWORD *)v9 = v21;
        *((_DWORD *)v8 + 5) = v20;
        *(_DWORD *)(v21 + 4) = v9;
        *v20 = v9;
        goto LABEL_6;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  v12 = (struct DwmState **)*((_DWORD *)g_pDwmState + 12);
  if ( *v12 != (struct DwmState *)((char *)g_pDwmState + 44) )
    goto LABEL_20;
  *(_DWORD *)v9 = (char *)g_pDwmState + 44;
  *((_DWORD *)v8 + 5) = v12;
  *v12 = v9;
  *((_DWORD *)g_pDwmState + 12) = v9;
LABEL_6:
  v13 = (int)Buffer;
  if ( Buffer )
  {
    v30 = *(_DWORD *)v8;
    *((_DWORD *)v8 + 6) = Buffer;
    Buffer = (struct SFMLOGICALSURFACE *)v13;
    RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, &Buffer, 8u, &NewElement);
  }
  if ( !NewElement )
    goto LABEL_22;
  EtwDwmSpriteCreateEvent(v13, v13 >> 31, *(_DWORD *)v8, *(_DWORD *)v8 >> 31);
  v32.unused = v13;
  v14 = hlsurfCreateLogicalSurfaceObject(&v32, v25, v26);
  if ( v14 )
  {
    LOBYTE(v15) = 18;
    v30 = 0;
    Buffer = (struct SFMLOGICALSURFACE *)HmgLock(v14, v15);
    DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v8, v16, Buffer);
    SFMLOGICALSURFACEREF_vDestructor(&Buffer);
  }
  else
  {
    NewElement = 0;
  }
LABEL_11:
  if ( !NewElement )
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  if ( v28 )
    _InterlockedDecrement((volatile signed __int32 *)(v28 + 8));
  if ( NewElement )
  {
    GreInitializePushLock(v8 + 15);
    v6 = *(_DWORD *)v8;
    *((_DWORD *)v8 + 7) = v31;
  }
  else
  {
    vspDestroyDwmSpriteObjInternal(v8, v25, v26);
  }
  return v6;
}
