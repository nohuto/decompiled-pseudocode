/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B9E00
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02B9A7C (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254008 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02541B8 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027E754 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02B9CB8 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE *i; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  struct DXGHWQUEUE *v13; // rcx
  __int64 v14; // rax
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  int v21; // edx
  UINT Height; // eax
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r14d
  signed int Width; // r11d
  unsigned int v27; // r14d
  signed int v28; // r13d
  unsigned int v29; // ecx
  UINT v30; // r15d
  UINT v31; // eax
  LONG v32; // r10d
  LONG v33; // r9d
  unsigned int v34; // r8d
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // ecx
  int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  unsigned int v45; // ecx
  unsigned int *v46; // rbx
  char *v47; // rcx
  VIDPNSOURCEINFO *v48; // [rsp+20h] [rbp-E0h]
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  struct DXGCONTEXT *v50; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v53[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+74h] [rbp-8Ch]
  struct DXGHWQUEUE *v56; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v57; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION *v58; // [rsp+B0h] [rbp-50h]
  _BYTE v59[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  char v61; // [rsp+C8h] [rbp-38h]
  struct _D3DKMDT_STAGINGSURFACEDATA v62; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v63; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v65[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v66[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v67[120]; // [rsp+168h] [rbp+68h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v50 = 0LL;
  v58 = a2;
  if ( !*(_DWORD *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 136)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v6 + 24) = 5733LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = *(_BYTE **)(v2 + 464); i != (_BYTE *)(v2 + 464) && i; i = *(_BYTE **)i )
  {
    if ( i[458] )
      goto LABEL_10;
  }
  i = 0LL;
LABEL_10:
  v50 = (struct DXGCONTEXT *)i;
  if ( !i )
  {
    v8 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v8 + 24) = v2;
    WdLogEvent5_WdError(v8);
    return 3221225860LL;
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 464));
  v10 = *(_QWORD *)(v2 + 16);
  v61 = 0;
  v60 = *(_QWORD *)(v10 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, v2, 1, v11, 0);
  LODWORD(v12) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
  if ( (int)v12 < 0 )
    goto LABEL_72;
  v56 = 0LL;
  if ( (*((_DWORD *)v50 + 105) & 0x10) != 0 )
  {
    v13 = 0LL;
    if ( *((struct DXGCONTEXT **)v50 + 53) != (struct DXGCONTEXT *)((char *)v50 + 424) )
      v13 = (struct DXGHWQUEUE *)*((_QWORD *)v50 + 53);
    v56 = v13;
  }
  v14 = *((_QWORD *)a2 + 6);
  *(_QWORD *)v53 = 0LL;
  memset(&v57, 0, sizeof(v57));
  v15 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v57.hAllocation = *(HANDLE *)(v14 + 16);
  v16 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v50 + 2) + 16LL), &v57, (__int64)v50);
  v12 = v16;
  v19 = 2LL;
  if ( v16 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdError(v20);
LABEL_19:
    *((_DWORD *)this + 12) = 1;
    goto LABEL_66;
  }
  v21 = *((_DWORD *)this + 7);
  if ( (v21 & 0x20) != 0 )
  {
    v49 = 1;
  }
  else
  {
    Height = v57.Height;
    if ( v57.Width > v57.Height )
      Height = v57.Width;
    v49 = 2 * Height;
  }
  v23 = *((_DWORD *)this + 7);
  if ( v57.Format != D3DDDIFMT_A8R8G8B8
    && v57.Format != D3DDDIFMT_X8R8G8B8
    && v57.Format != D3DDDIFMT_A8B8G8R8
    && v57.Format != D3DDDIFMT_X8B8G8R8 )
  {
    v23 = v21 | 0x40;
    *((_DWORD *)this + 12) = 1;
    *((_DWORD *)this + 7) = v21 | 0x40;
  }
  v24 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v24 & 0xC000) != 0 )
  {
    *((_DWORD *)this + 7) = v23 | 0x80;
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 12) )
    goto LABEL_66;
  if ( (v23 & 0x1000) == 0 && (v24 & 0x2000) != 0 )
    *((_DWORD *)this + 7) = v23 | 0x2000;
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v2 + 40) + 56LL), &ApcState);
  v55 = 1;
  v62.Width = 512;
  v25 = 0;
  *(_QWORD *)&v62.Height = 512LL;
  do
  {
    LODWORD(v12) = DXGDEVICE::CreateStagingSurface2(
                     (DXGDEVICE *)v2,
                     &v62,
                     (struct COREDEVICEACCESS *)v65,
                     &v53[v25],
                     0LL);
    if ( (int)v12 < 0 )
      break;
    ++v25;
  }
  while ( v25 < 2 );
  Width = v57.Width;
  v27 = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  v52 = 0;
  v51 = 0;
  v28 = v57.Height;
  v29 = (unsigned int)(Width + 511) >> 9;
  v63 = 0LL;
  v54 = v29;
  v30 = v29 * ((v57.Height + 511) >> 9);
  v31 = v30 + 1;
  if ( v30 == -1 )
    goto LABEL_58;
  while ( 1 )
  {
    if ( v27 < v30 )
    {
      v32 = (v27 / v29) << 9;
      v33 = (v27 % v29) << 9;
      v63.left = v33;
      v63.top = v32;
      if ( v33 + 512 < Width )
        Width = v33 + 512;
      v63.right = Width;
      if ( v32 + 512 < v28 )
        v28 = v32 + 512;
      v34 = v53[v27 & 1];
      v35 = 16LL * (v27 & 1);
      v63.bottom = v28;
      *(_DWORD *)&v67[v35 + 92] = 0;
      *(_DWORD *)&v67[v35 + 88] = 0;
      *(_DWORD *)&v67[v35 + 96] = Width - v33;
      *(_DWORD *)&v67[v35 + 100] = v28 - v32;
      LODWORD(v12) = DXGCONTEXT::Blt(
                       (struct _EX_RUNDOWN_REF *)v50,
                       *((_DWORD *)v58 + 4),
                       v34,
                       0,
                       &v50,
                       &v63,
                       1u,
                       (struct tagRECT *)&v67[v35 + 88],
                       (struct COREDEVICEACCESS *)v65,
                       &v56);
      if ( (int)v12 < 0 )
        goto LABEL_58;
      v28 = v57.Height;
      v31 = v30 + 1;
      Width = v57.Width;
    }
    if ( !v27 )
      goto LABEL_53;
    v48 = (VIDPNSOURCEINFO *)&v67[16 * (((_BYTE)v27 - 1) & 1) + 88];
    v36 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
            v48,
            (struct DXGDEVICE *)v2,
            v53[((_BYTE)v27 - 1) & 1],
            v62.Pitch,
            (const struct tagRECT *)v48,
            (struct COREDEVICEACCESS *)v65,
            &v52,
            &v51);
    v12 = v36;
    if ( v36 < 0 )
      break;
    v39 = v51;
    if ( v51 == v52 )
    {
      *((_DWORD *)this + 7) &= 0xFFFFFFE7;
      goto LABEL_58;
    }
    v40 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 13) += v52;
    v41 = v39 + v40;
    *((_DWORD *)this + 14) = v41;
    if ( v27 >= 2 )
    {
      v42 = v49;
      if ( v41 >= v49 )
      {
        *((_DWORD *)this + 7) &= 0xFFFFFFE7;
        goto LABEL_59;
      }
    }
    v28 = v57.Height;
    v31 = v30 + 1;
    Width = v57.Width;
