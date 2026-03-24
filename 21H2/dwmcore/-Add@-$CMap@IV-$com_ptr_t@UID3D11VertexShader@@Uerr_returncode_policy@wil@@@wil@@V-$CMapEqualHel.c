/*
 * XREFs of ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800460A0
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180045B6C (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18004624C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // r8
  char *v12; // rdx
  __int64 v13; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(char **)(a1 + 8);
  }
  v12 = &v9[8 * v10];
  if ( v12 )
  {
    v13 = *a3;
    *(_QWORD *)v12 = *a3;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
