/*
 * XREFs of ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x18005A538
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180025C70 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18002DE30 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800860C4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

HSTRING **__fastcall WindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        HSTRING **a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  HSTRING *v4; // rbp
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rsi
  __int64 v8; // r12
  char v10; // r15
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  UINT32 v13; // ebx
  const WCHAR *v14; // rax
  volatile signed __int32 *v15; // rdx
  volatile signed __int32 *v16; // rax
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx

  *a2 = 0LL;
  v4 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(a1 + 424);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 432);
  while ( v6 != v8 )
  {
    if ( !WindowsIsStringEmpty(**(HSTRING **)v6) || v4 )
    {
      v10 = 0;
      StringLen = WindowsGetStringLen(**(HSTRING **)v6);
      StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)v6, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
        goto LABEL_5;
    }
    else
    {
      v10 = 1;
    }
    if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)v6 + 8LL))
      || (v13 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)v6 + 8LL)),
          v14 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)v6 + 8LL), 0LL),
          CompareStringOrdinal(v14, v13, a4, -1, 0) == 2) )
    {
      if ( !v10 )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(a2, v6);
        break;
      }
      v15 = *(volatile signed __int32 **)(v6 + 8);
      if ( v15 )
      {
        _InterlockedIncrement(v15 + 2);
        v15 = *(volatile signed __int32 **)(v6 + 8);
      }
      v4 = *(HSTRING **)v6;
      v16 = v7;
      v17 = (std::_Ref_count_base *)v7;
      v7 = v15;
      if ( v16 )
        std::_Ref_count_base::_Decref(v17);
    }
LABEL_5:
    v6 += 16LL;
  }
  if ( !*a2 )
  {
    if ( v7 )
      _InterlockedIncrement(v7 + 2);
    v18 = (std::_Ref_count_base *)a2[1];
    *a2 = v4;
    a2[1] = (HSTRING *)v7;
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return a2;
}
