/*
 * XREFs of ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x180429D90
 * Callers:
 *     ?AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z @ 0x180429F50 (-AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1801552D4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18042A320 (-GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CTempAppVisualArray::AddItem(CTempAppVisualArray *this, struct ITemporaryAppVisual *a2)
{
  int v4; // ebx
  int v5; // eax
  void *v6; // r8
  __int64 v7; // rdx
  __int64 *v8; // rdx
  void *v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rdx
  struct ITemporaryAppVisual *v13; // [rsp+48h] [rbp+28h] BYREF
  struct IUnknown *v14; // [rsp+50h] [rbp+30h] BYREF
  void *v15; // [rsp+58h] [rbp+38h] BYREF

  v4 = -2147024809;
  v5 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( v5 <= 0 )
    return (unsigned int)v4;
  if ( v5 <= 2 )
    goto LABEL_9;
  if ( v5 != 3 )
  {
    switch ( v5 )
    {
      case 4:
        goto LABEL_9;
      case 5:
        goto LABEL_20;
      case 6:
LABEL_9:
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        v4 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 48LL))(
               a2,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v14);
        if ( v4 >= 0 )
        {
          v15 = 0LL;
          v4 = -2147024809;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
          if ( (int)CTempAppVisualArray::GetItemForObject(this, v14, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v15) < 0 )
          {
            v13 = a2;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
            v7 = *((_QWORD *)this + 3);
            v4 = 0;
            if ( v7 != *((_QWORD *)this + 5)
              || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                         (__int64)this + 16,
                         v7 + 1,
                         v6),
                  v4 >= 0) )
            {
              v8 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
              if ( v8 )
              {
                *v8 = 0LL;
                if ( v8 != (__int64 *)&v13 )
                {
                  v13 = 0LL;
                  *v8 = (__int64)a2;
                }
              }
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        return (unsigned int)v4;
    }
    if ( v5 != 7 )
    {
      if ( v5 != 8 )
        return (unsigned int)v4;
      goto LABEL_9;
    }
  }
LABEL_20:
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v11 = *((_QWORD *)this + 3);
  v4 = 0;
  if ( v11 != *((_QWORD *)this + 5)
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 16,
               v11 + 1,
               v10),
        v4 >= 0) )
  {
    v12 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
    if ( v12 )
    {
      *v12 = 0LL;
      if ( v12 != (__int64 *)&v13 )
      {
        v13 = 0LL;
        *v12 = (__int64)a2;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v4;
}
