/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1800868B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18005C144 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180072400 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x1800868F8 (-s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x1802A7B30 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        _QWORD *a4)
{
  int v5; // ebp
  _DWORD *v8; // rbx
  _DWORD *v9; // rdi
  IMalloc *v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rdx
  _DWORD *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 && LightweightPropertySet::s_IsMangledName(a2) )
  {
    CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v14);
    v8 = (_DWORD *)v14;
    if ( v14 && (int)Windows::Internal::String::_InitializeHelper((HSTRING *)(v14 + 8), a2) >= 0 )
    {
      v8[4] = v5;
      v9 = v8;
      v13 = v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v11 = a4[1];
      if ( v11 != a4[3]
        || (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                  (__int64)a4,
                  v11 + 1,
                  v10) >= 0 )
      {
        v12 = (__int64 *)(*a4 + 8 * a4[1]++);
        if ( v12 )
        {
          *v12 = 0LL;
          if ( v12 != (__int64 *)&v13 )
          {
            *v12 = (__int64)v8;
            v9 = 0LL;
          }
        }
      }
      if ( v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 1LL;
}
