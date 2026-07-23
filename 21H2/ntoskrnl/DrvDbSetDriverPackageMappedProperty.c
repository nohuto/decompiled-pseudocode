/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x14072E454
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140630DE0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406339AC (DrvDbOpenDriverPackageRegKey.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140734F00 (DrvDbGetDriverPackageSignerScore.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x14097DF88 (DrvDbGetDriverPackageSignerName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7)
{
  int v8; // r8d
  __int64 v10; // rbx
  int v11; // r11d
  PVOID v12; // r15
  unsigned int v13; // edx
  __int64 (**i)[3]; // r10
  __int64 *v15; // r9
  int v16; // ebx
  __int64 v17; // rcx
  __int64 (**v18)[3]; // r13
  unsigned int v19; // r14d
  int v20; // eax
  const wchar_t *v21; // rdx
  unsigned int v22; // r12d
  _DWORD *v23; // r15
  __int64 v24; // rcx
  HANDLE v25; // rdx
  int v26; // eax
  _OWORD *PoolWithTag; // rdi
  bool v29; // zf
  HANDLE v30; // rcx
  int v31; // eax
  size_t v32; // r8
  char *v33; // rcx
  HANDLE v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  HANDLE v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  HANDLE v45; // r8
  HANDLE v46; // rdx
  int v47; // r8d
  int v48; // r8d
  int v49; // edx
  int v50; // ecx
  const wchar_t *v51; // rbx
  int v52; // r8d
  int v53; // r8d
  int v54; // r8d
  HANDLE v55; // rdx
  int v56; // [rsp+40h] [rbp-20h] BYREF
  int v57; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PVOID v59; // [rsp+50h] [rbp-10h]
  PVOID P; // [rsp+58h] [rbp-8h]
  __int64 v63; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  P = 0LL;
  v11 = a1;
  v57 = 0;
  v12 = 0LL;
  v56 = 0;
  v59 = 0LL;
  LODWORD(v63) = 0;
  if ( v8 == 2 )
  {
    v35 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v35 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v35 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 18 )
  {
    v40 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v40 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v41 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v41 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v42 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v42 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v43 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v43 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 40 )
  {
    v44 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
      v44 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v44 )
      return (unsigned int)-1073741790;
  }
  v13 = 0;
  for ( i = &off_1400040B0; ; i += 5 )
  {
    v15 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 )
    {
      v17 = *v15 - *(_QWORD *)a4;
      if ( *v15 == *(_QWORD *)a4 )
        v17 = v15[1] - *(_QWORD *)(a4 + 8);
      if ( !v17 )
        break;
    }
    if ( ++v13 >= 0x20 )
      return (unsigned int)-1073741802;
  }
  v18 = &off_1400040B0 + 5 * v13;
  if ( !v18 )
    return (unsigned int)-1073741802;
  v19 = a5;
  if ( a5 != *((_DWORD *)v18 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v16 = DrvDbOpenDriverPackageRegKey(v11, v10, 3, 0, (__int64)&Handle, 0LL);
    if ( v16 < 0 )
      goto LABEL_31;
    v10 = a2;
  }
  v20 = *((_DWORD *)v18 + 8);
  if ( v20 )
  {
    if ( v19 )
      v29 = a7 == v20;
    else
      v29 = a7 == 0;
    if ( !v29 )
    {
      v16 = -1073741823;
      goto LABEL_31;
    }
    LODWORD(v63) = 48;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( PoolWithTag )
    {
      v30 = Handle;
      if ( a3 )
        v30 = a3;
      v31 = RegRtlQueryValue(v30, L"Version", &v57, PoolWithTag, (unsigned int *)&v63);
      v16 = v31;
      if ( v31 == -1073741772 )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
      }
      else
      {
        if ( v31 == -1073741789 )
        {
          v16 = -1073741595;
          goto LABEL_27;
        }
        if ( v31 < 0 )
        {
LABEL_27:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_31;
        }
        if ( v57 != 3 || (_DWORD)v63 != 48 )
        {
          v16 = -1073741823;
          goto LABEL_27;
        }
      }
      v32 = *((unsigned int *)v18 + 8);
      v33 = (char *)PoolWithTag + *((unsigned int *)v18 + 7);
      if ( v19 )
        memmove(v33, Src, v32);
      else
        memset(v33, 0, v32);
      v34 = Handle;
      if ( a3 )
        v34 = a3;
      v26 = RegRtlSetValue(v34, 0x30u);
LABEL_26:
      v16 = v26;
      goto LABEL_27;
    }
    goto LABEL_99;
  }
  v21 = L"Microsoft Windows";
  v22 = a7;
  v23 = Src;
  if ( *(_DWORD *)(a4 + 16) != 7 )
  {
    v24 = 0LL;
    goto LABEL_22;
  }
  v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  v24 = 0LL;
  if ( v36
    || v19 != 18
    || a7 <= 2
    || !Src
    || *((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1)
    || (v37 = wcsicmp((const wchar_t *)Src, L"Microsoft Windows"), v24 = 0LL, v37) )
  {
LABEL_22:
    if ( *(_DWORD *)(a4 + 16) != 8 )
      goto LABEL_23;
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v38 )
      goto LABEL_23;
    if ( v19 == 7 )
    {
      if ( v22 == 4 && v23 )
      {
        if ( *v23 != 218103811 )
          goto LABEL_70;
        v48 = (int)Handle;
        if ( a3 )
          v48 = (int)a3;
        if ( (unsigned int)DrvDbGetDriverPackageSignerName(0, (_DWORD)v21, v48, 0, 0, (__int64)&v63) == -1073741789
          && (_DWORD)v63 == 18 )
        {
          v59 = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
          v51 = (const wchar_t *)v59;
          if ( v59 )
          {
            v52 = (int)Handle;
            if ( a3 )
              v52 = (int)a3;
            if ( (int)DrvDbGetDriverPackageSignerName(v50, v49, v52, (_DWORD)v59, 18, (__int64)&v63) >= 0
              && (_DWORD)v63
              && !v51[(unsigned int)(v63 - 1)]
              && !wcsicmp(v51, L"Microsoft Windows") )
            {
              v53 = (int)Handle;
              if ( a3 )
                v53 = (int)a3;
              DrvDbSetDriverPackageMappedProperty(a1, a2, v53, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
            }
            goto LABEL_23;
          }
LABEL_99:
          v16 = -1073741801;
          goto LABEL_31;
        }
      }
    }
    else if ( !v19 )
    {
LABEL_70:
      v39 = Handle;
      if ( a3 )
        v39 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v39, &v56) >= 0 && v56 == 218103811 )
      {
        v54 = (int)Handle;
        if ( a3 )
          v54 = (int)a3;
        if ( (unsigned int)DrvDbGetDriverPackageSignerName(v24, 0, v54, 0, 0, (__int64)&v63) == -1073741275 )
        {
          v55 = Handle;
          if ( a3 )
            v55 = a3;
          v16 = DrvDbSetRegValueMappedProperty(v24, v55, v18, v19, v23, v22);
          if ( v16 < 0 )
            goto LABEL_31;
          v47 = (int)Handle;
          if ( a3 )
            v47 = (int)a3;
          DrvDbSetDriverPackageMappedProperty(
            a1,
            a2,
            v47,
            (int)&DEVPKEY_DriverPackage_SignerName,
            18,
            (void *)L"Microsoft Windows",
            36);
          goto LABEL_114;
        }
      }
    }
LABEL_23:
    v25 = Handle;
    if ( a3 )
      v25 = a3;
    v26 = DrvDbSetRegValueMappedProperty(v24, v25, v18, v19, v23, v22);
    PoolWithTag = P;
    v12 = v59;
    goto LABEL_26;
  }
  v45 = Handle;
  if ( a3 )
    v45 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v45, &v56) < 0 || v56 != 218103811 )
    goto LABEL_23;
  v46 = Handle;
  if ( a3 )
    v46 = a3;
  v16 = DrvDbSetRegValueMappedProperty(v24, v46, v18, 0LL, 0LL, 0);
  if ( v16 != -1073741275 )
    goto LABEL_31;
LABEL_114:
  v16 = 0;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
