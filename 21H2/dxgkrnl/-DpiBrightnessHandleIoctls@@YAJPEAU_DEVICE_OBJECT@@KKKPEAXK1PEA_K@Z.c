/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C038F164
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C01B3E70 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  unsigned int v9; // edi
  unsigned int v11; // ebx
  __int64 (__fastcall **DeviceExtension)(struct _DEVICE_OBJECT *, __int64, PVOID *); // r15
  int v14; // r8d
  unsigned int v15; // esi
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  PVOID *PoolWithTag; // rsi
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _WORD *v28; // r14
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rbx
  ULONG TimeIncrement; // eax
  __int64 (__fastcall *v33)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  unsigned int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // ecx
  int v38; // eax
  char *v39; // rax
  char *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  unsigned __int8 v44; // cl
  int v45; // eax
  __int64 (__fastcall *v46)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  int v47; // eax
  int v48; // esi
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // esi
  int v53; // eax
  int v54; // eax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  int *v56; // [rsp+38h] [rbp-71h]
  _QWORD v57[12]; // [rsp+40h] [rbp-69h] BYREF

  v9 = 0;
  v11 = a2;
  LODWORD(P) = a2;
  DeviceExtension = (__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, PVOID *))a1->DeviceExtension;
  *a8 = 0LL;
  v56 = a5;
  if ( *((_BYTE *)DeviceExtension + 1162) )
    return 3221226166LL;
  v14 = a3 - 2296832;
  if ( !v14 )
  {
    if ( a6 < 8 )
    {
      LODWORD(v23) = -1073741789;
      return (unsigned int)v23;
    }
    LODWORD(P) = 0;
    *(_QWORD *)a7 = 0LL;
    *a8 = 8LL;
    if ( *((_WORD *)DeviceExtension + 2224) )
    {
      *(_DWORD *)a7 = 3;
      v53 = DeviceExtension[562](a1, a2, &P);
      v23 = v53;
      if ( v53 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)P ^ (unsigned __int8)(a7[4] ^ ((unsigned __int8)P ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ ((unsigned __int8)P ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ ((unsigned __int8)P ^ ((unsigned __int8)P ^ (unsigned __int8)(a7[4] ^ ((unsigned __int8)P ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ (unsigned __int8)(a7[4] ^ ((unsigned __int8)P ^ *((_DWORD *)a7 + 1)) & 1)) & 4;
        return (unsigned int)v23;
      }
    }
    else
    {
      if ( !*((_WORD *)DeviceExtension + 2260) )
      {
        if ( *((_WORD *)DeviceExtension + 2304) )
        {
          *(_DWORD *)a7 = 1;
          LODWORD(v23) = 0;
          return (unsigned int)v23;
        }
        goto LABEL_98;
      }
      *(_DWORD *)a7 = 2;
      v54 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[572])(a1, &P);
      v23 = v54;
      if ( v54 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)P ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ ((unsigned int)P ^ *((_DWORD *)a7 + 1) ^ ((unsigned __int8)P ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1) & 2;
        return (unsigned int)v23;
      }
    }
    goto LABEL_32;
  }
  v15 = 4;
  v16 = v14 - 4;
  if ( !v16 )
  {
    if ( a6 >= 0xD0 )
    {
      *a8 = 208LL;
      memset(a7, 0, 0xD0uLL);
      if ( *((_WORD *)DeviceExtension + 2224) )
      {
        *(_DWORD *)a7 = 3;
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0xCCuLL, 0x74727044u);
        if ( !PoolWithTag )
          goto LABEL_13;
        v49 = DeviceExtension[563](a1, v11, PoolWithTag);
        v23 = v49;
        if ( v49 >= 0 )
        {
          *((_DWORD *)a7 + 1) = *(_DWORD *)PoolWithTag;
          *((_DWORD *)a7 + 2) = *((_DWORD *)PoolWithTag + 1);
          *((_DWORD *)a7 + 3) = *((_DWORD *)PoolWithTag + 2);
          if ( *((_DWORD *)PoolWithTag + 1) )
          {
            do
            {
              v50 = v9++;
              v51 = 3 * v50;
              *(_DWORD *)&a7[4 * v51 + 16] = *((_DWORD *)PoolWithTag + 3 * v50 + 3);
              *(_DWORD *)&a7[4 * v51 + 20] = *((_DWORD *)PoolWithTag + 3 * v50 + 4);
              *(_DWORD *)&a7[4 * v51 + 24] = *((_DWORD *)PoolWithTag + 3 * v50 + 5);
            }
            while ( v9 < *((_DWORD *)PoolWithTag + 1) );
          }
          goto LABEL_82;
        }
        goto LABEL_81;
      }
      if ( *((_WORD *)DeviceExtension + 2260) )
      {
        v52 = 2;
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2304) )
          goto LABEL_98;
        v52 = 1;
      }
      *(_DWORD *)a7 = v52;
      v30 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))DeviceExtension[580])(
              a1,
              103LL,
              a7 + 4,
              a7 + 5);
      goto LABEL_31;
    }
    goto LABEL_64;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    if ( a6 < 0xC )
      goto LABEL_64;
    *a8 = 12LL;
    *(_QWORD *)a7 = 0LL;
    *((_DWORD *)a7 + 2) = 0;
    if ( !*((_WORD *)DeviceExtension + 2224) )
    {
      if ( *((_WORD *)DeviceExtension + 2260) )
      {
        v48 = 2;
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2304) )
        {
          LODWORD(v23) = -1073741637;
          v22 = 0LL;
          goto LABEL_33;
        }
        v48 = 1;
      }
      *(_DWORD *)a7 = v48;
      v30 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[582])(a1, a7 + 4);
      goto LABEL_31;
    }
    *(_DWORD *)a7 = 3;
    v46 = DeviceExtension[561];
    P = 0LL;
    v47 = v46(a1, a2, &P);
    v23 = v47;
    if ( v47 >= 0 )
    {
      *(_QWORD *)(a7 + 4) = P;
      return (unsigned int)v23;
    }
