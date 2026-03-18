/*
 * XREFs of ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18007D294
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800CA3F8 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800BCF48 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ManageTransformParentChildList(
        CVisual *this,
        struct TransformParentData *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  CVisual *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 200LL))(*(_QWORD *)a2) )
  {
    if ( *((char *)this + 94) >= 0 )
    {
      v6 = *((_QWORD *)this + 2);
      v12 = this;
      v7 = *(_DWORD *)(v6 + 888);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v8 > *(_DWORD *)(v6 + 884) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 864, 8LL, 1LL, &v12);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v6 + 864) + 8LL * v7) = this;
        *(_DWORD *)(v6 + 888) = v8;
      }
      *((_BYTE *)this + 94) |= 0x80u;
    }
  }
  else if ( *((char *)this + 94) < 0 )
  {
    v9 = *((_QWORD *)this + 2) + 864LL;
    v12 = this;
    DynArray<CVisual *,0>::Remove(v9, &v12, a3, a4);
    *((_BYTE *)this + 94) &= ~0x80u;
  }
}
