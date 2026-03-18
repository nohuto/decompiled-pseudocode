/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x14074ABF0
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x14076AD40 (PiQueryRemovableDeviceOverride.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  PVOID *v9; // r13
  _DWORD *v10; // r12
  int v11; // r15d
  unsigned int v12; // r13d
  int v13; // edi
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edx
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r14
  void *v22; // rax
  _WORD *v23; // rax
  unsigned int v24; // r12d
  int v25; // ebx
  char v26; // dl
  char v27; // r8
  __int64 v28; // rcx
  PVOID *v29; // rbx
  __int64 v31; // rax
  unsigned int v32; // r10d
  char *v33; // rbx
  unsigned int v34; // esi
  unsigned int v35; // edi
  unsigned int v36; // r15d
  unsigned int v37; // eax
  char *v38; // r14
  char v39; // r13
  char v40; // r9
  char v41; // r12
  unsigned int v42; // edx
  _WORD *v43; // rsi
  char v44; // dl
  char v45; // r8
  __int64 v46; // r8
  __int64 v47; // rcx
  char *v48; // r14
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r10d
  unsigned int v53; // [rsp+38h] [rbp-69h]
  unsigned int v54; // [rsp+3Ch] [rbp-65h]
  void *Src; // [rsp+40h] [rbp-61h] BYREF
  int v56; // [rsp+48h] [rbp-59h]
  unsigned int v57; // [rsp+4Ch] [rbp-55h]
  unsigned int v58; // [rsp+50h] [rbp-51h]
  PVOID P; // [rsp+58h] [rbp-49h]
  unsigned int v60; // [rsp+60h] [rbp-41h]
  int v61; // [rsp+64h] [rbp-3Dh]
  __int64 Pool2; // [rsp+68h] [rbp-39h]
  _BYTE *v63; // [rsp+70h] [rbp-31h]
  __int64 v64; // [rsp+78h] [rbp-29h]
  int v65; // [rsp+80h] [rbp-21h]
  __int128 v66; // [rsp+88h] [rbp-19h] BYREF
  __int128 v67; // [rsp+98h] [rbp-9h]
  __int64 (__fastcall *v68)(_QWORD, void **); // [rsp+A8h] [rbp+7h]
  __int64 v69; // [rsp+108h] [rbp+67h]
  char v70; // [rsp+108h] [rbp+67h]
  unsigned int v73; // [rsp+120h] [rbp+7Fh]

  v69 = a1;
  v3 = a1;
  Src = 0LL;
  v68 = 0LL;
  LOBYTE(v56) = 0;
  v57 = -1;
  v73 = -1;
  v4 = 0LL;
  v63 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  LODWORD(v6) = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v7 != v5 );
  v8 = (unsigned int)v6;
  v61 = v6;
  v64 = (unsigned int)v6;
  P = (PVOID)ExAllocatePool2(256LL, 8 * v6, 1970499664LL);
  v9 = (PVOID *)P;
  if ( !P )
    return (unsigned int)-1073741670;
  Pool2 = ExAllocatePool2(256LL, 4 * v6, 1970499664LL);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_53;
  }
  v11 = 1;
  v53 = 1;
  v12 = 0;
  if ( (PVOID)v3 == IopRootDeviceNode )
    goto LABEL_66;
  while ( 1 )
  {
    v13 = PnpQueryInterface(*(PDEVICE_OBJECT *)(v3 + 32), 0LL, &v66);
    if ( v13 < 0 )
    {
      v4 = 0LL;
      goto LABEL_52;
    }
    if ( !v68 )
    {
      v13 = -1073741823;
      goto LABEL_42;
    }
    Src = 0LL;
    v13 = v68(*((_QWORD *)&v66 + 1), &Src);
    if ( v13 < 0 )
      goto LABEL_111;
    if ( !Src )
    {
      v13 = -1073741637;
LABEL_111:
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0);
        Src = 0LL;
      }
      goto LABEL_42;
    }
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v10[v12] = 0;
    v17 = Src;
    if ( *(_WORD *)Src )
    {
      do
      {
        ++v14;
        v18 = -1LL;
        v10[v12] = v14;
        do
          ++v18;
        while ( v17[v18] );
        v15 += v18 + 1;
        v19 = -1LL;
        do
          ++v19;
        while ( v17[v19] );
        if ( (unsigned int)v19 <= v16 )
          LODWORD(v19) = v16;
        v16 = v19;
        v20 = -1LL;
        do
          ++v20;
        while ( v17[v20] );
        v17 += v20 + 1;
      }
      while ( *v17 );
      v3 = v69;
    }
    LODWORD(v4) = v16 + (_DWORD)v4;
    v21 = 2LL * (unsigned int)(v15 + 1);
    v53 *= v14;
    v22 = (void *)ExAllocatePool2(256LL, v21, 1970499664LL);
    *((_QWORD *)P + v12) = v22;
    if ( v22 )
    {
      memmove(v22, Src, v21);
      v23 = (_WORD *)*((_QWORD *)P + v12);
      if ( *v23 )
      {
        v24 = v57;
        LOBYTE(v25) = v56;
        while ( 1 )
        {
          v26 = 0;
          v27 = 0;
          while ( 1 )
          {
            if ( *v23 == 33 )
            {
              v26 = 1;
              goto LABEL_50;
            }
            if ( *v23 != 64 )
              break;
            v27 = 1;
LABEL_50:
            ++v23;
          }
          v25 = (unsigned __int8)v25;
          if ( v27 )
            v25 = 1;
          if ( v26 && v24 == -1 )
            v24 = v12;
          v28 = -1LL;
          do
            ++v28;
          while ( v23[v28] );
          v23 += v28 + 1;
          if ( !*v23 )
          {
            v56 = v25;
            v3 = v69;
            v57 = v24;
            v10 = (_DWORD *)Pool2;
            break;
          }
        }
      }
      ++v12;
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(Src, 0);
    LODWORD(v6) = v61;
    Src = 0LL;
LABEL_42:
    if ( *((_QWORD *)&v67 + 1) )
      (*((void (__fastcall **)(_QWORD))&v67 + 1))(*((_QWORD *)&v66 + 1));
    if ( v13 < 0 )
    {
      v4 = v63;
      goto LABEL_52;
    }
    if ( v13 == 288 || v12 == (_DWORD)v6 )
      break;
    v3 = *(_QWORD *)(v3 + 16);
    LODWORD(v4) = (_DWORD)v4 + 1;
    v69 = v3;
    if ( (PVOID)v3 == IopRootDeviceNode )
      goto LABEL_65;
  }
  LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_65:
  v11 = v53;