LABEL_32:
    v22 = v23;
LABEL_33:
    v24 = 3LL;
    goto LABEL_99;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    memset(v57, 0, sizeof(v57));
    v57[0] = 0x6000000028LL;
    memset(&v57[1], 0, 36);
    v31 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v57[8]) = 1;
    v57[6] = v31 * TimeIncrement;
    v33 = DeviceExtension[487];
    if ( v33 )
      v57[7] = *(_QWORD *)((char *)v33 + 404);
    v34 = (unsigned int)P;
    v35 = 32LL;
    HIDWORD(v57[8]) = (_DWORD)P;
    if ( a4 < 0x20 )
    {
      LODWORD(v23) = -1073741306;
LABEL_44:
      HIDWORD(v57[10]) = v23;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v57, 0x200000000LL);
      return (unsigned int)v23;
    }
    v23 = (__int64)v56;
    v36 = *v56;
    LODWORD(v57[9]) = v36;
    if ( (int)v36 > 0 )
    {
      if ( (int)v36 <= 2 )
      {
        LODWORD(v57[11]) |= 1u;
        v44 = *((_BYTE *)v56 + 4);
        *(_QWORD *)((char *)&v57[9] + 4) = v44;
        if ( *((_WORD *)DeviceExtension + 2304) )
        {
          LOBYTE(v35) = v44;
          v45 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64))DeviceExtension[581])(a1, v35);
          LODWORD(v23) = v45;
          if ( v45 >= 0 )
            goto LABEL_44;
          v41 = v45;
          goto LABEL_61;
        }
        goto LABEL_56;
      }
      if ( (_DWORD)v36 == 3 )
      {
        if ( *((_WORD *)DeviceExtension + 2224) )
        {
          HIDWORD(v57[9]) = v56[1];
          v37 = LODWORD(v57[11]) | 1;
          LODWORD(v57[10]) = v56[2];
          v38 = v56[3];
          LODWORD(v57[11]) |= 1u;
          if ( (v38 & 7) != 0 )
            LODWORD(v57[11]) = v37 & 0xFFFFFFFE;
          v39 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
          v40 = v39;
          if ( v39 )
          {
            *(_DWORD *)v39 = v56[1];
            *((_DWORD *)v39 + 1) = *(_DWORD *)(v23 + 8);
            *((_DWORD *)v39 + 2) = 24;
            *(_OWORD *)(v39 + 12) = *(_OWORD *)(v23 + 12);
            *((_DWORD *)v39 + 7) = *(_DWORD *)(v23 + 28);
            v43 = DeviceExtension[560](a1, v34, (PVOID *)v39);
            LODWORD(v23) = v43;
            if ( v43 < 0 )
              WdLogSingleEntry1(3LL, v43);
            ExFreePoolWithTag(v40, 0x74727044u);
            goto LABEL_44;
          }
          v41 = -1073741801LL;
          LODWORD(v23) = -1073741801;
          v42 = 6LL;
          goto LABEL_62;
        }
LABEL_56:
        LODWORD(v23) = -1073741637;
        v41 = -1073741637LL;
LABEL_61:
        v42 = 3LL;
LABEL_62:
        WdLogSingleEntry1(v42, v41);
        goto LABEL_44;
      }
    }
    LODWORD(v57[11]) |= 1u;
    LODWORD(v23) = -1073741637;
    *(_QWORD *)((char *)&v57[9] + 4) = 0LL;
    v41 = v36;
    goto LABEL_61;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    if ( a4 >= 4 )
    {
      if ( !*((_WORD *)DeviceExtension + 2260) )
        goto LABEL_98;
      LODWORD(P) = *a5 & 1;
      v30 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[573])(a1, &P);
      goto LABEL_31;
    }
