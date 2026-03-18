/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C0224500
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00546C8 (DxgkMiracastGetNextChunkInfo.c)
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
  __int64 v8; // rdi
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned int *v15; // rax
  SIZE_T v16; // r15
  unsigned int v17; // ecx
  __int64 v18; // r14
  void *v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _DWORD *v24; // r14
  _DWORD *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rdx
  __int64 i; // r14
  PVOID v32; // rcx
  unsigned int v34; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS v35; // [rsp+34h] [rbp-1C4h]
  unsigned int v36; // [rsp+38h] [rbp-1C0h] BYREF
  int v37; // [rsp+40h] [rbp-1B8h]
  unsigned int v38; // [rsp+44h] [rbp-1B4h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v39; // [rsp+48h] [rbp-1B0h]
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-1A0h] BYREF
  ULONG64 v42; // [rsp+60h] [rbp-198h]
  __int64 v43; // [rsp+68h] [rbp-190h]
  __int64 v44; // [rsp+70h] [rbp-188h]
  ULONG64 v45; // [rsp+78h] [rbp-180h]
  char *v46; // [rsp+80h] [rbp-178h]
  __int64 v47; // [rsp+88h] [rbp-170h]
  PVOID v48[36]; // [rsp+90h] [rbp-168h] BYREF

  v8 = a3;
  v38 = a2;
  v42 = a5;
  v45 = a5;
  v46 = a6;
  v43 = a7;
  v47 = a7;
  v41 = 0LL;
  v34 = 0;
  v10 = 0LL;
  v39 = 0LL;
  memset(v48, 0, sizeof(v48));
  if ( (unsigned int)v8 <= 4 )
  {
    LODWORD(v48[35]) = v8;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v41 = *a1;
    v15 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    v34 = *v15;
    v17 = (unsigned int)v48[35];
    if ( LODWORD(v48[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v48[35]) > MmUserProbeAddress || a4 + LODWORD(v48[35]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v17 = (unsigned int)v48[35];
      }
    }
    v18 = 0LL;
    v37 = 0;
    while ( (unsigned int)v18 < v17 )
    {
      v44 = (unsigned int)v18;
      v19 = *(void **)(a4 + 8 * v18);
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(v19, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v48[v18 + 1] = Object;
      v8 = v20;
      v35 = v20;
      if ( v20 < 0 )
      {
        v23 = WdLogNewEntry5_WdWarning(v20, v21, v22);
        *(_QWORD *)(v23 + 24) = *(_QWORD *)(a4 + 8 * v44);
        *(_QWORD *)(v23 + 32) = v8;
        WdLogEvent5_WdWarning(v23);
        v24 = (_DWORD *)v42;
        v25 = (_DWORD *)v43;
        goto LABEL_21;
      }
      v18 = (unsigned int)(v18 + 1);
      v37 = v18;
      v17 = (unsigned int)v48[35];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    v39 = v10;
    if ( !v10 )
    {
      v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v29 + 24) = 8142LL;
      WdLogEvent5_WdWarning(v29);
      LODWORD(v8) = -1073741801;
      goto LABEL_32;
    }
    v36 = 0;
    LODWORD(v8) = DxgkMiracastGetNextChunkInfo(&v41, v38, (__int64)v48, &v34, v10, &v36);
    v35 = v8;
    LODWORD(v16) = v34;
    v24 = (_DWORD *)v42;
    v25 = (_DWORD *)v43;
LABEL_21:
    if ( (int)v8 >= 0 )
    {
      if ( (_DWORD)v16 )
      {
        v30 = &a6[(unsigned int)v16];
        if ( (unsigned __int64)v30 > MmUserProbeAddress || v30 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, (unsigned int)v16);
      }
      if ( (unsigned __int64)v25 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v36;
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v24 = (_DWORD *)MmUserProbeAddress;
      *v24 = v16;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v14[3] = v8;
    v14[4] = 4LL;
    LODWORD(v8) = -1073741811;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v48[35]); i = (unsigned int)(i + 1) )
  {
    v32 = v48[i + 1];
    if ( v32 )
      ObfDereferenceObject(v32);
  }
  if ( v10 )
    operator delete[](v10);
  return (unsigned int)v8;
}
