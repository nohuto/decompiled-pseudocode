/*
 * XREFs of ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x180147338
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1801473C8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x180148920 (--_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800838D4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 */

void __fastcall CActivationBasedAppAndGlomCollection::~CActivationBasedAppAndGlomCollection(
        CActivationBasedAppAndGlomCollection *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 6) )
    {
      v4 = 0LL;
      do
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(v4 + *((_QWORD *)this + 5));
        ++v3;
        v4 += 40LL;
      }
      while ( v3 < *((_QWORD *)this + 6) );
      v2 = (void *)*((_QWORD *)this + 5);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll((__int64)this + 8);
}
