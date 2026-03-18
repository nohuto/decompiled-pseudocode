/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D41D4
 * Callers:
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F0470 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1610 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F19F0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F1EB0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F2190 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F2660 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F29A0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3010 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3020 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3330 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F34F0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180047B78 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 */

void __fastcall CDeviceResource::AddResourceNotifier(CDeviceResource *this, struct IDeviceResourceNotify *a2)
{
  __int64 *v2; // rcx
  _QWORD *v4; // rdx
  struct IDeviceResourceNotify *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (__int64 *)((char *)this - 40);
  v4 = (_QWORD *)v2[1];
  if ( (_QWORD *)v2[2] == v4 )
  {
    std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v2, v4, &v5);
  }
  else
  {
    *v4 = a2;
    v2[1] += 8LL;
  }
}