LABEL_64:
    LODWORD(v23) = -1073741306;
    return (unsigned int)v23;
  }
  v20 = v19 - 4;
  if ( v20 )
  {
    if ( v20 != 4 )
      goto LABEL_98;
    if ( a6 >= 0x604 )
    {
      *a8 = 1540LL;
      memset(a7, 0, 0x604uLL);
      if ( *((_WORD *)DeviceExtension + 2260) )
      {
        P = ExAllocatePoolWithTag(PagedPool, 0x604uLL, 0x74727044u);
        PoolWithTag = (PVOID *)P;
        if ( !P )
        {
LABEL_13:
          v22 = -1073741801LL;
          LODWORD(v23) = -1073741801;
          v24 = 6LL;
LABEL_99:
          WdLogSingleEntry1(v24, v22);
          return (unsigned int)v23;
        }
        v25 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID))DeviceExtension[575])(a1, P);
        v23 = v25;
        if ( v25 >= 0 )
        {
          v26 = 256LL;
          *(_WORD *)a7 = *(_WORD *)P;
          *((_WORD *)a7 + 1) = *((_WORD *)PoolWithTag + 1);
          v27 = (char *)PoolWithTag - a7;
          v28 = a7 + 516;
          do
          {
            *(v28 - 256) = *(_WORD *)((char *)v28 + v27 - 512);
            *v28 = *(_WORD *)((char *)v28 + v27);
            v28[256] = *(_WORD *)((char *)v28 + v27 + 512);
            ++v28;
            --v26;
          }
          while ( v26 );
          PoolWithTag = (PVOID *)P;
          goto LABEL_82;
        }
LABEL_81:
        WdLogSingleEntry1(3LL, v23);
LABEL_82:
        ExFreePoolWithTag(PoolWithTag, 0x74727044u);
        return (unsigned int)v23;
      }
LABEL_98:
      LODWORD(v23) = -1073741637;
      v24 = 3LL;
      v22 = -1073741637LL;
      goto LABEL_99;
    }
    goto LABEL_64;
  }
  if ( a4 < 4 )
    goto LABEL_64;
  v29 = *a5;
  switch ( (_DWORD)v29 )
  {
    case 0:
      v15 = 0;
LABEL_29:
      if ( *((_WORD *)DeviceExtension + 2224) )
      {
        v30 = DeviceExtension[564](a1, v11, (PVOID *)v15);
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2260) )
          goto LABEL_98;
        v30 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))DeviceExtension[574])(a1, v15);
      }
LABEL_31:
      v23 = v30;
      if ( v30 >= 0 )
        return (unsigned int)v23;
      goto LABEL_32;
    case 1:
      v15 = 1;
      goto LABEL_29;
    case 2:
      v15 = 2;
      goto LABEL_29;
    case 3:
      v15 = 3;
      goto LABEL_29;
    case 4:
      goto LABEL_29;
  }
  WdLogSingleEntry1(3LL, v29);
  LODWORD(v23) = -1073741637;
  return (unsigned int)v23;
}
