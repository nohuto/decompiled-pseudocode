/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x18038BE04
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18037ABE0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18036C924 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x18038BB48 (Windows--Internal--ComTaskPool--QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+28h] BYREF

  v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
      v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
      v9 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = v2;
      ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v4);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
      v7[0] = (__int64)v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___(ControllerApartment, &v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
  }
}
