/*
 * XREFs of ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x180389C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x18038B2F0 (-_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x18038BBE0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___ @ 0x18038BC8C (AsyncFrameEvents--_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___.c)
 */

char __fastcall CMultitaskingViewFrameElement::KeyDown(
        CMultitaskingViewFrameElement *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v5 = *((_QWORD *)a1 + 70);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
    return 1;
  }
  else
  {
    if ( a2 == 9 || a2 - 37 <= 3 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*((_QWORD *)a1 + 26) + 24LL))((__int64)a1 + 208, 1LL, 1LL);
    v8 = 0;
    if ( CMultitaskingViewFrameElement::_ShouldHandleKey(a1, a2) )
    {
      if ( a2 == 27 )
      {
        AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)a1 + 36));
      }
      else if ( a2 == 9 )
      {
        v11 = *((_QWORD *)a1 + 21);
        v12 = a3 & 4;
        if ( v11 )
          v13 = (unsigned int)(v12 != 0) + 5;
        else
          v13 = (unsigned int)(v12 != 0) + 7;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _DWORD))(*(_QWORD *)a1 + 272LL))(
          v10,
          &v17,
          v11,
          v13,
          0);
        (*(void (__fastcall **)(CMultitaskingViewFrameElement *, __int64))(*(_QWORD *)a1 + 288LL))(a1, v17);
        if ( !v17 )
        {
          v14 = *((_QWORD *)a1 + 36);
          v16 = (v12 != 0) + 5;
          AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___(v14, &v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      }
      return 1;
    }
    else
    {
      v15 = *((_QWORD *)a1 + 21);
      if ( v15 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 240LL))(v15, v9, a3);
        if ( !v8 && a2 == 13 && !a3 )
          AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)a1 + 36));
      }
    }
    return v8;
  }
}
