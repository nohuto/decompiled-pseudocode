/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C001AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C001BC68 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v7; // edi
  void *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  _QWORD *v12; // rdx
  struct DXGGLOBAL *v13; // rax
  __int64 Size; // [rsp+68h] [rbp-90h]
  _DWORD v16[2]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-58h]
  __int64 v18; // [rsp+A8h] [rbp-50h]
  int v19; // [rsp+B0h] [rbp-48h]
  int v20; // [rsp+B4h] [rbp-44h]
  __int64 v21; // [rsp+B8h] [rbp-40h]
  __int64 v22; // [rsp+C0h] [rbp-38h]
  __int64 v23; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+108h] [rbp+10h]
  int v25; // [rsp+110h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v7 = 0;
  v8 = 0LL;
  v23 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !v24 || !v25 || !a4 )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    Size = 24LL * v24;
    if ( is_mul_ok(v24, 0x18uLL) )
    {
      v7 = 0;
    }
    else
    {
      Size = -1LL;
      v7 = -1073741675;
    }
    if ( v7 >= 0 )
    {
      v10 = 24LL * v24;
      if ( !is_mul_ok(v24, 0x18uLL) )
        v10 = -1LL;
      v8 = (void *)operator new[](v10, 0x62634D54u, 256LL, v9);
      if ( !v8 )
        v7 = -1073741801;
      if ( v7 >= 0 )
      {
        if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, Src, Size);
        Global = DXGGLOBAL_GetGlobal();
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)Global + 38073) + 424LL))(0x80000000LL, &v23);
        if ( v7 >= 0 )
        {
          v16[1] = 0;
          v20 = 0;
          v16[0] = 48;
          v17 = 0LL;
          v19 = 0;
          v18 = 0LL;
          v21 = v23;
          v22 = 0LL;
          v7 = DxgkCompositionObject::Create(0LL, v16, 3LL);
          if ( v7 >= 0 )
          {
            v12 = (_QWORD *)a5;
            if ( a5 )
            {
              if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *v12 = -1LL;
            }
            else
            {
              v7 = -1073741811;
            }
          }
        }
      }
    }
  }
  if ( v23 )
  {
    v13 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v13 + 38073) + 544LL))(v23);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
