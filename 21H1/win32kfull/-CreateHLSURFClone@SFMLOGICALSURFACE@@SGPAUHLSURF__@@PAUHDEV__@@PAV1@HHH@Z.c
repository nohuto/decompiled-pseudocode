/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _SFMLOGICALSURFACE_CreateHLSURFCloneWrap@20 @ 0xAE828 (_SFMLOGICALSURFACE_CreateHLSURFCloneWrap@20.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 *     ?SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x230F2 (-SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QAEHPAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x23176 (-Initialize@SFMLOGICALSURFACE@@QAEHPAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z.c)
 */

int __userpurge SFMLOGICALSURFACE::CreateHLSURFClone@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct SFMLOGICALSURFACE *a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // ebx
  int *Object; // eax
  int *v10; // esi
  int v11; // edi
  HLSURF v12; // ebx
  int v13; // ebx
  unsigned int v15; // [esp+4h] [ebp-50h]
  struct _CD_HLSURF_CREATIONCONTEXT *v16; // [esp+8h] [ebp-4Ch]
  int v17; // [esp+10h] [ebp-44h]
  int v19; // [esp+18h] [ebp-3Ch] BYREF
  int v20; // [esp+1Ch] [ebp-38h] BYREF
  int v21; // [esp+20h] [ebp-34h] BYREF
  int v22; // [esp+24h] [ebp-30h] BYREF
  _DWORD v23[2]; // [esp+28h] [ebp-2Ch] BYREF
  struct REGION *v24[2]; // [esp+30h] [ebp-24h] BYREF
  _DWORD v25[2]; // [esp+38h] [ebp-1Ch] BYREF
  int v26[5]; // [esp+40h] [ebp-14h] BYREF

  v17 = 0;
  RGNMEMOBJ::RGNMEMOBJ(v25, 1);
  RGNMEMOBJ::RGNMEMOBJ(v24, 1);
  RGNMEMOBJ::RGNMEMOBJ(v23, 1);
  v8 = a1[41];
  v26[0] = a1[43];
  v26[1] = a1[44];
  v26[2] = a1[45];
  v26[3] = a1[30];
  v26[4] = a1[31];
  if ( !v25[0] || !v24[0] || !v23[0] )
    goto LABEL_36;
  if ( a3 )
  {
    if ( a1[20] )
    {
      v20 = a1[20];
      if ( !RGNOBJ::bCopy((RGNOBJ *)v25, (struct RGNOBJ *)&v20) )
        goto LABEL_36;
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v8 &= ~2u;
  }
  if ( a4 && a1[11] )
  {
    v21 = a1[11];
    if ( !RGNOBJ::bCopy((RGNOBJ *)v24, (struct RGNOBJ *)&v21) )
      goto LABEL_36;
  }
  else
  {
    a4 = 0;
  }
  if ( a5 && a1[12] )
  {
    v22 = a1[12];
    if ( !RGNOBJ::bCopy((RGNOBJ *)v23, (struct RGNOBJ *)&v22) )
      goto LABEL_36;
  }
  else
  {
    a5 = 0;
  }
  Object = (int *)AllocateObject(200, 18, 1);
  v10 = Object;
  if ( !Object )
  {
LABEL_36:
    v13 = 0;
    goto LABEL_27;
  }
  if ( SFMLOGICALSURFACE::Initialize(Object, a1[43], a1[44], a1[45], a1[48], a1[30], a1[31]) )
  {
    v19 = 0;
    v10[41] = v8;
    v10[33] = a1[33];
    v10[38] = a1[38];
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v19, (struct OBJECT *)v10, 0x12u, 8u) )
    {
      v11 = *v10;
      v17 = *v10;
      v12 = (HLSURF)((v8 & 0x10 | 0x40u) >> 4);
      if ( SpNotifyLSurface((HDEV)1, v12, (int)v26, v15, v16) >= 0 )
        v10[4] = a2;
      if ( a3 )
      {
        v10[20] = v25[0];
        v25[0] = 0;
      }
      if ( a4 )
      {
        SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v10, v24[0]);
        v24[0] = 0;
      }
      if ( a5 )
      {
        v10[12] = v23[0];
        v23[0] = 0;
      }
      EtwLogicalSurfCreateEvent(v11, v11 >> 31, v12);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject(v10, 0, 0);
      v17 = 0;
    }
    if ( v19 )
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 8));
  }
  v13 = v17;
LABEL_27:
  if ( v23[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v23);
  if ( v24[1] == (struct REGION *)1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v24);
  if ( v25[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
  return v13;
}
