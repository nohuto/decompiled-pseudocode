/*
 * XREFs of ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800818B0
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180019DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewVisual,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  char *v6; // r8
  char *v7; // r9
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a2;
  v3 = DynArrayImpl<0>::Grow((char **)a1, 0x28u, 1, 0, &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(char **)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v7 = &v6[40 * v5];
      do
      {
        LODWORD(v5) = v5 - 1;
        v8 = *(_OWORD *)&v6[40 * (unsigned int)v5 + 16];
        *(_OWORD *)v7 = *(_OWORD *)&v6[40 * (unsigned int)v5];
        v9 = *(_QWORD *)&v6[40 * (unsigned int)v5 + 32];
        *((_OWORD *)v7 + 1) = v8;
        *((_QWORD *)v7 + 4) = v9;
        v7 -= 40;
      }
      while ( (_DWORD)v5 );
    }
    v10 = v12;
    if ( v12 >= (unsigned __int64)v6 && v12 < (unsigned __int64)&v6[40 * *(unsigned int *)(a1 + 24) - 40] )
      v10 = v12 + 40;
    *(_OWORD *)v6 = *(_OWORD *)v10;
    *((_OWORD *)v6 + 1) = *(_OWORD *)(v10 + 16);
    *((_QWORD *)v6 + 4) = *(_QWORD *)(v10 + 32);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
