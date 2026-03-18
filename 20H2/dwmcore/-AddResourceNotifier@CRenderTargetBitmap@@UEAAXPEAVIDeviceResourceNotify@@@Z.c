/*
 * XREFs of ?AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D84CC
 * Callers:
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F00D0 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3530 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3670 (-AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 */

void __fastcall CRenderTargetBitmap::AddResourceNotifier(CRenderTargetBitmap *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // rcx
  _BYTE *v4; // rdx
  struct IDeviceResourceNotify *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 96;
  v5 = a2;
  v4 = (_BYTE *)*((_QWORD *)v2 + 1);
  if ( *((_BYTE **)v2 + 2) == v4 )
  {
    std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>((const void **)v2, v4, &v5);
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)v2 + 1) += 8LL;
  }
}
