/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@QEAAPEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@1@QEAPEAV21@AEBQEAV21@@Z @ 0x180037A18
 * Callers:
 *     ?AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x18003B090 (-AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z.c)
 *     ?AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x18003B0D0 (-AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Emplace_reallocate<std::function<void (DeviceInfo *)> * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  size_t size_of; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // r15
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6];
  *v14 = *a3;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v17 = v14 + 1;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[v8];
  *(_QWORD *)(a1 + 16) = &v13[v11];
  return v14;
}
