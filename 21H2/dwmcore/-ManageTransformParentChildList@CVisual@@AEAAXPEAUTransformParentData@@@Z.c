/*
 * XREFs of ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18009FA28
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006E020 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800A047C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800D5B40 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C7588 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ManageTransformParentChildList(CVisual *this, struct TransformParentData *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  CVisual *v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 200LL))(*(_QWORD *)a2) )
  {
    if ( *((char *)this + 94) >= 0 )
    {
      v4 = *((_QWORD *)this + 2);
      v10 = this;
      v5 = *(_DWORD *)(v4 + 888);
      v6 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v6 > *(_DWORD *)(v4 + 884) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 864, 8LL, 1LL, &v10);
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 864) + 8LL * v5) = this;
        *(_DWORD *)(v4 + 888) = v6;
      }
      *((_BYTE *)this + 94) |= 0x80u;
    }
  }
  else if ( *((char *)this + 94) < 0 )
  {
    v7 = *((_QWORD *)this + 2) + 864LL;
    v10 = this;
    DynArray<CVisual *,0>::Remove(v7, &v10);
    *((_BYTE *)this + 94) &= ~0x80u;
  }
}
