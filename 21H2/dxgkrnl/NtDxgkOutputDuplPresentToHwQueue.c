/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x1C0315510
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C030D9FC (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C030F8B4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0332ED4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // r15
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 Elements; // rax
  PVOID v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned int v25; // edx
  char *v26; // r14
  struct _D3DKMT_MOVE_RECT *v27; // rdi
  const void *v28; // rdx
  char *v29; // rcx
  unsigned int v30; // ecx
  struct _D3DKMT_MOVE_RECT *v31; // r9
  unsigned int v32; // ebx
  __int64 v33; // [rsp+28h] [rbp-D0h]
  __int128 v34; // [rsp+50h] [rbp-A8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-98h]
  void *v36[2]; // [rsp+70h] [rbp-88h]
  struct _D3DKMT_MOVE_RECT *v37[2]; // [rsp+80h] [rbp-78h]
  struct DXGPROCESS *v38; // [rsp+90h] [rbp-68h]
  PVOID P; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v40[16]; // [rsp+A0h] [rbp-58h] BYREF
  int v41; // [rsp+B0h] [rbp-48h]
  PVOID v42; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE v43[16]; // [rsp+C0h] [rbp-38h] BYREF
  int v44; // [rsp+D0h] [rbp-28h]

  v4 = (__int128 *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v10 = Current;
  v38 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v33 = PsGetCurrentProcess(v13, v12, v14, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v33,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    WdLogSingleEntry1(2LL, 2702LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Function can only be called from DWM process",
      2702LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v41 = 0;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (__int128 *)MmUserProbeAddress;
  v34 = *v4;
  *(_OWORD *)Src = v4[1];
  *(_OWORD *)v36 = v4[2];
  *(_OWORD *)v37 = v4[3];
  if ( !DWORD2(v34) )
  {
    WdLogSingleEntry1(3LL, 2714LL);
    P = 0LL;
    v41 = 0;
    return 3221225485LL;
  }
  Elements = PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&P, DWORD2(v34), v8, v9);
  v18 = P;
  if ( !Elements )
  {
    if ( P != v40 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v41 = 0;
    return 3221225495LL;
  }
  v19 = 4LL * DWORD2(v34);
  v20 = Src[0];
  if ( (char *)Src[0] + v19 < Src[0] || (char *)Src[0] + v19 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v20, v19);
  Src[0] = P;
  v23 = 16LL * LODWORD(Src[1]);
  if ( v23 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 2742LL);
LABEL_54:
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225621LL;
  }
  v24 = 24LL * LODWORD(v36[1]);
  if ( v24 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 2749LL);
    goto LABEL_54;
  }
  v25 = v24 + v23;
  if ( (int)v24 + (int)v23 < (unsigned int)v24 )
  {
    WdLogSingleEntry1(3LL, 2756LL);
    goto LABEL_54;
  }
  v42 = 0LL;
  v44 = 0;
  if ( v25 )
  {
    v26 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&v42, v25, v21, v22);
    if ( !v26 )
    {
      WdLogSingleEntry1(6LL, 2768LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
        2768LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v42 != v43 && v42 )
        ExFreePoolWithTag(v42, 0);
      v42 = 0LL;
      v44 = 0;
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
    v27 = (struct _D3DKMT_MOVE_RECT *)&v26[16 * LODWORD(Src[1])];
    if ( LODWORD(Src[1]) )
    {
      v28 = v36[0];
      v29 = (char *)v36[0] + (unsigned int)v23;
      if ( v29 < v36[0] || (unsigned __int64)v29 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v26, v28, (unsigned int)v23);
      v36[0] = v26;
    }
    else
    {
      v36[0] = 0LL;
    }
    v30 = (unsigned int)v36[1];
    if ( LODWORD(v36[1]) )
    {
      if ( (_DWORD)v24 )
      {
        v31 = (struct _D3DKMT_MOVE_RECT *)((char *)v37[0] + (unsigned int)v24);
        if ( (unsigned __int64)v31 > MmUserProbeAddress || v31 < v37[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v30 = (unsigned int)v36[1];
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v30, v37[0], v27);
      v37[0] = v27;
    }
    else
    {
      v37[0] = 0LL;
    }
  }
  else
  {
    v36[0] = 0LL;
    v37[0] = 0LL;
  }
  v32 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)&v34, v10, v21, v22);
  if ( v42 != v43 && v42 )
    ExFreePoolWithTag(v42, 0);
  v42 = 0LL;
  v44 = 0;
  if ( P != v40 && P )
    ExFreePoolWithTag(P, 0);
  return v32;
}
