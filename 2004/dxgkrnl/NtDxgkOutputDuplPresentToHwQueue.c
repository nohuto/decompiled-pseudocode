/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x1C0274860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01670FC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C026C414 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026DF58 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C02827C4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(__int64 a1, __int64 a2)
{
  __int128 *v2; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  PVOID v15; // rax
  PVOID v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // r14
  __int64 v29; // rax
  struct _D3DKMT_MOVE_RECT *v30; // rsi
  const void *v31; // rdx
  char *v32; // rcx
  unsigned int v33; // ecx
  struct _D3DKMT_MOVE_RECT *v34; // r9
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int128 v37; // [rsp+20h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-B8h]
  void *v39[2]; // [rsp+40h] [rbp-A8h]
  struct _D3DKMT_MOVE_RECT *v40[2]; // [rsp+50h] [rbp-98h]
  int v41; // [rsp+60h] [rbp-88h]
  int v42; // [rsp+64h] [rbp-84h]
  int v43; // [rsp+68h] [rbp-80h]
  struct DXGPROCESS *v44; // [rsp+70h] [rbp-78h]
  PVOID v45; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v47[16]; // [rsp+88h] [rbp-60h] BYREF
  int v48; // [rsp+98h] [rbp-50h]
  PVOID v49; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v50[16]; // [rsp+A8h] [rbp-40h] BYREF
  int v51; // [rsp+B8h] [rbp-30h]

  v2 = (__int128 *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  v44 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9);
    v11 = v8;
LABEL_3:
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v13 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v13 + 24) = 2615LL;
    v11 = v13;
    goto LABEL_3;
  }
  P = 0LL;
  v48 = 0;
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (__int128 *)MmUserProbeAddress;
  v37 = *v2;
  *(_OWORD *)Src = v2[1];
  *(_OWORD *)v39 = v2[2];
  *(_OWORD *)v40 = v2[3];
  if ( !DWORD2(v37) )
  {
    v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, 0LL, v6);
    *(_QWORD *)(v14 + 24) = 2627LL;
    WdLogEvent5_WdWarning(v14);
    if ( P != v47 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v48 = 0;
    return 3221225485LL;
  }
  v15 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, DWORD2(v37));
  v16 = P;
  if ( !v15 )
  {
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    return 3221225495LL;
  }
  v45 = P;
  v17 = 4LL * DWORD2(v37);
  v18 = Src[0];
  if ( (char *)Src[0] + v17 < Src[0] || (char *)Src[0] + v17 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v16, v18, v17);
  Src[0] = P;
  v21 = 16LL * LODWORD(Src[1]);
  if ( v21 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v19, v20);
    *(_QWORD *)(v36 + 24) = 2655LL;
LABEL_57:
    WdLogEvent5_WdWarning(v36);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225621LL;
  }
  v41 = 16 * LODWORD(Src[1]);
  v22 = 24LL * LODWORD(v39[1]);
  if ( v22 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v19, v20);
    *(_QWORD *)(v36 + 24) = 2662LL;
    goto LABEL_57;
  }
  v42 = 24 * LODWORD(v39[1]);
  v23 = (unsigned int)(v22 + v21);
  if ( (unsigned int)v23 < (unsigned int)v22 )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v23, v20);
    *(_QWORD *)(v36 + 24) = 2669LL;
    goto LABEL_57;
  }
  v43 = v22 + v21;
  v49 = 0LL;
  v51 = 0;
  if ( (_DWORD)v23 )
  {
    v28 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&v49, v23);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      *(_QWORD *)(v29 + 24) = 2681LL;
      WdLogEvent5_WdLowResource(v29);
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
      if ( P != v47 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
    v30 = (struct _D3DKMT_MOVE_RECT *)&v28[16 * LODWORD(Src[1])];
    if ( LODWORD(Src[1]) )
    {
      v31 = v39[0];
      v32 = (char *)v39[0] + (unsigned int)v21;
      if ( v32 < v39[0] || (unsigned __int64)v32 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v31, (unsigned int)v21);
      v39[0] = v28;
    }
    else
    {
      v39[0] = 0LL;
    }
    v33 = (unsigned int)v39[1];
    if ( LODWORD(v39[1]) )
    {
      if ( (_DWORD)v22 )
      {
        v34 = (struct _D3DKMT_MOVE_RECT *)((char *)v40[0] + (unsigned int)v22);
        if ( (unsigned __int64)v34 > MmUserProbeAddress || v34 < v40[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v33 = (unsigned int)v39[1];
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v33, v40[0], v30);
      v40[0] = v30;
    }
    else
    {
      v40[0] = 0LL;
    }
  }
  else
  {
    v39[0] = 0LL;
    v40[0] = 0LL;
  }
  v35 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)&v37, v7);
  if ( v49 != v50 && v49 )
    ExFreePoolWithTag(v49, 0);
  v49 = 0LL;
  v51 = 0;
  if ( P != v47 && P )
    ExFreePoolWithTag(P, 0);
  return v35;
}
