/*
 * XREFs of _NtGdiEngGradientFill@40 @ 0x218480
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bValidVertexMeshData@@YGHPAU_TRIVERTEX@@PAXKKK@Z @ 0x216EA3 (-bValidVertexMeshData@@YGHPAU_TRIVERTEX@@PAXKKK@Z.c)
 */

BOOL __stdcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        int a3,
        void *a4,
        ULONG a5,
        void *a6,
        ULONG nMesh,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v13; // ebx
  bool v15; // cc
  size_t v16; // esi
  TRIVERTEX *v17; // edi
  void *v18; // eax
  void *v19; // esi
  size_t v20; // ecx
  size_t v21; // ecx
  SURFOBJ *v22; // edi
  CLIPOBJ *DDIOBJ; // esi
  XLATEOBJ *v24; // eax
  BOOL v25; // eax
  TRIVERTEX *v26; // [esp-1Ch] [ebp-A4h]
  ULONG v27; // [esp-18h] [ebp-A0h]
  PVOID v28; // [esp-14h] [ebp-9Ch]
  RECTL *v29; // [esp-Ch] [ebp-94h]
  POINTL *v30; // [esp-8h] [ebp-90h]
  int v31; // [esp-4h] [ebp-8Ch]
  unsigned int v32; // [esp+0h] [ebp-88h]
  unsigned int v33; // [esp+4h] [ebp-84h]
  _DWORD v34[2]; // [esp+10h] [ebp-78h] BYREF
  int v35; // [esp+18h] [ebp-70h]
  struct _CLIPOBJ *v36; // [esp+1Ch] [ebp-6Ch]
  struct UMPDOBJ *v37; // [esp+20h] [ebp-68h]
  size_t v38; // [esp+24h] [ebp-64h]
  size_t MaxCount; // [esp+28h] [ebp-60h]
  POINTL *v40; // [esp+2Ch] [ebp-5Ch]
  RECTL *v41; // [esp+30h] [ebp-58h]
  RECTL *prclExtents; // [esp+34h] [ebp-54h] BYREF
  POINTL *pptlDitherOrg; // [esp+38h] [ebp-50h] BYREF
  PVOID pMesh; // [esp+3Ch] [ebp-4Ch]
  TRIVERTEX *pVertex; // [esp+40h] [ebp-48h]
  void *v46; // [esp+44h] [ebp-44h]
  void *Src; // [esp+48h] [ebp-40h]
  BOOL v48; // [esp+4Ch] [ebp-3Ch]
  ULONG nVertex; // [esp+50h] [ebp-38h]
  SURFOBJ *pso; // [esp+54h] [ebp-34h] BYREF
  int v51; // [esp+58h] [ebp-30h]
  _DWORD v52[5]; // [esp+5Ch] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v36 = a2;
  v35 = a3;
  Src = a4;
  nVertex = a5;
  v46 = a6;
  v41 = a8;
  prclExtents = a8;
  v40 = a9;
  pptlDitherOrg = a9;
  memset(v52, 0, 16);
  v48 = 0;
  v34[0] = 0;
  v34[1] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  if ( ulMode <= 1 )
  {
    v31 = 8;
    v15 = nMesh <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_9:
      if ( v51 )
        EngUnlockSurface(pso);
      --*((_DWORD *)v13 + 57);
      return 0;
    }
    v31 = 12;
    v15 = nMesh <= 0x341555;
  }
  if ( !v15 )
    goto LABEL_9;
  if ( nMesh && nVertex )
  {
    v16 = nMesh * v31;
    v38 = nMesh * v31;
    if ( nVertex > (unsigned int)&unk_271000 )
      goto LABEL_9;
    MaxCount = 16 * nVertex;
    v17 = (TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639, 0);
    pVertex = v17;
    v18 = PALLOCMEM2(v16, 1886221639, 0);
    v19 = v18;
    pMesh = v18;
    if ( pso && Src && v46 && v17 && v18 && v41 && v40 )
    {
      ms_exc.registration.TryLevel = 0;
      CaptureRECTL((_DWORD **)&prclExtents, v52);
      CapturePOINTL((_DWORD **)&pptlDitherOrg, v34);
      v20 = MaxCount;
      if ( (char *)Src + MaxCount < Src || (unsigned int)Src + MaxCount > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v17, Src, v20);
      v21 = v38;
      if ( (char *)v46 + v38 < v46 || (unsigned int)v46 + v38 > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v19, v46, v21);
      ms_exc.registration.TryLevel = -2;
      if ( !bValidVertexMeshData(
              (int)v19,
              (unsigned int)v17,
              (struct _TRIVERTEX *)nVertex,
              (void *)nMesh,
              ulMode,
              v32,
              v33) )
        goto LABEL_32;
      v22 = pso;
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v36, (struct _CLIPOBJ *)&pso->sizlBitmap);
      v30 = pptlDitherOrg;
      v29 = prclExtents;
      v28 = pMesh;
      v27 = nVertex;
      v26 = pVertex;
      v24 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v13, v35);
      v25 = EngGradientFill(v22, DDIOBJ, v24, v26, v27, v28, nMesh, v29, v30, ulMode);
    }
    else
    {
      v25 = 0;
    }
    v48 = v25;
LABEL_32:
    if ( pVertex )
      Win32FreePool((PATHOBJ *)pVertex);
    if ( pMesh )
      Win32FreePool((PATHOBJ *)pMesh);
    if ( v51 )
      EngUnlockSurface(pso);
    --*((_DWORD *)v13 + 57);
    return v48;
  }
  if ( v51 )
    EngUnlockSurface(pso);
  --*((_DWORD *)v13 + 57);
  return 1;
}
