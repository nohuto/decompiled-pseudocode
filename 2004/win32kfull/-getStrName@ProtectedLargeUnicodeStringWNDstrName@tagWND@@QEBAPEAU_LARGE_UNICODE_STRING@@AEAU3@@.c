/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F6BD8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     DefSetText @ 0x1C00ADA20 (DefSetText.c)
 *     NtUserInternalGetWindowText @ 0x1C00F6AA0 (NtUserInternalGetWindowText.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C01F4638 (_GetAltTabInfo.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  struct _LARGE_UNICODE_STRING *result; // rax

  *((_QWORD *)a2 + 1) = *(_QWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this - 18) + 184LL);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  result = a2;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_QWORD *)this - 18) + 188LL) ^ (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  return result;
}