LABEL_66:
  v65 = 0;
  v13 = 0;
  v31 = ExAllocatePool2(256LL, 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1), 1970499664LL);
  v63 = (_BYTE *)v31;
  v4 = (_BYTE *)v31;
  if ( !v31 )
  {
    v13 = -1073741670;
    goto LABEL_52;
  }
  v58 = 0;
  v32 = v12 - 1;
  v54 = v12 - 1;
  v33 = (char *)v31;
  v34 = 0;
  if ( !v11 )
    goto LABEL_101;
  v35 = v53;
  while ( 2 )
  {
    v36 = v32;
    v37 = v35;
    v38 = v33;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    while ( 2 )
    {
      v60 = v37;
      v70 = v40;
      v42 = v34 / (v37 / *(_DWORD *)(Pool2 + 4LL * v36)) % *(_DWORD *)(Pool2 + 4LL * v36);
      v43 = (_WORD *)*((_QWORD *)P + v36);
      if ( v42 )
      {
        v50 = v42;
        do
        {
          v51 = -1LL;
          do
            ++v51;
          while ( v43[v51] );
          v43 += v51 + 1;
          --v50;
        }
        while ( v50 );
        v32 = v54;
      }
      v44 = 0;
      v45 = 0;
      while ( 2 )
      {
        if ( *v43 == 33 )
        {
          v44 = 1;
LABEL_86:
          ++v43;
          continue;
        }
        break;
      }
      if ( *v43 == 64 )
      {
        v45 = 1;
        goto LABEL_86;
      }
      v35 = v53;
      if ( v36 == v32 )
      {
        v70 = v44;
        v39 = v44;
        v40 = v44;
        v41 = v44;
        if ( v44 )
        {
          v73 = v36;
          goto LABEL_76;
        }
        v73 = -1;
LABEL_88:
        v70 = 0;
        goto LABEL_78;
      }
      if ( !v44 )
        goto LABEL_88;
LABEL_76:
      if ( !(_BYTE)v56 && !v41 )
        goto LABEL_99;
      v73 = v36;
      v39 = 1;
      v41 = v40 != 0 ? v41 : 0;
LABEL_78:
      if ( v45 )
      {
        v52 = -1;
        v70 = v44;
        v38 = v33;
        v39 = v44;
        v41 = v44;
        if ( v44 )
          v52 = v36;
        v73 = v52;
      }
      v46 = -1LL;
      do
        ++v46;
      while ( v43[v46] );
      memmove(v38, v43, 2 * v46);
      v47 = -1LL;
      do
        ++v47;
      while ( v43[v47] );
      v48 = &v38[2 * v47];
      if ( v36 )
      {
        v49 = Pool2;
        v40 = v70;
        v34 = v58;
        v32 = v54;
        *(_WORD *)v48 = 35;
        v38 = v48 + 2;
        v37 = v60 / *(_DWORD *)(v49 + 4LL * v36--);
        continue;
      }
      break;
    }
    if ( !v39 || v41 && v73 <= v57 )
    {
      *(_WORD *)v48 = 0;
      v33 = v48 + 2;
    }
    v32 = v54;
LABEL_99:
    v34 = v58 + 1;
    v58 = v34;
    if ( v34 < v53 )
      continue;
    break;
  }
  v13 = v65;
  v10 = (_DWORD *)Pool2;
LABEL_101:
  v4 = v63;
  *(_WORD *)v33 = 0;
  *a2 = v4;
  *a3 = (v33 - v4 + 2) >> 1;
LABEL_52:
  v8 = v64;
  v9 = (PVOID *)P;
LABEL_53:
  if ( v61 )
  {
    v29 = v9;
    do
    {
      if ( *v29 )
        ExFreePoolWithTag(*v29, 0);
      ++v29;
      --v8;
    }
    while ( v8 );
  }
  ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v13 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v13;
}
