/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C6330
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C662C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C683C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CCommonRenderingEffect::GetNextRunningEffect(_BYTE *a1, _QWORD *a2, _BYTE *a3, _BYTE *a4)
{
  int v4; // ebx
  _BYTE *v8; // rdi
  struct CCommonRenderingEffect **v9; // r10
  _QWORD *v10; // r12
  _BYTE *v11; // r15
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  _BYTE *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r11
  int v19; // eax
  struct CCommonRenderingEffect *v20; // rcx
  bool v21; // sf
  _BYTE *v23; // rbx
  struct CObjectCache *ObjectCache; // rax
  int v25; // edx
  __int64 v26; // rdx
  void *retaddr; // [rsp+68h] [rbp+0h]
  struct CCommonRenderingEffect *v28; // [rsp+70h] [rbp+8h] BYREF
  __int16 v29; // [rsp+80h] [rbp+18h] BYREF
  char v30; // [rsp+82h] [rbp+1Ah]

  *a4 = 0;
  v4 = 65537;
  if ( !a1[70] )
    v4 = 1;
  v8 = a1;
  if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 72LL))(a3) == v4 )
  {
    if ( a3 != v8 )
    {
      v9 = &v28;
      v10 = 0LL;
      v28 = 0LL;
      v11 = (_BYTE *)(a3 - v8);
      v12 = a3 + 65;
      v13 = v8 + 32;
      v14 = v8 - a3;
      v15 = 0LL;
      do
      {
        v16 = &v13[(_QWORD)v11];
        if ( *((_QWORD *)v13 - 1) )
        {
          v17 = *((_QWORD *)v16 - 1);
          if ( v17 )
          {
            v18 = *((_QWORD *)v13 - 2);
            if ( v18 )
            {
              if ( v18 != *(_QWORD *)&v13[(_QWORD)v11 - 16] )
                goto LABEL_25;
            }
            else if ( *(_QWORD *)&v16[v14 - 8] != v17 )
            {
              goto LABEL_25;
            }
            if ( *v13 != v13[(_QWORD)v11] || v12[v14 - 1] != *(v12 - 1) || v12[v14] != *v12 || v12[v14 + 1] != v12[1] )
              goto LABEL_25;
          }
          else
          {
            *(_DWORD *)v9 = -1;
          }
        }
        else if ( *((_QWORD *)v16 - 1) )
        {
          *(_DWORD *)v9 = 1;
        }
        v15 = (unsigned int)(v15 + 1);
        v13 += 24;
        v12 += 3;
        v9 = (struct CCommonRenderingEffect **)((char *)v9 + 4);
      }
      while ( (unsigned int)v15 < 2 );
      if ( v8[70] )
      {
        v19 = (int)v28;
        v20 = (struct CCommonRenderingEffect *)HIDWORD(v28);
        v21 = (int)v28 < 0;
        if ( (int)v28 <= 0 )
        {
          if ( SHIDWORD(v28) <= 0 )
          {
            *a4 = 1;
            *a2 = v8;
            (**(void (__fastcall ***)(_BYTE *, _BYTE *))v8)(v8, v12);
            return a2;
          }
          v21 = (int)v28 < 0;
        }
        if ( !v21 && SHIDWORD(v28) >= 0 )
        {
          *a4 = 1;
LABEL_25:
          *a2 = a3;
          (**(void (__fastcall ***)(_BYTE *, _BYTE *, __int64))a3)(a3, v12, v15);
          return a2;
        }
        if ( CCommonRegistryData::EnableCommonSuperSets )
        {
          *a4 = 1;
          v23 = v8;
          if ( v19 >= 0 )
            v23 = a3;
          if ( (int)v20 >= 0 )
            v8 = a3;
          ObjectCache = CThreadContext::GetObjectCache(v20);
          v25 = *((_DWORD *)ObjectCache + 1);
          if ( v25 )
          {
            v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
            *((_QWORD *)ObjectCache + 1) = *v10;
            *((_DWORD *)ObjectCache + 1) = v25 - 1;
          }
          if ( !v10 )
          {
            v10 = DefaultHeap::Alloc(0x48uLL);
            if ( !v10 )
              ModuleFailFastForHRESULT(2147942414LL, retaddr);
          }
          LOWORD(v28) = *(_WORD *)(v8 + 67);
          BYTE2(v28) = v8[69];
          v29 = *((_WORD *)v23 + 32);
          v30 = v23[66];
          v26 = CCommonRenderingEffect::CCommonRenderingEffect(v10, v23 + 16, &v29, v8 + 40, &v28);
          goto LABEL_41;
        }
      }
      else if ( !v28 )
      {
        *a4 = 1;
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v8,
          v15);
        return a2;
      }
      v26 = (__int64)a3;
LABEL_41:
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        v26,
        v15);
      return a2;
    }
    *a4 = 1;
    *a2 = v8;
    (**(void (__fastcall ***)(_BYTE *))v8)(v8);
    return a2;
  }
  else
  {
    *a2 = a3;
    (**(void (__fastcall ***)(_BYTE *))a3)(a3);
    return a2;
  }
}
