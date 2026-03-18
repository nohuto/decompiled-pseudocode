/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C02CF034
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C013AB90 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  __int64 (__fastcall **v8)(struct _DEVICE_OBJECT *, __int64, int *); // rbx
  unsigned int v9; // edi
  struct _DEVICE_OBJECT *v11; // r13
  __int64 v13; // r8
  unsigned int v14; // esi
  int v15; // r8d
  __int64 v16; // r8
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  _WORD *v31; // r14
  __int64 v32; // rax
  char *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  ULONG TimeIncrement; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 (__fastcall *v43)(struct _DEVICE_OBJECT *, __int64, int *); // rax
  unsigned int v44; // r14d
  __int64 v45; // rdx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rsi
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // eax
  int v67; // esi
  char *PoolWithTag; // rsi
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // esi
  int v77; // eax
  int v78; // eax
  int v79; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v80; // [rsp+34h] [rbp-85h]
  int v81; // [rsp+38h] [rbp-81h] BYREF
  __int64 v82; // [rsp+40h] [rbp-79h] BYREF
  __int64 v83; // [rsp+48h] [rbp-71h]
  _QWORD v84[12]; // [rsp+50h] [rbp-69h] BYREF

  v8 = *(__int64 (__fastcall ***)(struct _DEVICE_OBJECT *, __int64, int *))(a1 + 64);
  v9 = 0;
  v11 = (struct _DEVICE_OBJECT *)a1;
  v80 = a2;
  *a8 = 0LL;
  if ( *((_BYTE *)v8 + 1161) )
    return 3221226166LL;
  v13 = (unsigned int)(a3 - 2296832);
  if ( !(_DWORD)v13 )
  {
    if ( a6 < 8 )
    {
      LODWORD(v23) = -1073741789;
      return (unsigned int)v23;
    }
    a1 = 0LL;
    v79 = 0;
    *(_QWORD *)a7 = 0LL;
    *a8 = 8LL;
    if ( *((_WORD *)v8 + 2260) )
    {
      *(_DWORD *)a7 = 3;
      v77 = v8[571](v11, a2, &v79);
      v23 = v77;
      if ( v77 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)v79 ^ (unsigned __int8)(a7[4] ^ (v79 ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ ((unsigned __int8)v79 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ ((unsigned __int8)v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(a7[4] ^ (v79 ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ (unsigned __int8)(a7[4] ^ (v79 ^ *((_DWORD *)a7 + 1)) & 1)) & 4;
        return (unsigned int)v23;
      }
    }
    else
    {
      if ( !*((_WORD *)v8 + 2296) )
      {
        if ( *((_WORD *)v8 + 2340) )
        {
          *(_DWORD *)a7 = 1;
          LODWORD(v23) = 0;
          return (unsigned int)v23;
        }
        goto LABEL_98;
      }
      *(_DWORD *)a7 = 2;
      v78 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, int *))v8[581])(v11, &v79);
      v23 = v78;
      if ( v78 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)v79 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ (v79 ^ *((_DWORD *)a7 + 1) ^ ((unsigned __int8)v79 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1) & 2;
        return (unsigned int)v23;
      }
    }
    goto LABEL_34;
  }
  v14 = 4;
  v15 = v13 - 4;
  if ( !v15 )
  {
    if ( a6 < 0xD0 )
      goto LABEL_63;
    *a8 = 208LL;
    memset(a7, 0, 0xD0uLL);
    if ( *((_WORD *)v8 + 2260) )
    {
      *(_DWORD *)a7 = 3;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xCCuLL, 0x74727044u);
      if ( !PoolWithTag )
        goto LABEL_13;
      v69 = v8[572](v11, v80, (int *)PoolWithTag);
      v23 = v69;
      if ( v69 < 0 )
      {
        v75 = WdLogNewEntry5_WdWarning(v71, v70, v72);
        *(_QWORD *)(v75 + 24) = v23;
        WdLogEvent5_WdWarning(v75);
      }
      else
      {
        *((_DWORD *)a7 + 1) = *(_DWORD *)PoolWithTag;
        *((_DWORD *)a7 + 2) = *((_DWORD *)PoolWithTag + 1);
        *((_DWORD *)a7 + 3) = *((_DWORD *)PoolWithTag + 2);
        if ( *((_DWORD *)PoolWithTag + 1) )
        {
          do
          {
            v73 = v9++;
            v74 = 3 * v73;
            *(_DWORD *)&a7[4 * v74 + 16] = *(_DWORD *)&PoolWithTag[12 * v73 + 12];
            *(_DWORD *)&a7[4 * v74 + 20] = *(_DWORD *)&PoolWithTag[12 * v73 + 16];
            *(_DWORD *)&a7[4 * v74 + 24] = *(_DWORD *)&PoolWithTag[12 * v73 + 20];
          }
          while ( v9 < *((_DWORD *)PoolWithTag + 1) );
        }
      }
      v33 = PoolWithTag;
LABEL_82:
      ExFreePoolWithTag(v33, 0x74727044u);
      return (unsigned int)v23;
    }
    if ( *((_WORD *)v8 + 2296) )
    {
      v76 = 2;
    }
    else
    {
      if ( !*((_WORD *)v8 + 2340) )
        goto LABEL_98;
      v76 = 1;
    }
    *(_DWORD *)a7 = v76;
    v35 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))v8[589])(
            v11,
            103LL,
            a7 + 4,
            a7 + 5);
    goto LABEL_33;
  }
  v16 = (unsigned int)(v15 - 4);
  if ( !(_DWORD)v16 )
  {
    if ( a6 < 0xC )
      goto LABEL_63;
    *a8 = 12LL;
    *(_QWORD *)a7 = 0LL;
    *((_DWORD *)a7 + 2) = 0;
    if ( *((_WORD *)v8 + 2260) )
    {
      v82 = 0LL;
      *(_DWORD *)a7 = 3;
      v66 = v8[570]((struct _DEVICE_OBJECT *)a1, a2, (int *)&v82);
      v23 = v66;
      if ( v66 >= 0 )
      {
        *(_QWORD *)(a7 + 4) = v82;
        return (unsigned int)v23;
      }
LABEL_34:
      v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = v23;
LABEL_99:
      WdLogEvent5_WdWarning(v39);
      return (unsigned int)v23;
    }
    if ( *((_WORD *)v8 + 2296) )
    {
      v67 = 2;
    }
    else
    {
      if ( !*((_WORD *)v8 + 2340) )
      {
        LODWORD(v23) = -1073741637;
        v39 = WdLogNewEntry5_WdWarning(a1, a2, v16);
        *(_QWORD *)(v39 + 24) = *(int *)a7;
        goto LABEL_99;
      }
      v67 = 1;
    }
    *(_DWORD *)a7 = v67;
    v35 = ((__int64 (__fastcall *)(unsigned __int64, char *))v8[591])(a1, a7 + 4);
LABEL_33:
    v23 = v35;
    if ( v35 >= 0 )
      return (unsigned int)v23;
    goto LABEL_34;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    memset(v84, 0, sizeof(v84));
    v84[0] = 0x6000000028LL;
    memset(&v84[1], 0, 36);
    v83 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v84[8]) = 1;
    v84[6] = v83 * TimeIncrement;
    v43 = v8[487];
    if ( v43 )
      v84[7] = *(_QWORD *)((char *)v43 + 316);
    v44 = v80;
    v45 = 32LL;
    HIDWORD(v84[8]) = v80;
    if ( a4 < 0x20 )
    {
      LODWORD(v23) = -1073741306;
LABEL_44:
      HIDWORD(v84[10]) = v23;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v84, 0x200000000LL);
      return (unsigned int)v23;
    }
    v46 = *(_DWORD *)a5;
    LODWORD(v84[9]) = v46;
    if ( v46 > 0 )
    {
      if ( v46 <= 2 )
      {
        LODWORD(v84[11]) |= 1u;
        v41 = a5[4];
        *(_QWORD *)((char *)&v84[9] + 4) = v41;
        if ( *((_WORD *)v8 + 2340) )
        {
          LOBYTE(v45) = v41;
          v62 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64))v8[590])(v11, v45);
          v23 = v62;
          if ( v62 >= 0 )
            goto LABEL_44;
          v61 = WdLogNewEntry5_WdWarning(v64, v63, v65);
          *(_QWORD *)(v61 + 24) = v23;
