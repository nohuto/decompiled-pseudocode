/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x22911D
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z.c)
 * Callees:
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z @ 0x24A90E (-UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  char v3; // bl
  int v4; // esi
  int v5; // edx
  int (__stdcall *v6)(_DWORD, unsigned int, int, int *); // eax
  int v7; // edi
  void *v9; // [esp+0h] [ebp-38h]
  void *v10; // [esp+0h] [ebp-38h]
  void *v11; // [esp+4h] [ebp-34h]
  void *v12; // [esp+4h] [ebp-34h]
  unsigned int v13; // [esp+10h] [ebp-28h]
  int v15; // [esp+18h] [ebp-20h]
  unsigned int v16; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+20h] [ebp-18h] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  void **v19; // [esp+28h] [ebp-10h] BYREF
  int v20; // [esp+2Ch] [ebp-Ch]
  _DWORD v21[2]; // [esp+30h] [ebp-8h] BYREF

  v2 = a2;
  v3 = 0;
  v16 = a2;
  v21[0] = a2;
  v4 = *(_DWORD *)(a2 + 60);
  if ( !*(_DWORD *)(a2 + 124) )
    return 1;
  v15 = 132;
  v5 = 1;
  v13 = 1;
  while ( 1 )
  {
    v6 = *(int (__stdcall **)(_DWORD, unsigned int, int, int *))(v4 + 2004);
    v18 = 0;
    v20 = v6(*(_DWORD *)(v2 + 64), a1, v5, &v18);
    if ( !v20 )
      break;
    v7 = *(_DWORD *)(v15 + v16);
    v19 = (void **)v7;
    if ( !UmfdAllocation::UpdateKernelmodeAllocation(v9, v11) )
    {
      (*(void (__stdcall **)(int, int))(v4 + 2068))(v20, v18);
      return v3;
    }
    v17 = 0;
    v16 = PFFOBJ::QueryFontTree((PFFOBJ *)v21, *(struct DHPDEV__ **)(v16 + 64), a1, v13, 3u, &v17);
    if ( !v16 )
      return v3;
    PFEOBJ::pfdg(&v19);
    if ( !UmfdAllocation::UpdateKernelmodeAllocation(v10, v12) )
    {
      (*(void (__stdcall **)(unsigned int, unsigned int))(v4 + 2068))(v16, v17);
      return v3;
    }
    if ( *(_DWORD *)(v7 + 28) )
    {
      v16 = 0;
      v19 = (void **)PFFOBJ::QueryFontTree((PFFOBJ *)v21, *(struct DHPDEV__ **)(v21[0] + 64), a1, v13, 2u, &v16);
      if ( !v19 )
        return v3;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v9, v11) )
      {
        (*(void (__stdcall **)(void **, unsigned int))(v4 + 2068))(v19, v16);
        return v3;
      }
    }
    v15 += 4;
    v5 = v13 + 1;
    v2 = v21[0];
    v13 = v5;
    v16 = v21[0];
    if ( (unsigned int)(v5 - 1) >= *(_DWORD *)(v21[0] + 124) )
      return 1;
  }
  return v3;
}
