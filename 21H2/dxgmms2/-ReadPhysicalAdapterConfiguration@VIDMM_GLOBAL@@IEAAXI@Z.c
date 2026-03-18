/*
 * XREFs of ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00B27C0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C001CA14 (DpiGetPnpRegistryKeyName.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@G$0IA@@@QEAA@XZ @ 0x1C00B2A18 (--1-$PagedPoolArray@G$0IA@@@QEAA@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(VIDMM_GLOBAL *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v3; // r14
  __int64 v4; // rcx
  unsigned int v5; // esi
  WCHAR *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  PCUNICODE_STRING Source; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR *v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[256]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+168h] [rbp+68h]
  __int64 v22; // [rsp+170h] [rbp+70h] BYREF
  int v23; // [rsp+178h] [rbp+78h]
  const wchar_t *v24; // [rsp+180h] [rbp+80h]
  unsigned int *v25; // [rsp+188h] [rbp+88h]
  int v26; // [rsp+190h] [rbp+90h]
  int *v27; // [rsp+198h] [rbp+98h]
  int v28; // [rsp+1A0h] [rbp+A0h]
  __int64 v29; // [rsp+1A8h] [rbp+A8h]
  int v30; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v31; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v32; // [rsp+1C0h] [rbp+C0h]
  int v33; // [rsp+1C8h] [rbp+C8h]
  int *v34; // [rsp+1D0h] [rbp+D0h]
  int v35; // [rsp+1D8h] [rbp+D8h]
  __int128 v36; // [rsp+1E0h] [rbp+E0h]
  __int128 v37; // [rsp+1F0h] [rbp+F0h]
  __int128 v38; // [rsp+200h] [rbp+100h]
  __int64 v39; // [rsp+210h] [rbp+110h]

  v2 = 0;
  v3 = (unsigned __int64 *)(*((_QWORD *)this + 5028) + 1584LL * a2);
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2680LL) + 344LL * a2 + 8);
  Source = 0LL;
  DpiGetPnpRegistryKeyName(v4);
  v5 = (MEMORY[0] >> 1) + 16;
  v19 = 0LL;
  v21 = 0;
  if ( v5 > 0x80 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 2 )
    {
      v6 = 0LL;
      goto LABEL_7;
    }
    v12 = 2LL * v5;
    if ( !is_mul_ok(v5, 2uLL) )
      v12 = -1LL;
    v6 = (WCHAR *)operator new[](v12, 0x4B677844u, 256LL);
    v19 = v6;
  }
  else
  {
    v6 = (WCHAR *)v20;
    v19 = (WCHAR *)v20;
    if ( MEMORY[0] >> 1 != -16 )
    {
      v7 = 0LL;
      v8 = v5;
      do
      {
        v6[v7++] = 0;
        v6 = v19;
        --v8;
      }
      while ( v8 );
    }
  }
  v21 = v5;
  if ( v6 )
  {
    *(&Destination.MaximumLength + 2) = 0;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * v5);
    Destination.Buffer = v6;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, Source);
    RtlAppendUnicodeToString(&Destination, L"\\MemoryManager");
  }
LABEL_7:
  v15 = 0;
  v9 = 0;
  v13 = 0;
  v16 = 0;
  v14 = 0;
  if ( v6 )
  {
    v22 = 0LL;
    v28 = 4;
    v35 = 4;
    v23 = 288;
    v26 = 67108868;
    v24 = L"MaxLocalSegmentSize";
    v30 = 288;
    v25 = &v13;
    v33 = 67108868;
    v27 = &v15;
    v29 = 0LL;
    v31 = L"MaxNonLocalSegmentSize";
    v32 = &v14;
    v34 = &v16;
    v39 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    RtlQueryRegistryValuesEx(0LL, v6, &v22, 0LL, 0LL);
    v9 = v14;
    v2 = v13;
  }
  v10 = (unsigned __int64)v9 << 20;
  v11 = (unsigned __int64)v2 << 20;
  if ( v11 - 1 <= 0xFFFFFFF )
    v11 = 0x10000000LL;
  *v3 = v11;
  if ( v10 - 1 <= 0x1FFFFFFF )
    v10 = 0x20000000LL;
  v3[1] = v10;
  PagedPoolArray<unsigned short,128>::~PagedPoolArray<unsigned short,128>(&v19);
}
