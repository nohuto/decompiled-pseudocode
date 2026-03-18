/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C02D26F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00630FC (DxgkMiracastGetNextChunkInfo.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  _DWORD *v10; // r13
  struct D3DKMT_MIRACAST_CHUNK_DATA *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  int NextChunkInfo; // ebx
  unsigned int *v15; // rax
  unsigned __int64 v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // rsi
  void *v19; // rcx
  NTSTATUS v20; // eax
  _DWORD *v21; // rsi
  char *v22; // rdx
  __int64 i; // rsi
  PVOID v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-1B8h] BYREF
  NTSTATUS v27; // [rsp+34h] [rbp-1B4h]
  ULONG64 v28; // [rsp+38h] [rbp-1B0h] BYREF
  int v29; // [rsp+40h] [rbp-1A8h]
  unsigned int v30; // [rsp+44h] [rbp-1A4h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v31; // [rsp+48h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-198h] BYREF
  __int64 v33; // [rsp+58h] [rbp-190h]
  __int64 v34; // [rsp+60h] [rbp-188h]
  __int64 v35[3]; // [rsp+68h] [rbp-180h] BYREF
  PVOID v36[36]; // [rsp+80h] [rbp-168h] BYREF

  v30 = a2;
  v10 = (_DWORD *)a5;
  v28 = a5;
  v35[1] = (__int64)a6;
  v33 = a7;
  v35[2] = a7;
  v26 = 0;
  v11 = 0LL;
  v31 = 0LL;
  memset(v36, 0, sizeof(v36));
  if ( a3 <= 4 )
  {
    LODWORD(v36[35]) = a3;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v35[0] = *a1;
    v15 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    v26 = *v15;
    v17 = (unsigned int)v36[35];
    if ( LODWORD(v36[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v36[35]) > MmUserProbeAddress || a4 + LODWORD(v36[35]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v17 = (unsigned int)v36[35];
      }
    }
    v18 = 0LL;
    v29 = 0;
    while ( (unsigned int)v18 < v17 )
    {
      v34 = (unsigned int)v18;
      v19 = *(void **)(a4 + 8 * v18);
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(v19, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v36[v18 + 1] = Object;
      NextChunkInfo = v20;
      v27 = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v34), v20);
        v21 = (_DWORD *)v33;
        goto LABEL_21;
      }
      v18 = (unsigned int)(v18 + 1);
      v29 = v18;
      v17 = (unsigned int)v36[35];
    }
    v11 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v16, 0x4B677844u, 64LL, v12);
    v31 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry1(3LL, 8253LL);
      NextChunkInfo = -1073741801;
      goto LABEL_32;
    }
    LODWORD(v28) = 0;
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(v35, v30, (__int64)v36, &v26, v11, (unsigned int *)&v28);
    v27 = NextChunkInfo;
    LODWORD(v16) = v26;
    v21 = (_DWORD *)v33;
LABEL_21:
    if ( NextChunkInfo >= 0 )
    {
      if ( (_DWORD)v16 )
      {
        v22 = &a6[(unsigned int)v16];
        if ( (unsigned __int64)v22 > MmUserProbeAddress || v22 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v11, (unsigned int)v16);
      }
      if ( (unsigned __int64)v21 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v28;
      if ( a5 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = v16;
    }
  }
  else
  {
    v13 = a3;
    NextChunkInfo = -1073741811;
    WdLogSingleEntry3(3LL, v13, 4LL, -1073741811LL);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v36[35]); i = (unsigned int)(i + 1) )
  {
    v24 = v36[i + 1];
    if ( v24 )
      ObfDereferenceObject(v24);
  }
  if ( v11 )
    operator delete[](v11);
  return (unsigned int)NextChunkInfo;
}
