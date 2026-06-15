/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E861C
 * Callers:
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800E8850 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800E8890 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800E88D0 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800E9B10 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CE05C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E7CE0 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 **v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 *i; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+80h] [rbp+48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+50h]
  __int64 v22; // [rsp+90h] [rbp+58h] BYREF
  __int64 v23; // [rsp+98h] [rbp+60h] BYREF

  v21 = a2;
  v5 = (__int64 **)(a1 + 88);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v19[1] = v6;
  v8 = 0;
  while ( 2 )
  {
    if ( !*a3 )
    {
      for ( i = *v5; i != v5[1]; ++i )
      {
        v10 = *i;
        v23 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v20 = 0LL;
        v11 = Microsoft::WRL::WeakRef::As<IInspectable>(&v23, &v20);
        v12 = v20;
        if ( v11 >= 0 && v20 )
        {
          v22 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v20, &v22) >= 0 )
          {
            v19[0] = v22;
            v13 = *(_QWORD *)(a2 + 56);
            if ( !v13 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor_0();
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v19) )
            {
              v14 = v22;
              v22 = 0LL;
              *a3 = v14;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
              v15 = v20;
              if ( v20 )
              {
                v20 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              }
              if ( v10 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
              break;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
          v12 = v20;
        }
        if ( v12 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ++v8;
      v5 += 3;
      if ( v8 < 4 )
        continue;
    }
    break;
  }
  v16 = *a3 == 0 ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v17 = *(_QWORD *)(a2 + 56);
  if ( v17 )
  {
    LOBYTE(v7) = v17 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v16;
}
