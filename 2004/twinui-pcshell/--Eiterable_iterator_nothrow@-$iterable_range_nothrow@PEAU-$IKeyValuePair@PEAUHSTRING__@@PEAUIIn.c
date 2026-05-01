/*
 * XREFs of ??Eiterable_iterator_nothrow@?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x1803CE68C
 * Callers:
 *     ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x1803D01C0 (-Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_iterator_nothrow::operator++(
        _DWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  char v6; // [rsp+30h] [rbp+8h] BYREF

  **(_DWORD **)(*(_QWORD *)a1 + 16LL) = (*(__int64 (__fastcall **)(_QWORD, char *))(***(_QWORD ***)a1 + 64LL))(
                                          **(_QWORD **)a1,
                                          &v6);
  v2 = *(__int64 **)a1;
  if ( **(int **)(*(_QWORD *)a1 + 16LL) >= 0
    && v6
    && (v3 = *v2,
        v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 48LL),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 1),
        **(_DWORD **)(*(_QWORD *)a1 + 16LL) = v4(v3, v2 + 1),
        **(int **)(*(_QWORD *)a1 + 16LL) >= 0) )
  {
    ++a1[2];
  }
  else
  {
    a1[2] = -1;
  }
  return a1;
}
