/*
 * XREFs of ?AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800C9E10
 * Callers:
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800ED680 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800ED6A0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800EE580 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800EED80 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800EEDF0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800EEE60 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800EF7C0 (-AddResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002CD68 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 */

void __fastcall CD2DResource::AddResourceNotifier(CD2DResource *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // rcx
  _BYTE *v4; // rdx
  struct IDeviceResourceNotify *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (char *)this - 48;
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
