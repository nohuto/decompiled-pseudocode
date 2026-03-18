/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C020E8E8
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C020E59C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C038A234 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C020EA98 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C038B0B0 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // edi
  char *PoolWithTag; // rax
  char *v12; // rbx
  __int16 v13; // ax
  __int128 v14; // xmm0
  struct _KMUTANT *v15; // rax
  int v16; // eax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx

  v6 = 0;
  if ( !a3 && *a4 != 1 )
  {
    v20 = -1073741811LL;
    v6 = -1073741811;
    v21 = 2LL;
LABEL_20:
    WdLogSingleEntry1(v21, v20);
    return v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x74727044u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = -1073741801LL;
    v6 = -1073741801;
    v21 = 6LL;
    goto LABEL_20;
  }
  memset(PoolWithTag, 0, 0x80uLL);
  *((_DWORD *)v12 + 5) = a6;
  *((_DWORD *)v12 + 14) = 1;
  *((_DWORD *)v12 + 6) = a2;
  v12[67] = a3;
  if ( *a4 == 3 )
  {
    *(_DWORD *)v12 = 1;
    *(_OWORD *)(v12 + 4) = *a5;
    *((_DWORD *)v12 + 1) = 0x80000000;
    *((_DWORD *)v12 + 2) = 1;
    v12[12] = 0;
    *((_DWORD *)v12 + 22) = *(_DWORD *)a5;
    v13 = *((_WORD *)a5 + 2);
  }
  else
  {
    *(_DWORD *)v12 = *a4;
    v13 = 0;
    v14 = *a5;
    *(_DWORD *)(v12 + 94) = 0;
    *(_OWORD *)(v12 + 4) = v14;
  }
  *((_WORD *)v12 + 46) = v13;
  *((_DWORD *)v12 + 17) = 1;
  v15 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
  *((_QWORD *)v12 + 9) = v15;
  if ( v15 )
  {
    KeInitializeMutex(v15, 0);
    if ( a3 && *(_BYTE *)(a1 + 1157) == 1 )
      *((_QWORD *)v12 + 10) = DpiAcpiGetAcpiChildName(a1, *((unsigned int *)v12 + 5));
    if ( *(_DWORD *)v12 == 1 )
    {
      v16 = *(_DWORD *)(a1 + 3480) + 1;
      *(_DWORD *)(a1 + 3480) = v16;
      if ( *(_BYTE *)(a1 + 1152) )
      {
        if ( v16 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5) )
          dword_1C01307F4 = a2;
      }
    }
    v17 = v12 + 32;
    v18 = *(_QWORD **)(a1 + 3472);
    if ( *v18 != a1 + 3464 )
      __fastfail(3u);
    *v17 = a1 + 3464;
    v17[1] = v18;
    *v18 = v17;
    *(_QWORD *)(a1 + 3472) = v17;
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DpiFdoReleaseChildDescriptor(v12);
  }
  return v6;
}
