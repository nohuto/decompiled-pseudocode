/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x1407658E4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407640C0 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, char **a2, _DWORD *a3)
{
  __int64 v3; // rsi
  char *v4; // r14
  _QWORD *v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  PVOID PoolWithTag; // rax
  PVOID *v9; // r13
  SIZE_T v10; // rbx
  int v11; // r15d
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  int v15; // ebx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // edx
  _WORD *i; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rdi
  PVOID v24; // rax
  _WORD *v25; // rax
  unsigned int v26; // r12d
  int v27; // esi
  char v28; // dl
  char v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rsi
  PVOID *v32; // rdi
  SIZE_T v34; // rdi
  char *v35; // rax
  unsigned int v36; // r10d
  char *v37; // rdi
  unsigned int v38; // esi
  unsigned int v39; // ebx
  unsigned int v40; // r15d
  unsigned int v41; // eax
  char *v42; // r14
  char v43; // r13
  char v44; // r9
  char v45; // r12
  unsigned int v46; // edx
  _WORD *v47; // rsi
  char v48; // dl
  char v49; // r8
  __int64 v50; // r8
  __int64 v51; // rcx
  char *v52; // r14
  _DWORD *v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // r11d
  int v57; // r10d
  unsigned int v58; // [rsp+38h] [rbp-69h]
  unsigned int v59; // [rsp+3Ch] [rbp-65h]
  void *Src; // [rsp+40h] [rbp-61h] BYREF
  PVOID P; // [rsp+48h] [rbp-59h]
  int v62; // [rsp+50h] [rbp-51h]
  unsigned int v63; // [rsp+54h] [rbp-4Dh]
  unsigned int v64; // [rsp+58h] [rbp-49h]
  unsigned int v65; // [rsp+5Ch] [rbp-45h]
  unsigned int v66; // [rsp+60h] [rbp-41h]
  char *v67; // [rsp+68h] [rbp-39h]
  _DWORD *v68; // [rsp+70h] [rbp-31h]
  int v69; // [rsp+78h] [rbp-29h]
  __int64 v70; // [rsp+80h] [rbp-21h]
  __int128 v71; // [rsp+88h] [rbp-19h] BYREF
  __int128 v72; // [rsp+98h] [rbp-9h]
  __int64 (__fastcall *v73)(_QWORD, void **); // [rsp+A8h] [rbp+7h]
  __int64 v74; // [rsp+108h] [rbp+67h]
  char v75; // [rsp+108h] [rbp+67h]
  int v78; // [rsp+120h] [rbp+7Fh]

  v74 = a1;
  v73 = 0LL;
  Src = 0LL;
  LOBYTE(v62) = 0;
  v3 = a1;
  v63 = -1;
  v4 = 0LL;
  v58 = -1;
  v67 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  v6 = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    ++v6;
  }
  while ( v7 != v5 );
  v66 = v6;
  v70 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x75737050u);
  P = PoolWithTag;
  v9 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v6);
    v10 = 4LL * v6;
    v11 = 1;
    v12 = ExAllocatePoolWithTag(PagedPool, v10, 0x75737050u);
    v68 = v12;
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v10);
      v78 = 1;
      v14 = 0;
      if ( (PVOID)v3 != IopRootDeviceNode )
      {
        while ( 1 )
        {
          v15 = PnpQueryInterface(*(PDEVICE_OBJECT *)(v3 + 32), 0LL, &v71);
          if ( v15 < 0 )
          {
            v4 = 0LL;
            goto LABEL_53;
          }
          if ( v73 )
          {
            Src = 0LL;
            v15 = v73(*((_QWORD *)&v71 + 1), &Src);
            if ( v15 < 0 )
              goto LABEL_112;
            if ( !Src )
              v15 = -1073741637;
            if ( v15 < 0 )
            {
LABEL_112:
              if ( Src )
              {
                ExFreePoolWithTag(Src, 0);
                Src = 0LL;
              }
            }
            else
            {
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v13[v14] = 0;
              for ( i = Src; *i; i += v22 + 1 )
              {
                ++v16;
                v20 = -1LL;
                v13[v14] = v16;
                do
                  ++v20;
                while ( i[v20] );
                v17 += v20 + 1;
                v21 = -1LL;
                do
                  ++v21;
                while ( i[v21] );
                if ( (unsigned int)v21 <= v18 )
                  LODWORD(v21) = v18;
                v18 = v21;
                v22 = -1LL;
                do
                  ++v22;
                while ( i[v22] );
              }
              LODWORD(v4) = v18 + (_DWORD)v4;
              v23 = 2LL * (unsigned int)(v17 + 1);
              v78 *= v16;
              v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x75737050u);
              *((_QWORD *)P + v14) = v24;
              if ( v24 )
              {
                memmove(v24, Src, v23);
                v25 = (_WORD *)*((_QWORD *)P + v14);
                if ( *v25 )
                {
                  v26 = v63;
                  LOBYTE(v27) = v62;
                  while ( 1 )
                  {
                    v28 = 0;
                    v29 = 0;
                    while ( 1 )
                    {
                      if ( *v25 == 33 )
                      {
                        v28 = 1;
                        goto LABEL_51;
                      }
                      if ( *v25 != 64 )
                        break;
                      v29 = 1;
LABEL_51:
                      ++v25;
                    }
                    v27 = (unsigned __int8)v27;
                    if ( v29 )
                      v27 = 1;
                    if ( v28 && v26 == -1 )
                      v26 = v14;
                    v30 = -1LL;
                    do
                      ++v30;
                    while ( v25[v30] );
                    v25 += v30 + 1;
                    if ( !*v25 )
                    {
                      v62 = v27;
                      v3 = v74;
                      v63 = v26;
                      v13 = v68;
                      break;
                    }
                  }
                }
                ++v14;
              }
              else
              {
                v15 = -1073741670;
              }
              ExFreePoolWithTag(Src, 0);
              v6 = v66;
              Src = 0LL;
            }
          }
          else
          {
            v15 = -1073741823;
          }
          if ( *((_QWORD *)&v72 + 1) )
            (*((void (__fastcall **)(_QWORD))&v72 + 1))(*((_QWORD *)&v71 + 1));
          if ( v15 < 0 )
          {
            v4 = v67;
            goto LABEL_53;
          }
          if ( v15 == 288 || v14 == v6 )
          {
            LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_66:
            v11 = v78;
            break;
          }
          v3 = *(_QWORD *)(v3 + 16);
          LODWORD(v4) = (_DWORD)v4 + 1;
          v74 = v3;
          if ( (PVOID)v3 == IopRootDeviceNode )
            goto LABEL_66;
        }
      }
      v15 = 0;
      v69 = 0;
      v34 = 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1);
      v35 = (char *)ExAllocatePoolWithTag(PagedPool, v34, 0x75737050u);
      v67 = v35;
      v4 = v35;
      if ( v35 )
      {
        memset(v35, 0, v34);
        v36 = v14 - 1;
        v59 = v14 - 1;
        v37 = v4;
        v64 = 0;
        v38 = 0;
        if ( !v11 )
        {
LABEL_102:
          *(_WORD *)v37 = 0;
          *a2 = v4;
          *a3 = (v37 - v4 + 2) >> 1;
          goto LABEL_53;
        }
        v39 = v78;
LABEL_70:
        v40 = v36;
        v65 = v39;
        v41 = v39;
        v75 = 0;
        v42 = v37;
        v43 = 0;
        v44 = 0;
        v45 = 0;
LABEL_71:
        v46 = v38 / (v41 / v68[v40]) % v68[v40];
        v47 = (_WORD *)*((_QWORD *)P + v40);
        if ( v46 )
        {
          v54 = v46;
          do
          {
            v55 = -1LL;
            do
              ++v55;
            while ( v47[v55] );
            v47 += v55 + 1;
            --v54;
          }
          while ( v54 );
          v39 = v78;
        }
        v48 = 0;
        v49 = 0;
        while ( 1 )
        {
          if ( *v47 == 33 )
          {
            v48 = 1;
          }
          else
          {
            if ( *v47 != 64 )
            {
              if ( v40 == v36 )
              {
                v56 = -1;
                v75 = v48;
                v43 = v48;
                v44 = v48;
                v45 = v48;
                if ( v48 )
                  v56 = v40;
                v58 = v56;
              }
              if ( v48 )
              {
                if ( !(_BYTE)v62 && !v45 )
                  goto LABEL_100;
                v58 = v40;
                v43 = 1;
                v45 = v44 != 0 ? v45 : 0;
              }
              else
              {
                v75 = 0;
              }
              if ( v49 )
              {
                v57 = -1;
                v75 = v48;
                v42 = v37;
                v43 = v48;
                v45 = v48;
                if ( v48 )
                  v57 = v40;
                v58 = v57;
              }
              v50 = -1LL;
              do
                ++v50;
              while ( v47[v50] );
              memmove(v42, v47, 2 * v50);
              v51 = -1LL;
              do
                ++v51;
              while ( v47[v51] );
              v52 = &v42[2 * v51];
              if ( v40 )
              {
                v53 = v68;
                v44 = v75;
                v38 = v64;
                v36 = v59;
                *(_WORD *)v52 = 35;
                v42 = v52 + 2;
                v41 = v65 / v53[v40--];
                v65 = v41;
                goto LABEL_71;
              }
              if ( !v43 || v45 && v58 <= v63 )
              {
                *(_WORD *)v52 = 0;
                v37 = v52 + 2;
              }
              v36 = v59;
LABEL_100:
              v38 = v64 + 1;
              v64 = v38;
              if ( v38 >= v39 )
              {
                v15 = v69;
                v4 = v67;
                v13 = v68;
                goto LABEL_102;
              }
              goto LABEL_70;
            }
            v49 = 1;
          }
          ++v47;
        }
      }
      v15 = -1073741670;
LABEL_53:
      v9 = (PVOID *)P;
    }
    else
    {
      v15 = -1073741670;
    }
    if ( v66 )
    {
      v31 = v70;
      v32 = v9;
      do
      {
        if ( *v32 )
          ExFreePoolWithTag(*v32, 0);
        ++v32;
        --v31;
      }
      while ( v31 );
    }
    ExFreePoolWithTag(v9, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( v15 < 0 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
