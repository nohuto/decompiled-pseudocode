/*
 * XREFs of ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800AFBC0
 * Callers:
 *     ?AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z @ 0x180060CB0 (-AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z.c)
 *     ?AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1800AF9D0 (-AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800AF41C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800B01D8 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::AddDeviceResource(CDrawListCache *this, struct IDeviceResource *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // r8
  char *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  struct IDeviceResource *v9; // r14
  struct IDeviceResource **v10; // rdx
  __int64 v11; // rcx
  struct IDeviceResource **v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 56);
  v5 = *((_QWORD *)this + 7) & 3LL;
  if ( (*((_QWORD *)this + 7) & 3) == 0 )
  {
LABEL_37:
    v6 = (char *)this + 56;
    goto LABEL_5;
  }
  if ( (*((_DWORD *)this + 14) & 3) != 1 )
  {
    if ( (*((_DWORD *)this + 14) & 3) == 2 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
    if ( (*((_DWORD *)this + 14) & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_37;
  }
  v6 = (char *)(*((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_5:
  v7 = 1LL;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v8 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first((_QWORD *)this + 7) - 16);
    }
    else
    {
      if ( (unsigned int)(v5 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v8 = 0LL;
    }
  }
  else
  {
    v8 = 1LL;
  }
  v9 = (struct IDeviceResource *)*v2;
  v10 = (struct IDeviceResource **)&v6[8 * v8];
  v11 = *v2 & 3LL;
  if ( (*v2 & 3) == 0 )
    goto LABEL_39;
  if ( (*(_DWORD *)v2 & 3) == 1 )
  {
    v12 = (struct IDeviceResource **)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)v2 & 3) != 2 )
  {
    if ( (*(_DWORD *)v2 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_39:
    v12 = (struct IDeviceResource **)v2;
    goto LABEL_13;
  }
  v12 = 0LL;
LABEL_13:
  while ( v12 != v10 && *v12 != a2 )
    ++v12;
  if ( !(_DWORD)v11 )
  {
LABEL_42:
    v13 = (unsigned __int64)v2;
    goto LABEL_18;
  }
  if ( (_DWORD)v11 != 1 )
  {
    if ( (_DWORD)v11 == 2 )
    {
      v13 = 0LL;
      goto LABEL_18;
    }
    goto LABEL_42;
  }
  v13 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_18:
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      v14 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(v2) - 16);
    }
    else
    {
      if ( (unsigned int)(v11 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 1LL;
  }
  if ( v12 == (struct IDeviceResource **)(v13 + 8 * v14) )
  {
    v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 8LL))(v15);
    (*(void (__fastcall **)(struct IDeviceResource *, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    v16 = *v2 & 3LL;
    if ( (*v2 & 3) != 0 )
    {
      if ( (*(_DWORD *)v2 & 3) == 1 )
      {
        v17 = *v2 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)v2 & 3) == 2 )
      {
        v17 = 0LL;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)v2 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v17 = (unsigned __int64)v2;
LABEL_27:
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v7 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(v2) - 16);
      }
      else
      {
        if ( (unsigned int)(v16 - 2) > 1 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        v7 = 0LL;
      }
    }
    if ( (*v2 & 3) != 0 )
    {
      if ( (*(_DWORD *)v2 & 3) == 1 )
      {
        v18 = *v2 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_35;
      }
      if ( (*(_DWORD *)v2 & 3) == 2 )
      {
        v18 = 0LL;
        goto LABEL_35;
      }
      if ( (*(_DWORD *)v2 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v18 = (unsigned __int64)v2;
LABEL_35:
    *(_QWORD *)detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
                 v2,
                 (__int64)(v17 + 8 * v7 - v18) >> 3) = a2;
    if ( (*(_DWORD *)v2 & 3u) > 1 && (*(_DWORD *)v2 & 3u) - 2 >= 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
}
