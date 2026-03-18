/*
 * XREFs of IoMmuInitializePageManager @ 0x1C0197CCC
 * Callers:
 *     DpiInitializeIoMmuContext @ 0x1C0181D9C (DpiInitializeIoMmuContext.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

void __fastcall IoMmuInitializePageManager(__int64 a1)
{
  int v2; // edi
  PMDL Mdl; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  PVOID PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rax
  PVOID *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  const wchar_t *v26; // [rsp+58h] [rbp-B0h]
  unsigned int *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  unsigned int *v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+88h] [rbp-80h]
  const wchar_t *v33; // [rsp+90h] [rbp-78h]
  __int64 *v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  __int64 *v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+C0h] [rbp-48h]
  const wchar_t *v40; // [rsp+C8h] [rbp-40h]
  unsigned int *v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D8h] [rbp-30h]
  unsigned int *v43; // [rsp+E0h] [rbp-28h]
  int v44; // [rsp+E8h] [rbp-20h]
  __int128 v45; // [rsp+F0h] [rbp-18h]
  __int128 v46; // [rsp+100h] [rbp-8h]
  __int128 v47; // [rsp+110h] [rbp+8h]
  __int64 v48; // [rsp+120h] [rbp+18h]

  v21 = 18;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v22 = 4;
  LODWORD(v25) = 288;
  v26 = L"MaxHistoryCountLog2";
  LODWORD(v28) = 67108868;
  v27 = &v21;
  v29 = &v21;
  v33 = L"EnableHistoryTracking";
  v34 = &v23;
  v36 = &v23;
  v40 = L"HistoryEntryStackSize";
  v41 = &v22;
  v43 = &v22;
  LODWORD(v30) = 4;
  v32 = 288;
  v35 = 67108868;
  v37 = 4;
  v39 = 288;
  v42 = 67108868;
  v44 = 4;
  v48 = 0LL;
  LODWORD(v23) = 0;
  v24 = 0LL;
  v31 = 0LL;
  v38 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\IoMmu", &v24, 0LL, 0LL);
  if ( !(_DWORD)v23 )
    goto LABEL_2;
  v8 = operator new[](0x20uLL, 0x74727044u, (POOL_TYPE)512);
  v9 = v8;
  if ( v8 )
  {
    v8[3] = 0LL;
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v9;
  if ( !v9 )
    goto LABEL_2;
  v10 = v21;
  v11 = 24;
  if ( v21 < 0x18 )
    v11 = v21;
  if ( v11 )
  {
    if ( v21 >= 0x18 )
      v10 = 24;
  }
  else
  {
    v10 = 1;
  }
  v12 = v22;
  v21 = v10;
  if ( v22 >= 8 )
    v12 = 8;
  v22 = v12;
  *((_DWORD *)v9 + 6) = v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = 1 << v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) - 1;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (8LL * v22 + 16) * (unsigned int)(1 << v10), 0x74727044u);
  v17 = *(_QWORD **)(a1 + 24);
  *v17 = PoolWithTag;
  if ( !**(_QWORD **)(a1 + 24) )
  {
    v18 = WdLogNewEntry5_WdLowResource(v17, v14, v15, v16);
    *(_QWORD *)(v18 + 24) = 1289LL;
    WdLogEvent5_WdLowResource(v18);
    v19 = *(PVOID **)(a1 + 24);
    if ( v19 )
    {
      if ( *v19 )
      {
        ExFreePoolWithTag(*v19, 0);
        v19 = *(PVOID **)(a1 + 24);
      }
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  else
  {
LABEL_2:
    v2 = 256;
    Mdl = IoAllocateMdl(0LL, 0x100000u, 0, 0, 0LL);
    *(_QWORD *)(a1 + 32) = Mdl;
    if ( !Mdl )
    {
      v20 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
      *(_QWORD *)(v20 + 24) = 1311LL;
      WdLogEvent5_WdLowResource(v20);
      v2 = 1;
      *(_QWORD *)(a1 + 32) = a1 + 40;
    }
    *(_DWORD *)(a1 + 96) = v2;
  }
}
