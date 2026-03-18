/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00230E4
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000AA60 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0008C04 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0020EF0 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CTokenManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  CLegacyTokenBuffer **v5; // rsi
  int v6; // ebx
  CLegacyTokenBuffer *v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rbp
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  CLegacyTokenBuffer *v12; // r8
  unsigned int v13; // edx
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  int v18; // [rsp+50h] [rbp+8h] BYREF
  LONG PreviousState; // [rsp+58h] [rbp+10h] BYREF

  ExAcquirePushLockExclusiveEx((char *)this + 96, 0LL);
  v5 = (CLegacyTokenBuffer **)((char *)this + 192);
  v6 = 0;
  *((_QWORD *)this + 13) = KeGetCurrentThread();
  if ( *((_QWORD *)this + 24) )
  {
LABEL_2:
    if ( v6 < 0 )
      goto LABEL_10;
    goto LABEL_3;
  }
  v15 = (__int64 *)((char *)this + 168);
  v16 = (__int64 *)*((_QWORD *)this + 21);
  if ( v16 == (__int64 *)((char *)this + 168) )
  {
    v6 = CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 24);
    goto LABEL_2;
  }
  if ( (__int64 *)v16[1] != v15 || (v2 = *v16, *(__int64 **)(*v16 + 8) != v16) )
    __fastfail(3u);
  *v15 = v2;
  *(_QWORD *)(v2 + 8) = v15;
  --*((_DWORD *)this + 46);
  *v5 = (CLegacyTokenBuffer *)v16;
LABEL_3:
  v7 = *v5;
  v6 = 0;
  v8 = *((_DWORD *)*v5 + 526);
  if ( v8 < 0x280 )
  {
    v17 = CLegacyTokenBuffer::Grow(*v5, v2, v3, v4);
    v8 = *((_DWORD *)v7 + 526);
    v6 = v17;
  }
  v9 = *((_QWORD *)v7 + 262);
  if ( v6 >= 0 )
  {
    v18 = 0;
    Global = DXGGLOBAL_GetGlobal();
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*((_QWORD *)Global + 38073) + 392LL))(v8, &v18, v9);
    v12 = *v5;
    v6 = v11;
    v13 = 40 * v18;
    *(_DWORD *)(*((_QWORD *)*v5 + 261) + 16LL) += v18;
    *(_DWORD *)(*((_QWORD *)v12 + 261) + 2068LL) += v13;
    *((_DWORD *)v12 + 526) -= v13;
    *((_QWORD *)v12 + 262) += v13;
    if ( v11 == -1073741789 )
    {
      v6 = 0;
    }
    else if ( v11 < 0 )
    {
      goto LABEL_10;
    }
    if ( v18 )
    {
      PreviousState = 0;
      ZwSetEvent(*((HANDLE *)this + 8), &PreviousState);
    }
  }
LABEL_10:
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  return (unsigned int)v6;
}
