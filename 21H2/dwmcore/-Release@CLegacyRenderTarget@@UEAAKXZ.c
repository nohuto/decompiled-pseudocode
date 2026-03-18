/*
 * XREFs of ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800D6760
 * Callers:
 *     ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EINI@EAAKXZ @ 0x1801067B0 (-Release@CLegacyRenderTarget@@$4PPPPPPPM@EINI@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EIOI@EAAKXZ @ 0x1801067D0 (-Release@CLegacyRenderTarget@@$4PPPPPPPM@EIOI@EAAKXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?SetReleasingResources@CThreadContext@@SAX_N@Z @ 0x1800B17D8 (-SetReleasingResources@CThreadContext@@SAX_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::Release(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rbx
  volatile signed __int32 *v2; // rsi
  unsigned __int32 v3; // edi
  struct CThreadContext *v5; // rcx
  __int64 v6; // rax
  struct CThreadContext *v7; // rax
  __int64 v8; // rcx
  struct CThreadContext *v9; // [rsp+30h] [rbp+8h] BYREF
  struct CThreadContext *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CLegacyRenderTarget *)((char *)this + 8));
    (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v1 + 32LL))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      if ( (int)CThreadContext::GetCurrent(&v9) >= 0 && *(_BYTE *)v9 )
      {
        if ( (int)CThreadContext::GetCurrent(&v10) >= 0 )
        {
          v7 = v10;
          v8 = *((_QWORD *)v10 + 2);
          if ( v8 )
          {
            *(_QWORD *)(v8 + 56) = v1;
            *((_QWORD *)v7 + 2) = v1;
          }
          else
          {
            *((_QWORD *)v10 + 2) = v1;
            *((_QWORD *)v7 + 1) = v1;
          }
        }
      }
      else
      {
        CThreadContext::SetReleasingResources(1);
        do
        {
          --*((_DWORD *)v1 + 2);
          (*(void (__fastcall **)(CLegacyRenderTarget *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
          v1 = 0LL;
          if ( (int)CThreadContext::GetCurrent(&v10) >= 0 )
          {
            v5 = v10;
            v1 = (CLegacyRenderTarget *)*((_QWORD *)v10 + 1);
            if ( !v1 )
              break;
            v6 = *((_QWORD *)v1 + 7);
            *((_QWORD *)v10 + 1) = v6;
            if ( !v6 )
              *((_QWORD *)v5 + 2) = 0LL;
          }
        }
        while ( v1 );
        CThreadContext::SetReleasingResources(0);
      }
    }
  }
  return v3;
}
