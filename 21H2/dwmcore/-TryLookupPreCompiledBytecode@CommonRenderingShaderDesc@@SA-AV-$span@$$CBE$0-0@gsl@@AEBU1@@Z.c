/*
 * XREFs of ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x18026A658
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180050ED0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(_QWORD *a1, __int64 a2)
{
  void *v2; // rax

  if ( *(_DWORD *)(a2 + 16) > 1u || *(_DWORD *)(a2 + 32) > 1u || *(_DWORD *)(a2 + 40) != -1 || *(_BYTE *)(a2 + 44) )
    goto LABEL_12;
  if ( *(_DWORD *)a2 == 1 )
  {
    *a1 = 800LL;
    v2 = &unk_1802DF050;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a2 == 2 )
  {
    *a1 = 824LL;
    v2 = &unk_1802DF370;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a2 != 5 )
  {
LABEL_12:
    a1[1] = 0LL;
    *a1 = 0LL;
    return a1;
  }
  *a1 = 856LL;
  v2 = &unk_1802DF6B0;
LABEL_9:
  a1[1] = v2;
  return a1;
}
