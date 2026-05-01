/*
 * XREFs of ?KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x180389E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x18038B2F0 (-_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___ @ 0x18038BD48 (AsyncFrameEvents--_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___.c)
 */

char __fastcall CMultitaskingViewFrameElement::KeyUp(CMultitaskingViewFrameElement *a1, unsigned int a2, int a3)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  v5 = *((_QWORD *)a1 + 70);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5);
    return 1;
  }
  else
  {
    if ( CMultitaskingViewFrameElement::_ShouldHandleKey(a1, a2) )
    {
      v4 = 1;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 21);
      if ( v9 )
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 248LL))(v9);
    }
    v10 = *((_QWORD *)a1 + 36);
    v11 = a2;
    v12 = a3;
    AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___(v10, &v11);
    return v4;
  }
}
