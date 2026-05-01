/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18017ADD0
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18017E480 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18004585C (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18018610C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rax
  int RoomAt; // ebx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-79h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-71h] BYREF
  _QWORD v11[8]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v12[2]; // [rsp+78h] [rbp-29h] BYREF
  int v13; // [rsp+88h] [rbp-19h]
  int v14; // [rsp+8Ch] [rbp-15h]
  __int128 v15; // [rsp+90h] [rbp-11h]
  __int128 v16; // [rsp+A0h] [rbp-1h]
  __int128 v17; // [rsp+B0h] [rbp+Fh]
  __int64 v18; // [rsp+C0h] [rbp+1Fh]
  int v19; // [rsp+C8h] [rbp+27h]
  __int64 v20; // [rsp+D0h] [rbp+2Fh]
  int v21; // [rsp+D8h] [rbp+37h]
  int v22; // [rsp+DCh] [rbp+3Bh]

  v3 = *((_QWORD *)this + 20);
  v12[0] = a2;
  v12[1] = 0LL;
  v13 = 3;
  v14 = 0;
  v15 = 0LL;
  v11[5] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = (v3 + 112) & -(__int64)(v3 != 0);
  v21 = 3;
  v22 = 15;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v11[0] = v12;
  v9 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  RoomAt = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
             &v10,
             v11);
  if ( RoomAt >= 0 )
    RoomAt = (**v10)(v10, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( RoomAt >= 0 )
  {
    v5 = (_QWORD *)((char *)this + 256);
    v6 = *((_QWORD *)this + 33);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               v5,
               v6);
    if ( RoomAt >= 0 )
    {
      v7 = (__int64 *)(*v5 + 8 * v6);
      if ( v7 )
      {
        *v7 = v9;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return (unsigned int)RoomAt;
}
