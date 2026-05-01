/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180289F20
 * Callers:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180289E3C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned __int64 v8; // r14
  char v9; // r13
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  UINT32 v12; // edi
  const WCHAR *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 i; // [rsp+80h] [rbp+48h] BYREF
  LPCWCH lpString2; // [rsp+88h] [rbp+50h]
  LPCWCH v19; // [rsp+90h] [rbp+58h]
  __int64 v20; // [rsp+98h] [rbp+60h] BYREF

  v19 = a3;
  lpString2 = a2;
  v4 = 0;
  *a4 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v8 = 0LL;
  for ( i = 0LL; v8 < *(_QWORD *)(a1 + 328); ++v8 )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 8LL)) || v6 )
    {
      v9 = 0;
      StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 8LL));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 8LL), 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, lpString2, -1, 1) != 2 )
        continue;
    }
    else
    {
      v9 = 1;
    }
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 16LL)) )
    {
      v12 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 16LL));
      v13 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 16LL), 0LL);
      if ( CompareStringOrdinal(v13, v12, v19, -1, 0) != 2 )
        continue;
    }
    v14 = (__int64 *)(*(_QWORD *)(a1 + 320) + 8 * v8);
    if ( !v9 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&i, v14);
      v15 = i;
      if ( !i )
        break;
LABEL_15:
      i = 0LL;
      *a4 = v15;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v20, v14);
    v6 = v20;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&i, &v20);
  v15 = i;
  if ( i )
    goto LABEL_15;
  v4 = -2147023728;
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&i);
  return v4;
}
