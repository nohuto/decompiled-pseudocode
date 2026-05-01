/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180044150
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180034A50 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800437FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x18014F7EC (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x180153B14 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameService *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  unsigned __int64 v5; // r12
  int v8; // edi
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  struct IApplicationFrameProxy *v11; // rcx
  struct IApplicationFrameProxy **v12; // rcx
  __int64 **v13; // r14
  __int64 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  signed __int64 v20; // r15
  __int16 v21; // ax
  char *v22; // rax
  __int64 v23; // rbx
  struct IApplicationFrameProxy *v24; // rbx
  struct IApplicationFrameProxy *v25; // rax
  __int64 *v26; // r15
  __int64 v27; // rdx
  __int64 *v28; // r8
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  __int64 v32; // rbx
  struct IApplicationFrameProxy *v34; // [rsp+30h] [rbp-38h] BYREF
  struct IApplicationFrameProxy *v35; // [rsp+38h] [rbp-30h] BYREF

  v5 = a3;
  *a4 = 0LL;
  v8 = -2147023728;
  v9 = *((_QWORD *)this + 9);
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v10 = 0LL;
    if ( v9 )
    {
      while ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v10) + 144LL), -1, a2, -1, 1) != 2
           || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v10) + 168LL) != (_DWORD)v5 )
      {
        if ( ++v10 >= *((_QWORD *)this + 9) )
          return (unsigned int)v8;
      }
      Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(&v35);
      v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), v10);
      if ( v8 >= 0 )
      {
        v11 = v35;
        v35 = 0LL;
        *a4 = v11;
      }
      v12 = &v35;
LABEL_50:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  if ( !v9 )
    return (unsigned int)v8;
  v13 = (__int64 **)((char *)this + 64);
  v14 = (__int64 *)*((_QWORD *)this + 8);
  v15 = *v14;
  v16 = *v14 + 144;
  v8 = 0;
  if ( !a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(*v14 + 144);
LABEL_27:
    *(_DWORD *)(v15 + 168) = v5;
    SetPropW(*(HWND *)(v15 + 80), L"LastSetGlomIdForReconstitution", (HANDLE)v5);
    goto LABEL_28;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( a2[v17] );
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         *v14 + 144,
         v17);
  if ( v8 >= 0 )
  {
    v18 = v17 + 1;
    v19 = *(char **)v16;
    if ( v17 > 0x7FFFFFFE )
    {
      if ( v17 != -1LL )
        *(_WORD *)v19 = 0;
    }
    else
    {
      v20 = (char *)a2 - v19;
      do
      {
        if ( v18 == 1 )
          break;
        v21 = *(_WORD *)&v19[v20];
        if ( !v21 )
          break;
        *(_WORD *)v19 = v21;
        v19 += 2;
        --v18;
      }
      while ( v18 );
      v22 = v19 - 2;
      if ( v18 )
        v22 = v19;
      *(_WORD *)v22 = 0;
    }
    *(_QWORD *)(v16 + 8) = v17;
    goto LABEL_27;
  }
LABEL_28:
  if ( v8 >= 0 )
  {
    v23 = **v13;
    if ( v23 )
    {
      v24 = (struct IApplicationFrameProxy *)(v23 + 8);
      v25 = v24;
    }
    else
    {
      v24 = 0LL;
      v25 = 0LL;
    }
    v34 = v24;
    if ( v25 )
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v24 + 8LL))(v24);
    v26 = *v13;
    v8 = 0;
    v27 = *((_QWORD *)this + 13);
    if ( v27 != *((_QWORD *)this + 15)
      || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (char *)this + 96,
                 v27 + 1),
          v8 >= 0) )
    {
      v28 = (__int64 *)(*((_QWORD *)this + 12) + 8 * (*((_QWORD *)this + 13))++);
      if ( v28 )
      {
        v29 = *v26;
        *v28 = *v26;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 64);
          while ( v30 >= 0 )
          {
            if ( (_DWORD)v30 != 0x7FFFFFFF )
            {
              v31 = v30;
              v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 64), v30 + 1, v30);
              if ( v31 != v30 )
                continue;
            }
            goto LABEL_44;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v30 + 16));
LABEL_44:
          v24 = v34;
        }
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        (__int64 *)this + 8,
        0LL);
    }
    if ( v8 < 0 )
    {
      v32 = **v13;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v32 + 144);
      *(_DWORD *)(v32 + 168) = 0;
      RemovePropW(*(HWND *)(v32 + 80), L"LastSetGlomIdForReconstitution");
    }
    else
    {
      v34 = 0LL;
      *a4 = v24;
    }
    v12 = &v34;
    goto LABEL_50;
  }
  return (unsigned int)v8;
}
