/*
 * XREFs of ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C007EB00 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C007F5C4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C007F828 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0080B30 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0080B64 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C0081418 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C007BF68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007EFAC (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007F350 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CContentResourceState::SetBoundBuffer(CContentResourceState *this, struct CPoolBufferResource *a2)
{
  CPoolBufferResource *v4; // rcx

  v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      CPoolBufferResource::AddUsageReference(a2);
      ++*((_DWORD *)a2 + 6);
      v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
    }
    if ( v4 )
    {
      CPoolBufferResource::RemoveUsageReference(v4);
      CFlipResource::Release(*((CFlipResource **)this + 6));
    }
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = a2;
  }
}
