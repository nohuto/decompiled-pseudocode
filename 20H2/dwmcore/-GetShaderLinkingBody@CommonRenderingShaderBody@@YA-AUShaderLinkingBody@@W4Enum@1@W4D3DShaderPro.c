/*
 * XREFs of ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D4B70
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005DBD0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 * Callees:
 *     GetInputs @ 0x1800D4C08 (GetInputs.c)
 */

__int64 __fastcall CommonRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  void *v4; // rax
  __int128 v5; // xmm0
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !a3 )
  {
    v4 = &unk_180304A40;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_1802CBDD0;
LABEL_4:
    *(_QWORD *)(a1 + 16) = 3106LL;
    *(_QWORD *)(a1 + 24) = v4;
    *(_BYTE *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = off_180278330[a2];
    v5 = *(_OWORD *)GetInputs(v7);
    *(_DWORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 52) = 10;
    *(_OWORD *)a1 = v5;
  }
  return a1;
}
