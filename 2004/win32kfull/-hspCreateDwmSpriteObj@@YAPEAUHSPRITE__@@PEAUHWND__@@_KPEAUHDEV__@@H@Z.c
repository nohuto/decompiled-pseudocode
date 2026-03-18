/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0029534
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0028F80 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C001EB8C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C001F880 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002058C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0029778 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C0029858 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C002AE7C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C010ADC0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(HWND a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v4; // rbx
  __int64 Object; // rax
  volatile signed __int32 *v10; // rdi
  struct DwmState *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HSPRITE v14; // rcx
  struct DwmState **v15; // rcx
  __int64 v16; // rax
  HLSURF LogicalSurfaceObject; // rax
  HDEV v18; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  struct DwmState **v24; // rcx
  __int64 v25; // rax
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+38h] [rbp-38h] BYREF
  int v30; // [rsp+40h] [rbp-30h]
  _QWORD Buffer[2]; // [rsp+48h] [rbp-28h] BYREF
  HWND v32; // [rsp+58h] [rbp-18h] BYREF
  __int128 v33; // [rsp+60h] [rbp-10h]

  v4 = 0LL;
  v33 = 0LL;
  Object = AllocateObject(176LL, 15LL);
  v10 = (volatile signed __int32 *)Object;
  if ( !Object )
    return v4;
  v11 = (struct DwmState *)(Object + 24);
  NewElement[0] = 0;
  *(_QWORD *)(Object + 32) = Object + 24;
  *(_QWORD *)(Object + 24) = Object + 24;
  v28 = 0LL;
  ++*((_DWORD *)g_pDwmState + 24);
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v28, (struct OBJECT *)Object, 0xFu, 8) )
    goto LABEL_11;
  v13 = *(_QWORD *)v10;
  LOBYTE(v12) = 15;
  NewElement[0] = 1;
  HmgMarkUndeletable(v13, v12);
  v14 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( v14 )
  {
    NeighborSprite = hspGetNeighborSprite(v14, 0, 0);
    if ( NeighborSprite )
    {
      v27 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v27, NeighborSprite);
      v21 = v27;
      v22 = (v27 + 24) & -(__int64)(v27 != 0);
      v23 = *(_QWORD *)v22;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) == v22 )
      {
        *(_QWORD *)v11 = v23;
        *((_QWORD *)v11 + 1) = v22;
        *(_QWORD *)(v23 + 8) = v11;
        *(_QWORD *)v22 = v11;
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
        goto LABEL_6;
      }
    }
    else
    {
      v24 = (struct DwmState **)((char *)g_pDwmState + 80);
      v25 = *((_QWORD *)g_pDwmState + 10);
      if ( *(struct DwmState **)(v25 + 8) == (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        *(_QWORD *)v11 = v25;
        *((_QWORD *)v11 + 1) = v24;
        *(_QWORD *)(v25 + 8) = v11;
        *v24 = v11;
        goto LABEL_6;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  v15 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
  if ( *v15 != (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_23;
  *(_QWORD *)v11 = (char *)g_pDwmState + 80;
  *((_QWORD *)v11 + 1) = v15;
  *v15 = v11;
  *((_QWORD *)g_pDwmState + 11) = v11;
LABEL_6:
  if ( a1 )
  {
    v16 = *(_QWORD *)v10;
    *((_QWORD *)v10 + 5) = a1;
    Buffer[0] = a1;
    Buffer[1] = v16;
    RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer, 0x10u, NewElement);
  }
  if ( !NewElement[0] )
    goto LABEL_25;
  EtwDwmSpriteCreateEvent(a1, *(_QWORD *)v10);
  v32 = a1;
  LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                           a3,
                           (unsigned int)(a4 != 0) + 4,
                           (struct _CD_HLSURF_CREATIONCONTEXT *)&v32);
  if ( LogicalSurfaceObject )
  {
    v29 = 0LL;
    v30 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v29, LogicalSurfaceObject);
    DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v18, v29);
    SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v29);
  }
  else
  {
    NewElement[0] = 0;
  }
LABEL_11:
  if ( !NewElement[0] )
LABEL_25:
    _InterlockedIncrement(v10 + 3);
  if ( v28 )
    _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
  if ( NewElement[0] )
  {
    GreInitializePushLock(v10 + 22);
    v4 = *(_QWORD *)v10;
    *((_QWORD *)v10 + 6) = a2;
  }
  else
  {
    vspDestroyDwmSpriteObjInternal(a3, 1, (struct DWMSPRITE *)v10);
  }
  return v4;
}
