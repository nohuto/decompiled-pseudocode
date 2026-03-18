/*
 * XREFs of ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x1802B21B0
 * Callers:
 *     ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1802B29C0 (-SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::EnsureVertexBuffer(
        CMesh2DEffect *this,
        const struct CD3DVertexXYZDUV2 *a2,
        unsigned int a3)
{
  _QWORD *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-60h]
  _DWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  const struct CD3DVertexXYZDUV2 *v17; // [rsp+48h] [rbp-38h]
  int v18; // [rsp+50h] [rbp-30h]
  void *v19; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+60h] [rbp-20h]
  char **v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]
  void *v24; // [rsp+B0h] [rbp+30h] BYREF
  int v25; // [rsp+C8h] [rbp+48h]
  unsigned int v26; // [rsp+CCh] [rbp+4Ch]

  v25 = 0;
  v3 = (_QWORD *)((char *)this + 176);
  v5 = a3;
  v6 = *((_QWORD *)this + 22);
  v26 = a3;
  if ( !v6 )
  {
LABEL_9:
    *((_DWORD *)this + 46) = 0;
    v19 = &unk_1803B1AC0;
    v10 = 0xFFFFFFFFLL;
    v20 = 2304;
    v21 = &off_1802CB800;
    v22 = 4;
    v23 = 32;
    if ( (unsigned __int64)(32 * v5) > 0xFFFFFFFF )
    {
      v11 = -2147024362;
      v12 = -2147024362;
      v15 = 562;
      goto LABEL_15;
    }
    v17 = a2;
    v16[0] = 1;
    v16[1] = 1;
    v13 = *((_QWORD *)this + 17);
    v18 = 32 * v5;
    v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void **, _QWORD *))(*(_QWORD *)v13 + 136LL))(
           v13,
           v16,
           0LL,
           &v19,
           v3);
    v11 = v9;
    if ( v9 < 0 )
    {
      v15 = 578;
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  v8 = *((_DWORD *)this + 46);
  if ( v8 < (unsigned int)v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *v3 = 0LL;
    goto LABEL_9;
  }
  v24 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &v24, 32 * v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    v15 = 587;
    goto LABEL_6;
  }
  memcpy_0(v24, a2, 32LL * (unsigned int)v5);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
  v11 = v9;
  if ( v9 < 0 )
  {
    v15 = 595;
LABEL_6:
    v12 = v9;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v12, v15);
    return v11;
  }
LABEL_11:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(
         *((_QWORD *)this + 16),
         *v3,
         4LL);
  v11 = v9;
  if ( v9 < 0 )
  {
    v15 = 604;
    goto LABEL_6;
  }
  return v11;
}
