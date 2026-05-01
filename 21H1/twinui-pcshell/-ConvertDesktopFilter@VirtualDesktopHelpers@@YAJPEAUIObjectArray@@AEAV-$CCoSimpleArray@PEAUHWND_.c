/*
 * XREFs of ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180369E48
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18036A0E0 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180048A4C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800A5F5C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180186B34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802192B8 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall VirtualDesktopHelpers::ConvertDesktopFilter(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  __int64 *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  void *v7; // r8
  int v8; // r14d
  __int64 v9; // rdx
  _QWORD *v10; // r12
  int v11; // ebx
  _QWORD *v12; // rdx
  void *v13; // rcx
  int v14; // eax
  void *v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  void *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-30h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-28h]
  int v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v32; // [rsp+C0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+48h] BYREF

  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v23,
    a1);
  v3 = 0;
  v27 = &v23;
  LODWORD(v25) = 0;
  v26 = 0LL;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
  v4 = (__int64 *)&v28;
  v28 = v24;
  v30 = &v23;
  v29 = 0LL;
  while ( 1 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v4);
    if ( (_DWORD)v25 == v28 && v27 == v30 )
      break;
    v5 = v26;
    v21 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    v20 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v21, &v20) < 0 )
    {
      v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v5)[9])(v5, &v22);
      if ( v14 >= 0 )
      {
        v16 = a2[1];
        if ( v16 == a2[3] )
        {
          v11 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  (__int64)a2,
                  v16 + 1,
                  v15);
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B,
              (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
              (const char *)(unsigned int)v11);
LABEL_23:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            v3 = v11;
            break;
          }
        }
        v17 = (_QWORD *)(*a2 + 8 * a2[1]++);
        if ( v17 )
          *v17 = v22;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19,
          (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
          (const char *)(unsigned int)v14);
      }
    }
    else
    {
      v32 = 0;
      pv = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v20 + 32LL))(v20, &v32, &pv);
      if ( v6 >= 0 )
      {
        v8 = 0;
        if ( v32 )
        {
          while ( 1 )
          {
            v9 = a2[1];
            v10 = pv;
            if ( v9 == a2[3] )
            {
              v11 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                      (__int64)a2,
                      v9 + 1,
                      v7);
              if ( v11 < 0 )
                break;
            }
            v12 = (_QWORD *)(*a2 + 8 * a2[1]++);
            if ( v12 )
              *v12 = v10[v8];
            if ( ++v8 >= v32 )
              goto LABEL_13;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12,
            (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
            (const char *)(unsigned int)v11);
          v18 = pv;
          pv = 0LL;
          CoTaskMemFree(v18);
          goto LABEL_23;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE,
          (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
          (const char *)(unsigned int)v6);
      }
LABEL_13:
      v13 = pv;
      pv = 0LL;
      CoTaskMemFree(v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    LODWORD(v25) = v25 + 1;
    v4 = &v25;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v3;
}
