/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800ACA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003FED8 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800ACCD0 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C1454 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CCommonRenderingEffect::GetNextRunningEffect(_BYTE *a1, _QWORD *a2, _BYTE *a3, _BYTE *a4)
{
  _BYTE *v4; // rdi
  int v5; // ebx
  _QWORD *v9; // rbp
  struct CCommonRenderingEffect **v10; // r9
  _BYTE *v11; // r11
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r10
  int v18; // eax
  struct CCommonRenderingEffect *v19; // rcx
  bool v20; // sf
  _BYTE *v22; // rbx
  struct CObjectCache *ObjectCache; // rax
  int v24; // edx
  __int64 v25; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct CCommonRenderingEffect *v27; // [rsp+60h] [rbp+8h] BYREF
  __int16 v28; // [rsp+70h] [rbp+18h] BYREF
  char v29; // [rsp+72h] [rbp+1Ah]

  *a4 = 0;
  v4 = a1;
  v5 = 65537;
  if ( !a1[118] )
    v5 = 1;
  if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 72LL))(a3) != v5 )
    goto LABEL_32;
  if ( a3 == v4 )
    goto LABEL_35;
  v9 = 0LL;
  v10 = &v27;
  v27 = 0LL;
  v11 = (_BYTE *)(a3 - v4);
  v12 = a3 + 113;
  v13 = v4 + 56;
  v14 = v4 - a3;
  v15 = 0LL;
  do
  {
    v16 = *((_QWORD *)v13 - 5);
    if ( v16 || *((_QWORD *)v13 - 4) )
    {
      v17 = *(_QWORD *)&v13[(_QWORD)v11 - 40];
      if ( v17 || *(_QWORD *)&v13[(_QWORD)v11 - 32] )
      {
        if ( v16 )
        {
          if ( v16 != v17 )
            goto LABEL_27;
        }
        else if ( *((_QWORD *)v13 - 4) != *(_QWORD *)&v13[(_QWORD)v11 - 32] )
        {
          goto LABEL_27;
        }
        if ( *v13 != v13[(_QWORD)v11] || v12[v14 - 1] != *(v12 - 1) || v12[v14] != *v12 || v12[v14 + 1] != v12[1] )
        {
LABEL_27:
          *a2 = a3;
          (**(void (__fastcall ***)(_BYTE *, _BYTE *, __int64, struct CCommonRenderingEffect **))a3)(a3, v12, v15, v10);
          return a2;
        }
      }
      else
      {
        *(_DWORD *)v10 = -1;
      }
    }
    else if ( *(_QWORD *)&v13[(_QWORD)v11 - 40] || *(_QWORD *)&v13[(_QWORD)v11 - 32] )
    {
      *(_DWORD *)v10 = 1;
    }
    v15 = (unsigned int)(v15 + 1);
    v13 += 48;
    v12 += 3;
    v10 = (struct CCommonRenderingEffect **)((char *)v10 + 4);
  }
  while ( (unsigned int)v15 < 2 );
  if ( !v4[118] )
  {
    if ( v27 )
      goto LABEL_32;
LABEL_35:
    *a4 = 1;
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v4);
    return a2;
  }
  v18 = (int)v27;
  v19 = (struct CCommonRenderingEffect *)HIDWORD(v27);
  v20 = (int)v27 < 0;
  if ( (int)v27 <= 0 )
  {
    if ( SHIDWORD(v27) <= 0 )
    {
      *a4 = 1;
      *a2 = v4;
      (**(void (__fastcall ***)(_BYTE *, _BYTE *, __int64, struct CCommonRenderingEffect **))v4)(v4, v12, v15, v10);
      return a2;
    }
    v20 = (int)v27 < 0;
  }
  if ( !v20 && SHIDWORD(v27) >= 0 )
  {
    *a4 = 1;
LABEL_32:
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      a3);
    return a2;
  }
  if ( !CCommonRegistryData::EnableCommonSuperSets )
    goto LABEL_32;
  *a4 = 1;
  v22 = v4;
  if ( v18 >= 0 )
    v22 = a3;
  if ( (int)v19 >= 0 )
    v4 = a3;
  ObjectCache = CThreadContext::GetObjectCache(v19);
  v24 = *((_DWORD *)ObjectCache + 1);
  if ( v24 )
  {
    v9 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v9;
    *((_DWORD *)ObjectCache + 1) = v24 - 1;
  }
  if ( !v9 )
  {
    v9 = DefaultHeap::Alloc(0x78uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  LOWORD(v27) = *(_WORD *)(v4 + 115);
  BYTE2(v27) = v4[117];
  v28 = *((_WORD *)v22 + 56);
  v29 = v22[114];
  v25 = CCommonRenderingEffect::CCommonRenderingEffect(
          (__int64)v9,
          (CDrawListBitmap *)(v22 + 16),
          (__int64)&v28,
          (CDrawListBitmap *)(v4 + 64),
          (__int64)&v27);
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    a2,
    v25);
  return a2;
}
