/*
 * XREFs of ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180022044
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180021BF8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180023AA4 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x180022160 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnSizeChanged(CSplashScreen *this, const struct tagRECT *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int128 v5; // xmm6
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  *((float *)this + 34) = (float)(a2->bottom - a2->top);
  *((float *)this + 33) = (float)(a2->right - a2->left);
  CSplashScreen::_get_ImageLocationInternal(this, &v9);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v3 != v4 )
  {
    v5 = v9;
    do
    {
      v6 = *v3;
      v11 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v10 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)v6 + 40LL))(
             v6,
             &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
             &v10) >= 0 )
      {
        v7 = *v10;
        v9 = v5;
        (*(void (__fastcall **)(_QWORD *, __int128 *))(v7 + 48))(v10, &v9);
      }
      v8 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v3;
    }
    while ( v3 != v4 );
  }
}
