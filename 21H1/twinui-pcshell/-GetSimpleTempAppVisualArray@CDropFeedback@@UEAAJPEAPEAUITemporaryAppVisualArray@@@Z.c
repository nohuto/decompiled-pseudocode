/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803FF410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180406778 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x180409154 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 */

__int64 __fastcall CDropFeedback::GetSimpleTempAppVisualArray(
        CDropFeedback *this,
        struct ITemporaryAppVisualArray **a2)
{
  const struct _GUID *v4; // rcx
  int Instance; // edi
  unsigned int v6; // esi
  __int64 v7; // rbx
  struct ITemporaryAppVisual *v9[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+38h] BYREF
  struct ITemporaryAppVisualArray *v11; // [rsp+80h] [rbp+40h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Instance = CTempAppVisualArray::CreateInstance(v4, (void **)&v11);
  if ( Instance >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), &v10);
    v6 = 0;
    if ( v10 )
    {
      while ( Instance >= 0 )
      {
        v12 = 0LL;
        v7 = *((_QWORD *)this + 10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL))(
               v7,
               v6,
               &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
               &v12) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) != 1
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) != 2 )
        {
          v9[0] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
          if ( (**(int (__fastcall ***)(__int64, GUID *, struct ITemporaryAppVisual **))v12)(
                 v12,
                 &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
                 v9) >= 0 )
            Instance = CSimpleTempAppVisual_CreateAndAddToArray(v9[0], v11);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( ++v6 >= v10 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( Instance >= 0 )
      {
        Instance = CSimpleTempAppVisual_CreateAndAddToArray(
                     (struct ITemporaryAppVisual *)(((unsigned __int64)this - 16) & -(__int64)(this != (CDropFeedback *)48)),
                     v11);
        if ( Instance >= 0 )
        {
          (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
          if ( v10 )
          {
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
            Instance = 0;
            *a2 = v11;
          }
          else
          {
            Instance = -2147023728;
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)Instance;
}
