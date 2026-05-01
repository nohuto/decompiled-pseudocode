/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180483360
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180483AC8 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B4FA8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x18048415C (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804841D4 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r13
  int v3; // ebx
  unsigned __int64 Ptr; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v9; // r14d
  bool v10; // r12
  unsigned __int64 i; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF

  v20[1] = -2LL;
  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = 0;
  Ptr = (unsigned __int64)this[9].Ptr;
  if ( !Ptr )
    goto LABEL_14;
  v5 = 1LL;
  v6 = 0LL;
  do
  {
    if ( v3 < 0 )
      goto LABEL_53;
    *(_QWORD *)&v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int128 *))((char *)this[8].Ptr + v6))(
           *(_QWORD *)((char *)this[8].Ptr + v6),
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v21);
    if ( v3 >= 0 )
    {
      v7 = v5;
      if ( v5 < Ptr )
      {
        do
        {
          if ( v3 < 0 )
            break;
          v20[0] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
          v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[8].Ptr + v7);
          v3 = (**v8)(v8, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v20);
          if ( v3 >= 0 && (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v21 + 96LL))(v21, v20[0]) )
            v3 = -2147319767;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
          ++v7;
        }
        while ( v7 < Ptr );
        v2 = this + 2;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v6 += 8LL;
    ++v5;
  }
  while ( v5 - 1 < Ptr );
  if ( v3 >= 0 )
  {
LABEL_14:
    v9 = (unsigned int)this[3].Ptr;
    LODWORD(v20[0]) = CAppLayout::_GetItemCountOfType(&this[-5], 2LL);
    v10 = IsSurfaceHubWithWin32VtcEnabled() && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 4LL);
    for ( i = 0LL; i < Ptr; ++i )
    {
      if ( v3 < 0 )
        goto LABEL_53;
      v21 = 0LL;
      v12 = *((_QWORD *)this[8].Ptr + i);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v12 + 56LL))(v12, 0LL, &v21);
      if ( (_QWORD)v21 != __PAIR64__(HIDWORD(this[3].Ptr), v9)
        || HIDWORD(v21) != HIDWORD(this[4].Ptr)
        || SDWORD2(v21) > SLODWORD(this[4].Ptr) )
      {
        if ( v10 )
          goto LABEL_26;
        v3 = -2147319767;
      }
      if ( v10 )
      {
LABEL_26:
        if ( (_DWORD)v21 == DWORD2(v21) )
          v3 = -2147319767;
      }
      if ( v3 < 0 )
        goto LABEL_45;
      v13 = *((_QWORD *)this[8].Ptr + i);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) == 1 )
      {
        v22 = 0LL;
        v14 = *((_QWORD *)this[8].Ptr + i);
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v14 + 56LL))(v14, 1LL, &v22);
        if ( (int)v22 < (int)v21
          || SDWORD1(v22) < SDWORD1(v21)
          || SDWORD2(v22) > SDWORD2(v21)
          || SHIDWORD(v22) > SHIDWORD(v21) )
        {
          v3 = -2147319767;
        }
      }
      if ( v3 < 0 )
        goto LABEL_45;
      v15 = *((_QWORD *)this[8].Ptr + i);
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      if ( LODWORD(v20[0]) && (v16 == 1 || v16 == 4) && (i & 1) != 0 )
        goto LABEL_42;
      if ( v16 != 2 )
      {
        if ( v16 == 4 )
        {
          v22 = 0LL;
          v17 = *((_QWORD *)this[8].Ptr + i);
          (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 56LL))(v17, 0LL, &v22);
        }
        goto LABEL_45;
      }
      if ( (i & 1) == 0 )
LABEL_42:
        v3 = -2147319767;
LABEL_45:
      v9 = DWORD2(v21);
    }
    if ( v3 >= 0 )
    {
      if ( Ptr )
      {
        v22 = 0LL;
        v18 = *((_QWORD *)this[8].Ptr + Ptr - 1);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18 + 56LL))(v18, 0LL, &v22);
        if ( DWORD2(v22) != LODWORD(this[4].Ptr) )
          v3 = -2147319767;
      }
      if ( v3 >= 0 && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 2LL) > 1 )
        v3 = -2147319767;
    }
  }
LABEL_53:
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