LABEL_61:
          WdLogEvent5_WdWarning(v61);
          goto LABEL_44;
        }
LABEL_56:
        LODWORD(v23) = -1073741637;
        v61 = WdLogNewEntry5_WdWarning(v41, 32LL, v42);
        *(_QWORD *)(v61 + 24) = -1073741637LL;
        goto LABEL_61;
      }
      if ( v46 == 3 )
      {
        if ( *((_WORD *)v8 + 2260) )
        {
          HIDWORD(v84[9]) = *((_DWORD *)a5 + 1);
          v47 = LODWORD(v84[11]) | 1;
          LODWORD(v84[10]) = *((_DWORD *)a5 + 2);
          v48 = *((_DWORD *)a5 + 3);
          LODWORD(v84[11]) |= 1u;
          if ( (v48 & 7) != 0 )
            LODWORD(v84[11]) = v47 & 0xFFFFFFFE;
          v49 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
          v54 = v49;
          if ( v49 )
          {
            *(_DWORD *)v49 = *((_DWORD *)a5 + 1);
            *((_DWORD *)v49 + 1) = *((_DWORD *)a5 + 2);
            *((_DWORD *)v49 + 2) = 24;
            *(_OWORD *)(v49 + 12) = *(_OWORD *)(a5 + 12);
            *((_DWORD *)v49 + 7) = *((_DWORD *)a5 + 7);
            v56 = v8[569](v11, v44, (int *)v49);
            v23 = v56;
            if ( v56 < 0 )
            {
              v60 = WdLogNewEntry5_WdWarning(v58, v57, v59);
              *(_QWORD *)(v60 + 24) = v23;
              WdLogEvent5_WdWarning(v60);
            }
            ExFreePoolWithTag(v54, 0x74727044u);
          }
          else
          {
            LODWORD(v23) = -1073741801;
            v55 = WdLogNewEntry5_WdLowResource(v51, v50, v52, v53);
            *(_QWORD *)(v55 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v55);
          }
          goto LABEL_44;
        }
        goto LABEL_56;
      }
    }
    LODWORD(v84[11]) |= 1u;
    LODWORD(v23) = -1073741637;
    *(_QWORD *)((char *)&v84[9] + 4) = 0LL;
    v61 = WdLogNewEntry5_WdWarning(v41, 32LL, v42);
    *(_QWORD *)(v61 + 24) = *(int *)a5;
    goto LABEL_61;
  }
  v13 = (unsigned int)(v17 - 4);
  if ( !(_DWORD)v13 )
  {
    if ( a4 < 4 )
      goto LABEL_63;
    if ( !*((_WORD *)v8 + 2296) )
      goto LABEL_98;
    v81 = *(_DWORD *)a5 & 1;
    v35 = ((__int64 (__fastcall *)(unsigned __int64, int *))v8[582])(a1, &v81);
    goto LABEL_33;
  }
  v13 = (unsigned int)(v13 - 4);
  if ( !(_DWORD)v13 )
  {
    if ( a4 < 4 )
      goto LABEL_63;
    a1 = *(unsigned int *)a5;
    if ( (_DWORD)a1 )
    {
      a1 = (unsigned int)(a1 - 1);
      if ( (_DWORD)a1 )
      {
        a1 = (unsigned int)(a1 - 1);
        if ( (_DWORD)a1 )
        {
          a1 = (unsigned int)(a1 - 1);
          if ( (_DWORD)a1 )
          {
            if ( (_DWORD)a1 != 1 )
            {
              v34 = WdLogNewEntry5_WdWarning(a1, a2, v13);
              *(_QWORD *)(v34 + 24) = *(int *)a5;
              WdLogEvent5_WdWarning(v34);
              LODWORD(v23) = -1073741637;
              return (unsigned int)v23;
            }
          }
          else
          {
            v14 = 3;
          }
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
      v14 = 0;
    }
    if ( *((_WORD *)v8 + 2260) )
    {
      v35 = v8[573](v11, a2, (int *)v14);
    }
    else
    {
      if ( !*((_WORD *)v8 + 2296) )
        goto LABEL_98;
      v35 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))v8[583])(v11, v14);
    }
    goto LABEL_33;
  }
  if ( (_DWORD)v13 != 4 )
  {
LABEL_98:
    LODWORD(v23) = -1073741637;
    v39 = WdLogNewEntry5_WdWarning(a1, a2, v13);
    *(_QWORD *)(v39 + 24) = -1073741637LL;
    goto LABEL_99;
  }
  if ( a6 < 0x604 )
  {
LABEL_63:
    LODWORD(v23) = -1073741306;
    return (unsigned int)v23;
  }
  *a8 = 1540LL;
  memset(a7, 0, 0x604uLL);
  if ( !*((_WORD *)v8 + 2296) )
    goto LABEL_98;
  v22 = (char *)ExAllocatePoolWithTag(PagedPool, 0x604uLL, 0x74727044u);
  if ( v22 )
  {
    v25 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))v8[584])(v11, v22);
    v23 = v25;
    if ( v25 < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v32 + 24) = v23;
      WdLogEvent5_WdWarning(v32);
    }
    else
    {
      v29 = 256LL;
      *(_WORD *)a7 = *(_WORD *)v22;
      *((_WORD *)a7 + 1) = *((_WORD *)v22 + 1);
      v30 = v22 - a7;
      v31 = a7 + 516;
      do
      {
        *(v31 - 256) = *(_WORD *)((char *)v31 + v30 - 512);
        *v31 = *(_WORD *)((char *)v31 + v30);
        v31[256] = *(_WORD *)((char *)v31 + v30 + 512);
        ++v31;
        --v29;
      }
      while ( v29 );
    }
    v33 = v22;
    goto LABEL_82;
  }
LABEL_13:
  LODWORD(v23) = -1073741801;
  v24 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
  *(_QWORD *)(v24 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v24);
  return (unsigned int)v23;
}
