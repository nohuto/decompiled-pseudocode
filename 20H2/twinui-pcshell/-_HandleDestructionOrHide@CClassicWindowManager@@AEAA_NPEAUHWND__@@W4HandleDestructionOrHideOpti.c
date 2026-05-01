/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180054670
 * Callers:
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1800543A0 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1800543C0 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x180054614 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180162180 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180163A50 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CClassicWindowManager::_HandleDestructionOrHide(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // ebx
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int8 v14; // di
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v19)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  _QWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+48h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+50h] BYREF
  int v27; // [rsp+A0h] [rbp+58h]
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+60h] BYREF

  v27 = a3;
  v3 = a3;
  v25 = 0LL;
  v6 = a1 + 23;
  v23[0] = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  if ( a1[25] )
  {
    v23[1] = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6[1] + 8 * v8);
      v24[0] = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v26 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             (__int64 *)&v26) >= 0
        && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v26)[24])(
             v26,
             a2) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v12 = (__int64)v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( ++v8 >= v6[2] )
      {
        v3 = v27;
        v7 = (unsigned __int64)v28;
        goto LABEL_13;
      }
    }
    v7 = v8;
    v13 = 0;
    v3 = v27;
  }
  else
  {
LABEL_13:
    v13 = -2147319765;
  }
  if ( v13 < 0
    || (v19 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD))(a1[24] + 8 * v7),
        (**v19)(v19, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v25) < 0) )
  {
    v14 = 0;
    if ( v3 == 1 )
    {
      v24[0] = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      if ( a1[30] )
      {
        while ( 1 )
        {
          v23[0] = 0LL;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
          v28 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[29] + 8 * v16);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
          v26 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v28, (__int64 *)&v26) >= 0
            && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v26)[24])(
                 v26,
                 a2) )
          {
            v22 = 0;
          }
          else
          {
            v22 = -1;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
          if ( !v22 )
            break;
          if ( (unsigned __int64)++v16 >= a1[30] )
            goto LABEL_17;
        }
        v15 = v16;
        v9 = 0;
      }
LABEL_17:
      if ( v9 >= 0 )
      {
        v14 = 1;
        CClassicWindowManager::RemoveApplicationView(a1, *(_QWORD *)(a1[29] + 8 * v15), 0LL);
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[28] + 16LL))(a1 + 28, v15);
      }
      else
      {
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = 1;
    if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[17])(v25) )
    {
      v26 = v25;
      v28 = v25;
      v23[0] = &v26;
      v24[0] = &v28;
      v24[1] = v23;
      CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, v24);
    }
    if ( v3
      || (*(int (__fastcall **)(_QWORD *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(a1[28] + 8LL))(
           a1 + 28,
           &v25) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v6 + 16LL))(v6, v7);
      CClassicWindowManager::RemoveApplicationView(v21, v25, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v6 + 16LL))(v6, v7);
      CClassicWindowManager::RemoveApplicationView(v20, v25, 1LL);
    }
  }
  v17 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
  }
  return v14;
}
