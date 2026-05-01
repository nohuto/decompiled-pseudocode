/*
 * XREFs of ?_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUHWND__@@@Z @ 0x18047DC28
 * Callers:
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18047D370 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180034CD0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

HANDLE __fastcall ImmersiveContextMenuHelper::_RetrieveParentArrayFromWindow(HWND hWnd)
{
  HANDLE PropW; // rbx
  LPCWSTR lpString[5]; // [rsp+20h] [rbp-28h] BYREF

  PropW = 0LL;
  memset(lpString, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)lpString,
              L"ImmersiveContextMenuArray_%lu",
              0xFFFFFFFFLL) >= 0 )
    PropW = GetPropW(hWnd, lpString[0]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString);
  return PropW;
}
