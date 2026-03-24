/*
 * XREFs of ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006E1B8
 * Callers:
 *     ?RemoveContent@CFlipManager@@QEAAJ_K@Z @ 0x1C006BD6C (-RemoveContent@CFlipManager@@QEAAJ_K@Z.c)
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006D168 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipP.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FC78 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010098 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C001118C (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011C68 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CContentResource::RebindCompositionSurfaceBuffer(
        CContentResource *this,
        const struct CSM_BUFFER_INFO *a2)
{
  int v3; // ebx
  char *v4; // rcx
  __int64 v6; // r9
  CCompositionSurface *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v8 = 0LL;
    v3 = CompositionSurfaceObject::LockForWrite(v4, &v8);
    if ( v3 >= 0 )
    {
      v3 = CCompositionSurface::UnBind(v8, 0);
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 64) = 0;
        *((_QWORD *)this + 7) = 0LL;
        if ( a2 )
        {
          if ( *((_DWORD *)a2 + 35) )
          {
            LOBYTE(v6) = 1;
            v3 = CCompositionSurface::Bind(v8, a2, 0, v6, (unsigned __int64 *)this + 7);
          }
          if ( v3 >= 0 )
            *((_BYTE *)this + 64) = *((_DWORD *)a2 + 34) == 4;
        }
      }
    }
    if ( v8 )
      CCompositionSurface::UnlockAndRelease(v8);
  }
  return (unsigned int)v3;
}
