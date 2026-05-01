/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x18045F310
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x18045FA44 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804600D8 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180460150 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r13
  int v3; // ebx
  unsigned __int64 Ptr; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v9; // r15d
  unsigned __int64 i; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  v19[1] = -2LL;
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
      goto LABEL_45;
    *(_QWORD *)&v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int128 *))((char *)this[8].Ptr + v6))(
           *(_QWORD *)((char *)this[8].Ptr + v6),
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v20);
    if ( v3 >= 0 )
    {
      v7 = v5;
      if ( v5 < Ptr )
      {
        do
        {
          if ( v3 < 0 )
            break;
          v19[0] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
          v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[8].Ptr + v7);
          v3 = (**v8)(v8, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v19);
          if ( v3 >= 0 && (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v20 + 96LL))(v20, v19[0]) )
            v3 = -2147319767;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
          ++v7;
        }
        while ( v7 < Ptr );
        v2 = this + 2;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v6 += 8LL;
    ++v5;
  }
  while ( v5 - 1 < Ptr );
  if ( v3 >= 0 )
  {
LABEL_14:
    v9 = (unsigned int)this[3].Ptr;
    LODWORD(v19[0]) = CAppLayout::_GetItemCountOfType(&this[-5], 2LL);
    for ( i = 0LL; i < Ptr; ++i )
    {
      if ( v3 < 0 )
        goto LABEL_45;
      v20 = 0LL;
      v11 = *((_QWORD *)this[8].Ptr + i);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v11 + 56LL))(v11, 0LL, &v20);
      if ( (_QWORD)v20 != __PAIR64__(HIDWORD(this[3].Ptr), v9)
        || HIDWORD(v20) != HIDWORD(this[4].Ptr)
        || SDWORD2(v20) > SLODWORD(this[4].Ptr) )
      {
        v3 = -2147319767;
      }
      if ( v3 >= 0 )
      {
        v12 = *((_QWORD *)this[8].Ptr + i);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) == 1 )
        {
          v21 = 0LL;
          v13 = *((_QWORD *)this[8].Ptr + i);
          (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v13 + 56LL))(v13, 1LL, &v21);
          if ( (int)v21 < (int)v20
            || SDWORD1(v21) < SDWORD1(v20)
            || SDWORD2(v21) > SDWORD2(v20)
            || SHIDWORD(v21) > SHIDWORD(v20) )
          {
            v3 = -2147319767;
          }
        }
        if ( v3 >= 0 )
        {
          v14 = *((_QWORD *)this[8].Ptr + i);
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
          if ( LODWORD(v19[0]) )
          {
            if ( (v15 == 1 || v15 == 4) && (i & 1) != 0 )
              goto LABEL_34;
          }
          if ( v15 != 2 )
          {
            if ( v15 == 4 )
            {
              v21 = 0LL;
              v16 = *((_QWORD *)this[8].Ptr + i);
              (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 56LL))(v16, 0LL, &v21);
            }
            goto LABEL_37;
          }
          if ( (i & 1) == 0 )
LABEL_34:
            v3 = -2147319767;
        }
      }
LABEL_37:
      v9 = DWORD2(v20);
    }
    if ( v3 >= 0 )
    {
      if ( Ptr )
      {
        v21 = 0LL;
        v17 = *((_QWORD *)this[8].Ptr + Ptr - 1);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 56LL))(v17, 0LL, &v21);
        if ( DWORD2(v21) != LODWORD(this[4].Ptr) )
          v3 = -2147319767;
      }
      if ( v3 >= 0 && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 2LL) > 1 )
        v3 = -2147319767;
    }
  }
LABEL_45:
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
