/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702
 * Callers:
 *     _NtUserInternalGetWindowText@12 @ 0x1D632 (_NtUserInternalGetWindowText@12.c)
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     __GetAltTabInfo@20 @ 0x15D068 (__GetAltTabInfo@20.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__thiscall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  struct _LARGE_UNICODE_STRING *result; // eax

  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_DWORD *)this - 20) + 116);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_DWORD *)this - 20) + 120)) & 0x7FFFFFFF;
  result = a2;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_DWORD *)this - 20) + 120) ^ (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_DWORD *)this - 20) + 120)) & 0x7FFFFFFF;
  return result;
}
