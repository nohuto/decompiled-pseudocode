/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02ED6C0 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E440C (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E4610 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1C02E5798 (-GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02ED964 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  DXGDEVICE *v2; // r14
  struct DXGCONTEXT *PresentContext; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  struct DXGHWQUEUE *v10; // rcx
  __int64 v11; // rax
  int v12; // r12d
  int v13; // eax
  __int64 v14; // r15
  int v15; // edx
  UINT Height; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // ebx
  signed int Width; // r11d
  unsigned int v21; // ebx
  signed int v22; // r12d
  unsigned int v23; // ecx
  unsigned int v24; // r13d
  unsigned int v25; // eax
  LONG v26; // r10d
  LONG v27; // r9d
  unsigned int v28; // r8d
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // r8d
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int *v37; // rbx
  char *v38; // rcx
  VIDPNSOURCEINFO *v39; // [rsp+20h] [rbp-E0h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  struct DXGHWQUEUE *v47; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v48; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION *v49; // [rsp+B0h] [rbp-50h]
  _BYTE v50[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h]
  char v52; // [rsp+C8h] [rbp-38h]
  struct _D3DKMDT_STAGINGSURFACEDATA v53; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v54; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v56[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v57[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v58[120]; // [rsp+168h] [rbp+68h] BYREF

  v2 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v49 = a2;
  PresentContext = DXGDEVICE::GetPresentContext(v2);
  v43 = PresentContext;
  if ( !PresentContext )
  {
    WdLogSingleEntry1(2LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The rendering device (0x%I64x) has not been used for Present",
      (__int64)v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)PresentContext + 448));
  v7 = *((_QWORD *)v2 + 2);
  v52 = 0;
  v51 = *(_QWORD *)(v7 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v2, 1, v8, 0);
  LODWORD(v9) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56, 0LL);
  if ( (int)v9 < 0 )
    goto LABEL_64;
  v47 = 0LL;
  if ( (*((_DWORD *)v43 + 101) & 0x10) != 0 )
  {
    v10 = 0LL;
    if ( *((struct DXGCONTEXT **)v43 + 51) != (struct DXGCONTEXT *)((char *)v43 + 408) )
      v10 = (struct DXGHWQUEUE *)*((_QWORD *)v43 + 51);
    v47 = v10;
  }
  v11 = *((_QWORD *)a2 + 6);
  *(_QWORD *)v44 = 0LL;
  memset(&v48, 0, sizeof(v48));
  v12 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v48.hAllocation = *(HANDLE *)(v11 + 16);
  v13 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v43 + 2) + 16LL), &v48, (__int64)v43);
  v9 = v13;
  v14 = 2LL;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DdiDescribeAllocation() failed with status : 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_10:
    *((_DWORD *)this + 12) = 1;
    goto LABEL_58;
  }
  v15 = *((_DWORD *)this + 7);
  if ( (v15 & 0x20) != 0 )
  {
    v40 = 1;
  }
  else
  {
    Height = v48.Height;
    if ( v48.Width > v48.Height )
      Height = v48.Width;
    v40 = 2 * Height;
  }
  v17 = *((_DWORD *)this + 7);
  if ( v48.Format != D3DDDIFMT_A8R8G8B8
    && v48.Format != D3DDDIFMT_X8R8G8B8
    && v48.Format != D3DDDIFMT_A8B8G8R8
    && v48.Format != D3DDDIFMT_X8B8G8R8 )
  {
    v17 = v15 | 0x40;
    *((_DWORD *)this + 12) = 1;
    *((_DWORD *)this + 7) = v15 | 0x40;
  }
  v18 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v18 & 0xC000) != 0 )
  {
    *((_DWORD *)this + 7) = v17 | 0x80;
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 12) )
    goto LABEL_58;
  if ( (v17 & 0x1000) == 0 && (v18 & 0x2000) != 0 )
    *((_DWORD *)this + 7) = v17 | 0x2000;
  KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v2 + 5) + 56LL), &ApcState);
  v46 = 1;
  v53.Width = 512;
  v19 = 0;
  *(_QWORD *)&v53.Height = 512LL;
  do
  {
    LODWORD(v9) = DXGDEVICE::CreateStagingSurface2(v2, &v53, (struct COREDEVICEACCESS *)v56, &v44[v19], 0LL);
    if ( (int)v9 < 0 )
      break;
    ++v19;
  }
  while ( v19 < 2 );
  Width = v48.Width;
  v21 = 0;
  v22 = v48.Height;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  v42 = 0;
  v41 = 0;
  v23 = (unsigned int)(Width + 511) >> 9;
  v24 = v23 * ((unsigned int)(v22 + 511) >> 9);
  v54 = 0LL;
  v45 = v23;
  v25 = v24 + 1;
  if ( v24 == -1 )
    goto LABEL_52;
  while ( 1 )
  {
    if ( v21 < v24 )
    {
      v26 = (v21 / v23) << 9;
      v27 = (v21 % v23) << 9;
      v54.left = v27;
      v54.top = v26;
      if ( v27 + 512 < Width )
        Width = v27 + 512;
      v54.right = Width;
      if ( v26 + 512 < v22 )
        v22 = v26 + 512;
      v28 = v44[v21 & 1];
      v29 = 16LL * (v21 & 1);
      v54.bottom = v22;
      *(_DWORD *)&v58[v29 + 92] = 0;
      *(_DWORD *)&v58[v29 + 88] = 0;
      *(_DWORD *)&v58[v29 + 96] = Width - v27;
      *(_DWORD *)&v58[v29 + 100] = v22 - v26;
      LODWORD(v9) = DXGCONTEXT::Blt(
                      v43,
                      *((_DWORD *)v49 + 4),
                      v28,
                      0,
                      &v43,
                      &v54,
                      1u,
                      (const struct tagRECT *)&v58[v29 + 88],
                      (struct COREDEVICEACCESS *)v56,
                      &v47);
      if ( (int)v9 < 0 )
        goto LABEL_48;
      v22 = v48.Height;
      v25 = v24 + 1;
      Width = v48.Width;
    }
    if ( v21 )
      break;
LABEL_44:
    if ( ++v21 >= v25 )
      goto LABEL_48;
    v23 = v45;
  }
  v39 = (VIDPNSOURCEINFO *)&v58[16 * (((_BYTE)v21 - 1) & 1) + 88];
  v30 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
          v39,
          v2,
          v44[((_BYTE)v21 - 1) & 1],
          v53.Pitch,
          (const struct tagRECT *)v39,
          (struct COREDEVICEACCESS *)v56,
          &v42,
          &v41);
  v9 = v30;
  if ( v30 >= 0 )
  {
    v31 = v41;
    if ( v41 == v42 )
    {
      *((_DWORD *)this + 7) &= 0xFFFFFFE7;
LABEL_48:
      v34 = v40;
      goto LABEL_49;
    }
    v32 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 13) += v42;
    v33 = v31 + v32;
    *((_DWORD *)this + 14) = v33;
    if ( v21 >= 2 )
    {
      v34 = v40;
      if ( v33 >= v40 )
      {
        *((_DWORD *)this + 7) &= 0xFFFFFFE7;
        goto LABEL_49;
      }
    }
    v22 = v48.Height;
    v25 = v24 + 1;
    Width = v48.Width;
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v30);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"CheckPrimaryContentTile() failed with status : 0x%I64x",
    v9,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_52:
  v34 = v40;
LABEL_49:
  v35 = *((_DWORD *)this + 7);
  if ( (int)v9 < 0 )
  {
    v36 = v35 & 0xFFFFFFE7 | 0x10;
    goto LABEL_56;
  }
  if ( (v35 & 0x18) != 0 && *((_DWORD *)this + 14) < v34 )
  {
    v36 = v35 & 0xFFFFFFE7 | 8;
LABEL_56:
    *((_DWORD *)this + 7) = v36;
  }
  v12 = v46;
LABEL_58:
  v37 = v44;
  do
  {
    if ( *v37 )
      DXGDEVICE::DestroyStagingSurface(v2, *v37, 0, (struct COREDEVICEACCESS *)v56);
    ++v37;
    --v14;
  }
  while ( v14 );
  if ( v12 )
    KeUnstackDetachProcess(&ApcState);
LABEL_64:
  v38 = (char *)v43 + 448;
  *((_QWORD *)v43 + 57) = 0LL;
  ExReleasePushLockExclusiveEx(v38, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v58);
  COREACCESS::~COREACCESS((COREACCESS *)v57);
  if ( v52 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  return (unsigned int)v9;
}
