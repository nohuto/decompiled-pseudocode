/*
 * XREFs of ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008B00C
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008AB10 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x18008AF00 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x18008A1A8 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x18008AE88 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetRepresentationType(CImmersiveWindowIconic *a1, int a2, char a3)
{
  int v3; // r14d
  unsigned int v4; // ebx
  int v6; // esi
  int ImmersiveIconContainerSize; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax

  v3 = *((_DWORD *)a1 + 76);
  v4 = 0;
  *((_DWORD *)a1 + 76) = a2;
  v6 = a2;
  if ( a2 != 1 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(*((_DWORD *)a1 + 79), a2);
    v9 = *((_DWORD *)a1 + 79);
    *((_DWORD *)a1 + 77) = ImmersiveIconContainerSize - 2;
    v10 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(v9, v6);
    v6 = *((_DWORD *)a1 + 76);
    *((_DWORD *)a1 + 78) = v10;
  }
  if ( v6 != v3 )
  {
    if ( a3 )
    {
      v11 = CImmersiveWindowIconic::OnIconUpdated(a1, a3);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xF8u);
    }
  }
  return v4;
}
