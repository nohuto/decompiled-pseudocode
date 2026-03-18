/*
 * XREFs of ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802743F4
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180273C70 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801857E8 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::UpdateMouseWheelParameters(__int64 a1)
{
  __int64 result; // rax

  if ( CCommonRegistryData::MousewheelScrollingMode == 2
    || *((_BYTE *)CPointerDeviceCache::Query(*(_QWORD *)(a1 + 240)) + 48)
    && !CCommonRegistryData::MousewheelScrollingMode
    && ((float)(CPointerDeviceCache::s_rcMouseRegion.right - CPointerDeviceCache::s_rcMouseRegion.left) <= 0.0
     || (float)(CPointerDeviceCache::s_rcMouseRegion.bottom - CPointerDeviceCache::s_rcMouseRegion.top) <= 0.0) )
  {
    return 0LL;
  }
  result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 1LL);
  if ( (int)result >= 0 )
  {
    result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 2LL);
    if ( (int)result >= 0 )
    {
      result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 5LL);
      if ( (int)result >= 0 )
        return SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 6LL);
    }
  }
  return result;
}
