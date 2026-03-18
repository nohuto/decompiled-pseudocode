/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D3D58
 * Callers:
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F00C0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1260 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1640 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1B00 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1DE0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F22B0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F25F0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F2C60 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F2C70 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F2F80 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3140 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 */

void __fastcall CDeviceResource::AddResourceNotifier(CDeviceResource *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // rcx
  _BYTE *v4; // rdx
  struct IDeviceResourceNotify *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (char *)this - 40;
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
