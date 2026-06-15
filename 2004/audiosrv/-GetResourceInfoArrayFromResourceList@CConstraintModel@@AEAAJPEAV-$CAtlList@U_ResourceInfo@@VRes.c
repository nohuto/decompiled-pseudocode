/*
 * XREFs of ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013A480
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C690 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013A410 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FindIndex@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z @ 0x18013A10C (-FindIndex@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z.c)
 */

__int64 __fastcall CConstraintModel::GetResourceInfoArrayFromResourceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  LPVOID v9; // r9
  unsigned __int64 v10; // r8
  _QWORD *Index; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm1

  v6 = 0;
  *a6 = 0LL;
  *a5 = 0;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      v9 = operator new(saturated_mul(v8, 0x20CuLL));
      if ( v9 )
      {
        v10 = 0LL;
        while ( v10 < *(_QWORD *)(a2 + 16) )
        {
          Index = ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::FindIndex(a2, v10);
          if ( !Index )
            ATL::AtlThrowImpl(-2147467259);
          v15 = Index + 2;
          v16 = v13;
          v17 = 4LL;
          do
          {
            *(_OWORD *)v16 = *(_OWORD *)v15;
            *(_OWORD *)(v16 + 16) = *((_OWORD *)v15 + 1);
            *(_OWORD *)(v16 + 32) = *((_OWORD *)v15 + 2);
            *(_OWORD *)(v16 + 48) = *((_OWORD *)v15 + 3);
            *(_OWORD *)(v16 + 64) = *((_OWORD *)v15 + 4);
            *(_OWORD *)(v16 + 80) = *((_OWORD *)v15 + 5);
            *(_OWORD *)(v16 + 96) = *((_OWORD *)v15 + 6);
            v16 += v14;
            v18 = *((_OWORD *)v15 + 7);
            v15 = (_QWORD *)((char *)v15 + v14);
            *(_OWORD *)(v16 - 16) = v18;
            --v17;
          }
          while ( v17 );
          v10 = v12 + 1;
          *(_QWORD *)v16 = *v15;
          *(_DWORD *)(v16 + 8) = *((_DWORD *)v15 + 2);
        }
        *a5 = v8;
        *a6 = v9;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  return v6;
}
