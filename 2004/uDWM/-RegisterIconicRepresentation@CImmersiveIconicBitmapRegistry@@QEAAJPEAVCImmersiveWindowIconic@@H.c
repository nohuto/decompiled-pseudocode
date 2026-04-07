/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x18008A29C
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008AB10 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x18008AF00 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180026E8C (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18008A77C (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        void *a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rdi
  int v11; // ebx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v12; // rdx
  __int64 v13; // rdx
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  int v19; // eax
  enum DEVICE_SCALE_FACTOR v20; // [rsp+20h] [rbp-38h]
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+68h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 35);
  v11 = -2147024774;
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v12 = IconicResourceNoRef;
  if ( !IconicResourceNoRef )
  {
    v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            48LL);
    if ( v13 )
    {
      *(_QWORD *)v13 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_DWORD *)(v13 + 24) = 0;
      *(_DWORD *)(v13 + 28) = 0;
      *(_DWORD *)(v13 + 32) = 0;
      *(_BYTE *)(v13 + 40) = 0;
      *(_DWORD *)(v13 + 44) = 1;
    }
    else
    {
      v13 = 0LL;
    }
    IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v13;
    if ( !v13 )
    {
      v11 = -2147024882;
      v20 = 91;
LABEL_7:
      v14 = v11;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v20);
      return (unsigned int)v11;
    }
    v15 = *((_DWORD *)this + 10);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_21:
      v20 = 92;
      goto LABEL_7;
    }
    if ( v16 > *((_DWORD *)this + 9) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &IconicResourceNoRef);
      v11 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
      if ( v11 < 0 )
        goto LABEL_21;
    }
    else
    {
      v11 = 0;
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v13;
      *((_DWORD *)this + 10) = v16;
    }
    v12 = IconicResourceNoRef;
  }
  if ( v12 )
  {
    v17 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
            this,
            v12,
            *(HWND *)(v7 + 40),
            a3,
            a4,
            (bool)a5,
            a6,
            a7);
    v11 = v17;
    if ( v17 < 0 )
    {
      v20 = 97;
      v14 = v17;
      goto LABEL_16;
    }
  }
  return (unsigned int)v11;
}
