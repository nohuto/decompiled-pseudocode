/*
 * XREFs of DiscoverSamplers @ 0x180047920
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800479BC (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DiscoverSamplers(_QWORD *a1, unsigned __int64 *a2)
{
  _WORD *v2; // r8
  unsigned int v3; // r9d
  _WORD *v4; // rbx
  __int16 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax

  v2 = (_WORD *)a1[1];
  v3 = 0;
  v4 = &v2[*a1];
  while ( v2 != v4 )
  {
    v5 = *v2 & 0xFF00;
    if ( ((v5 - 256) & 0xFEFF) == 0 )
    {
      v6 = (unsigned __int8)*v2;
      v7 = v6 + 1;
      if ( v3 > (int)v6 + 1 )
        v7 = v3;
      v3 = v7;
      if ( v6 >= *a2 )
      {
LABEL_12:
        ((void (__fastcall *)(unsigned __int64, unsigned __int64 *, _WORD *, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
          v6,
          a2,
          v2,
          v7);
        __debugbreak();
      }
      *(_BYTE *)(a2[1] + 8 * v6) = 1;
      if ( v5 == 512 )
      {
        if ( v6 >= *a2 )
          goto LABEL_12;
        *(_BYTE *)(a2[1] + 8 * v6 + 1) = 1;
      }
    }
    ++v2;
  }
  return v3;
}
