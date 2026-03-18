/*
 * XREFs of ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800EDD18
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 * Callees:
 *     GetInputs @ 0x1800EDDB0 (GetInputs.c)
 */

__int64 __fastcall CommonRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  void *v4; // rax
  __int128 v5; // xmm0
  int v6; // r10d
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !a3 )
  {
    v4 = &unk_180398520;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_1803427B0;
LABEL_4:
    *(_QWORD *)(a1 + 16) = 3106LL;
    *(_QWORD *)(a1 + 24) = v4;
    *(_BYTE *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = off_1802C17A0[a2];
    v5 = *(_OWORD *)GetInputs(v8);
    *(_DWORD *)(v3 + 48) = v6;
    *(_WORD *)(v3 + 52) = 10;
    *(_OWORD *)v3 = v5;
  }
  return v3;
}
