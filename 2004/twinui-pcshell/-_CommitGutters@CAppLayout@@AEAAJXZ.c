/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x180483C14
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x180481970 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180148A38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180192A84 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1803A2604 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180471908 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x180485670 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::_CommitGutters(
        CAppLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  LONG v3; // esi
  LONG v5; // edi
  unsigned int *v6; // rcx
  int v7; // r14d
  LONG Data1; // r12d
  LONG v9; // ebx
  int v10; // r15d
  _QWORD *v11; // rbx
  const struct _GUID *v12; // r8
  void *v14[2]; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v15; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v16; // [rsp+48h] [rbp-29h] BYREF
  struct _GUID v17; // [rsp+58h] [rbp-19h] BYREF
  LONG v18[4]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v19; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v20[8]; // [rsp+88h] [rbp+17h] BYREF
  LONG v21; // [rsp+90h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 17);
  v5 = *((_DWORD *)this + 18);
  v6 = (unsigned int *)((char *)this + 64);
  *(_DWORD *)&v17.Data2 = v3;
  v7 = 0;
  *(_DWORD *)v17.Data4 = v5;
  v9 = v6[3];
  v17.Data1 = *v6;
  Data1 = v17.Data1;
  *(_DWORD *)&v17.Data4[4] = v9;
  v10 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v6, a2, a3);
  `vector constructor iterator'((char *)&v15, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v15.right = v5;
  v15.left = Data1;
  v16 = (struct tagRECT)v17;
  v15.top = v3;
  v15.bottom = v9;
  if ( *((_QWORD *)this + 14) == 1LL )
  {
    v11 = (_QWORD *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, void **))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      v14);
    v19 = *(_OWORD *)v14;
    if ( Platform::Guid::Equals((Platform::Guid *)&v19, &v17) )
      return (unsigned int)v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)*v11 + 56LL))(*(_QWORD *)*v11, 0LL, &v17);
    if ( v17.Data1 == Data1 )
    {
      v15.left = *(_DWORD *)v17.Data4;
      v15.right = v10 + *(_DWORD *)v17.Data4;
    }
    else
    {
      v15.right = v17.Data1;
      v15.left = v17.Data1 - v10;
    }
    v16 = v15;
  }
  else
  {
    if ( *((_QWORD *)this + 14) != 2LL )
      return (unsigned int)-2147418113;
    v11 = (_QWORD *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v19);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)*v11 + 56LL))(*(_QWORD *)*v11, 1LL, v20);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)(*v11 + 8LL) + 56LL))(
      *(_QWORD *)(*v11 + 8LL),
      0LL,
      &v17);
    (*(void (__fastcall **)(_QWORD, __int64, LONG *))(**(_QWORD **)(*v11 + 8LL) + 56LL))(
      *(_QWORD *)(*v11 + 8LL),
      1LL,
      v18);
    v15.right = v18[0];
    v15.left = v21;
    v16.left = v21 + ((unsigned int)(v18[0] - v21 - v10) >> 1);
    v16.right = v10 + v16.left;
  }
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  v7 = CAppLayoutItem::s_CreateInstance_Gutter(&v15, &v16, v12, v14);
  if ( v7 >= 0 )
  {
    *(void **)&v17.Data1 = v14[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v11,
           &v17,
           1uLL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return (unsigned int)v7;
}