LABEL_53:
    if ( ++v27 >= v31 )
      goto LABEL_58;
    v29 = v54;
  }
  v43 = WdLogNewEntry5_WdError(v38, v37);
  *(_QWORD *)(v43 + 24) = v12;
  WdLogEvent5_WdError(v43);
LABEL_58:
  v42 = v49;
LABEL_59:
  v44 = *((_DWORD *)this + 7);
  if ( (int)v12 < 0 )
  {
    v45 = v44 & 0xFFFFFFE7 | 0x10;
    goto LABEL_64;
  }
  if ( (v44 & 0x18) != 0 && *((_DWORD *)this + 14) < v42 )
  {
    v45 = v44 & 0xFFFFFFE7 | 8;
LABEL_64:
    *((_DWORD *)this + 7) = v45;
  }
  v15 = v55;
LABEL_66:
  v46 = v53;
  do
  {
    if ( *v46 )
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)v2, *v46, 0, (struct COREDEVICEACCESS *)v65);
    ++v46;
    --v19;
  }
  while ( v19 );
  if ( v15 )
    KeUnstackDetachProcess(&ApcState);
LABEL_72:
  v47 = (char *)v50 + 464;
  *((_QWORD *)v50 + 59) = 0LL;
  ExReleasePushLockExclusiveEx(v47, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  if ( v61 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  return (unsigned int)v12;
}
