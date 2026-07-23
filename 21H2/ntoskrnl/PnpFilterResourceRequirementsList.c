/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x1407AD9DC
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14024F980 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x14037CDA0 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpCmResourcesToIoResources @ 0x1407B6210 (PnpCmResourcesToIoResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, unsigned int **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // r15
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // rdi
  __int64 v12; // r9
  _DWORD *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r8
  char v16; // al
  unsigned int v17; // edx
  unsigned int v18; // eax
  _DWORD *v19; // r14
  int v20; // r10d
  _DWORD *v21; // rdx
  int v22; // r9d
  _DWORD *v23; // r8
  bool v24; // zf
  int v25; // ecx
  int v26; // r11d
  __int64 v27; // r10
  struct _IO_RESOURCE_DESCRIPTOR *v28; // r8
  __int64 v29; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // rax
  int v31; // r9d
  unsigned int v32; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v33; // r11
  ULONG v34; // r10d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v35; // r15
  unsigned __int64 v36; // r12
  unsigned int v37; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v38; // rdi
  UCHAR Type; // r12
  unsigned __int64 v40; // rax
  int ShareDisposition; // eax
  ULONGLONG Vector; // r13
  int v43; // edx
  bool v44; // cc
  int v45; // r11d
  ULONGLONG Length; // r9
  ULONGLONG v47; // r8
  unsigned __int64 v48; // r10
  ULONGLONG v49; // rcx
  ULONGLONG v50; // rax
  UCHAR v51; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v54; // ecx
  unsigned int v55; // r14d
  unsigned int *v56; // rax
  unsigned int *v57; // rdi
  unsigned int *v58; // rax
  unsigned int v59; // eax
  int v60; // r11d
  _DWORD *v61; // r8
  _DWORD *v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r9
  __int16 v65; // ax
  char *v66; // rcx
  ULONGLONG v67; // rax
  int v69; // r12d
  int v70; // r12d
  int v71; // r12d
  int v72; // r12d
  int v73; // r12d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+28h] [rbp-89h]
  unsigned __int64 v77; // [rsp+30h] [rbp-81h]
  int v78; // [rsp+38h] [rbp-79h]
  unsigned int v79; // [rsp+3Ch] [rbp-75h]
  int v80; // [rsp+40h] [rbp-71h]
  int v81; // [rsp+44h] [rbp-6Dh]
  __int64 v82; // [rsp+48h] [rbp-69h]
  __int16 v83; // [rsp+54h] [rbp-5Dh]
  ULONG v84; // [rsp+58h] [rbp-59h]
  unsigned int v85; // [rsp+5Ch] [rbp-55h]
  int v86; // [rsp+60h] [rbp-51h]
  int v87; // [rsp+64h] [rbp-4Dh]
  ULONGLONG Start; // [rsp+68h] [rbp-49h] BYREF
  int v89; // [rsp+70h] [rbp-41h]
  int v90; // [rsp+74h] [rbp-3Dh]
  int v91; // [rsp+78h] [rbp-39h]
  ULONGLONG MinimumAddress; // [rsp+80h] [rbp-31h] BYREF
  ULONGLONG MaximumAddress; // [rsp+88h] [rbp-29h] BYREF
  ULONGLONG Alignment; // [rsp+90h] [rbp-21h] BYREF
  _DWORD *v95; // [rsp+98h] [rbp-19h]
  ULONGLONG v96; // [rsp+A0h] [rbp-11h]
  unsigned int *v97; // [rsp+A8h] [rbp-9h]
  __int64 v98; // [rsp+B0h] [rbp-1h]
  unsigned int *v99; // [rsp+B8h] [rbp+7h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v100; // [rsp+118h] [rbp+67h]
  UCHAR v101; // [rsp+118h] [rbp+67h]

  v4 = 0;
  v95 = 0LL;
  v6 = a2;
  v80 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = (unsigned int *)PnpCmResourcesToIoResources(Src, a2, 1LL);
    return 0LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*Src, 0x75737050u);
  v97 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_153;
  v11 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v6 + 1);
  v12 = *v6;
  v99 = v6 + 1;
  v13 = v6 + 1;
  do
  {
    v14 = v13[3];
    v13 += 4;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = *(_BYTE *)v13;
        v17 = 0;
        if ( *(_BYTE *)v13 == 5 )
        {
          v17 = v13[1];
        }
        else if ( v16 >= -126 && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 = (_DWORD *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v81 = v8;
  if ( !v8 )
  {
LABEL_153:
    *a3 = v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = 0;
  v87 = 0;
  v21 = v10 + 8;
  v22 = v18 - 1;
  if ( (int)(v18 - 1) >= 0 )
  {
    do
    {
      v23 = v21 + 2;
      v21 += 8 * (unsigned int)v21[1] + 2;
      while ( v23 < v21 )
      {
        v24 = *((_BYTE *)v23 + 1) == 0;
        v25 = v20 + 1;
        *((_BYTE *)v23 + 3) = 0;
        if ( !v24 )
          v25 = v20;
        v23 += 8;
        v20 = v25;
      }
      --v22;
    }
    while ( v22 >= 0 );
    v18 = v10[7];
    v87 = v20;
  }
  v26 = v18 - 1;
  v91 = v18 - 1;
  v86 = v18 - 1;
  if ( (int)(v18 - 1) >= 0 )
  {
    while ( 2 )
    {
      v83 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v83 = 1;
      v27 = (unsigned int)v19[1];
      v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v29 = (__int64)&v19[8 * v27 + 2];
      v98 = v27;
      v77 = v29;
      if ( v19 + 2 == (_DWORD *)v29 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_79;
      }
      v30 = v11;
      v31 = 1;
      v32 = 0;
      v100 = v11;
      v78 = 1;
      v85 = 0;
      if ( *v6 )
      {
        do
        {
          v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v30->u.Memory48 + 1);
          v34 = 0;
          Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)(&v30->u.Memory48 + 1);
          v84 = 0;
          if ( v30->u.Generic.Length )
          {
            v35 = v100;
            do
            {
              if ( v33->Type == 5 )
              {
                LowPart = v33->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v33->Type != 129 && (unsigned __int8)(v33->Type - 1) <= 6u )
                {
                  v36 = v77;
                  v37 = 0;
                  v79 = 0;
                  while ( 1 )
                  {
                    v38 = v28;
                    if ( (unsigned __int64)v28 >= v36 )
                      goto LABEL_66;
                    Type = v33->Type;
                    v40 = v77;
                    v101 = v33->Type;
                    while ( 1 )
                    {
                      if ( v38->Type != Type || v38->Spare1 )
                        goto LABEL_39;
                      ShareDisposition = v33->ShareDisposition;
                      Vector = 0LL;
                      v43 = v38->ShareDisposition;
                      v44 = (unsigned __int8)(v33->ShareDisposition - 1) <= 2u;
                      Start = 0LL;
                      MinimumAddress = 0LL;
                      v45 = ShareDisposition;
                      MaximumAddress = 0LL;
                      if ( !v44 )
                        v45 = v43;
                      v82 = 1LL;
                      v89 = v45;
                      Alignment = 1LL;
                      if ( (unsigned __int8)(v43 - 1) > 2u )
                        v43 = (unsigned __int8)v45;
                      Length = 0LL;
                      v90 = v43;
                      v47 = 0LL;
                      v48 = 1LL;
                      if ( Type != 1 )
                      {
                        if ( Type == 2 )
                        {
                          Vector = Descriptor->u.Interrupt.Vector;
                          v49 = Vector;
LABEL_49:
                          Length = v38->u.Port.Length;
                          v47 = v38->u.Port.Alignment;
LABEL_50:
                          v50 = 1LL;
                          goto LABEL_51;
                        }
                        if ( Type != 3 )
                        {
                          if ( Type == 4 )
                          {
                            v49 = Descriptor->u.Generic.Start.LowPart;
                            Vector = v49;
                            goto LABEL_49;
                          }
                          if ( Type == 6 )
                          {
                            Length = v38->u.Port.Alignment;
                            v47 = v38->u.Port.MinimumAddress.LowPart;
                            v50 = v38->u.Port.Length;
                            Vector = Descriptor->u.Generic.Start.LowPart;
                            v48 = Descriptor->u.Interrupt.Vector;
                            v49 = (unsigned int)(v48 + Vector - 1);
                            goto LABEL_98;
                          }
                          if ( Type != 7 )
                          {
                            v49 = 0LL;
                            goto LABEL_50;
                          }
                        }
                      }
                      v67 = RtlCmDecodeMemIoResource(Descriptor, &Start);
                      Vector = Start;
                      v96 = v67;
                      Start = v67 + Start - 1;
                      v50 = RtlIoDecodeMemIoResource(v38, &Alignment, &MinimumAddress, &MaximumAddress);
                      Length = MinimumAddress;
                      v47 = MaximumAddress;
                      v49 = Start;
                      v48 = v96;
                      LOBYTE(v45) = v89;
                      LOBYTE(v43) = v90;
LABEL_98:
                      v82 = v50;
LABEL_51:
                      if ( v79 )
                      {
                        v78 = 0;
                        if ( v47 >= v49
                          && (_BYTE)v45 == (_BYTE)v43
                          && Length <= Vector
                          && v50 >= v48
                          && ((Alignment - 1) & Vector) == 0 )
                        {
                          v69 = Type - 1;
                          if ( !v69 )
                            goto LABEL_127;
                          v70 = v69 - 1;
                          if ( !v70 )
                            goto LABEL_137;
                          v71 = v70 - 1;
                          if ( !v71 )
                            goto LABEL_127;
                          v72 = v71 - 1;
                          if ( v72 )
                          {
                            v73 = v72 - 2;
                            if ( v73 )
                            {
                              if ( v73 == 1 )
                              {
LABEL_127:
                                v38->u.Port.MinimumAddress.QuadPart = Vector;
                                v38->u.Port.MaximumAddress.QuadPart = Vector + v82 - 1;
                              }
                            }
                            else
                            {
                              v38->u.Port.Alignment = Vector;
                              v38->u.Port.MinimumAddress.LowPart = Vector + v82 - 1;
                            }
                          }
                          else
                          {
LABEL_137:
                            v38->u.Port.Length = Vector;
                            v38->u.Port.Alignment = v49;
                          }
                          ++*(_WORD *)v19;
                          v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v24 = (v38->Option & 8) == 0;
                          v33 = Descriptor;
                          v38->Spare1 = 0x80;
                          v38->Flags = Descriptor->Flags;
                          if ( !v24 )
                          {
                            for ( j = v38 - 1; j >= v28; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v36 = v77;
                          v38->Option = 1;
                          while ( (unsigned __int64)++v38 < v77 && (v38->Option & 8) != 0 )
                          {
                            v38->Type = 0;
                            --v19[1];
                          }
                          v31 = 0;
LABEL_41:
                          v37 = v79;
                          goto LABEL_66;
                        }
                        goto LABEL_100;
                      }
                      if ( Length == Vector && (_BYTE)v45 == (_BYTE)v43 && v47 >= v49 && v50 >= v48 )
                        break;
LABEL_100:
                      v33 = Descriptor;
                      Type = v101;
                      v40 = v77;
LABEL_39:
                      if ( (unsigned __int64)++v38 >= v40 )
                      {
                        v36 = v77;
                        v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        v31 = v78;
                        goto LABEL_41;
                      }
                    }
                    v31 = v78;
                    v24 = v47 == v49;
                    v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( !v24 )
                      v31 = 0;
                    ++*(_WORD *)v19;
                    v24 = (v38->Option & 8) == 0;
                    v78 = v31;
                    v38->Spare1 = 0x80;
                    if ( !v24 )
                    {
                      for ( k = v38 - 1; k >= v28; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v33 = Descriptor;
                    v51 = v38->Type;
                    v38->Option = 1;
                    v38->Flags = Descriptor->Flags;
                    if ( ((v51 - 1) & 0xF9) != 0 || v51 == 5 )
                    {
                      if ( v51 == 6 )
                      {
                        v38->u.Port.Alignment = Vector;
                        v38->u.Port.MinimumAddress.LowPart = Vector + v82 - 1;
                      }
                    }
                    else
                    {
                      v38->u.Port.MinimumAddress.QuadPart = Vector;
                      v38->u.Port.Alignment = 1;
                      v38->u.Port.MaximumAddress.QuadPart = Vector + v82 - 1;
                    }
                    v36 = v77;
                    for ( m = v38 + 1; (unsigned __int64)m < v77 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v37 = 1;
LABEL_66:
                    v79 = ++v37;
                    if ( v37 >= 2 )
                    {
                      v34 = v84;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v34;
              v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v33 + LowPart + 20);
              v84 = v34;
              Descriptor = v33;
            }
            while ( v34 < v35->u.Generic.Length );
            v6 = a2;
            v32 = v85;
          }
          ++v32;
          v30 = v33;
          v100 = v33;
          v85 = v32;
        }
        while ( v32 < *v6 );
        v10 = v97;
        v11 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v6 + 1);
        v8 = v81;
        v29 = v77;
        v26 = v86;
        LODWORD(v27) = v98;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v54 = v19[1];
        if ( v54 != v8 && (v54 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v80 += v54;
          *(_WORD *)v19 = v83;
          goto LABEL_78;
        }
        if ( !v95 )
        {
          v80 += v54;
          v95 = v19;
          *(_WORD *)v19 = v83;
          if ( v31 )
            *a4 = 1;
          goto LABEL_78;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_78:
      v19[1] = v27;
      v19 = (_DWORD *)v29;
LABEL_79:
      v18 = v10[7];
      v86 = --v26;
      if ( v26 >= 0 )
        continue;
      break;
    }
    v20 = v87;
  }
  if ( v18 )
  {
    v55 = 32 * (v80 - v20 + 1) + 40 * v18;
    v56 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v55, 0x75737050u);
    v57 = v56;
    if ( v56 )
    {
      memset(v56, 0, v55);
      v58 = v99;
      *v57 = v55;
      v57[1] = *v58;
      v57[2] = a2[2];
      v57[3] = v10[3];
      v59 = v10[7];
      if ( v59 > 1 )
        *a4 = 0;
      v60 = v91;
      v61 = v57 + 8;
      v57[7] = v59;
      if ( v60 >= 0 )
      {
        v62 = v10 + 8;
        do
        {
          v63 = (unsigned __int64)(v62 + 2);
          v64 = (unsigned __int64)&v62[8 * v62[1] + 2];
          if ( *(_WORD *)v62 != 0xFFFF )
          {
            *(_WORD *)v61 = *(_WORD *)v62;
            v65 = *((_WORD *)v62 + 1);
            v66 = (char *)(v61 + 2);
            *((_WORD *)v61 + 1) = v65;
            if ( *(_BYTE *)(v63 + 1) == 0x80 )
            {
              *v57 -= 32;
            }
            else
            {
              *((_WORD *)v61 + 4) = -32767;
              v66 = (char *)(v61 + 10);
              *(_DWORD *)((char *)v61 + 10) = 3;
              *((_WORD *)v61 + 7) = 0;
              v61[4] = 1;
            }
            while ( v63 < v64 )
            {
              if ( *(_BYTE *)(v63 + 1) )
              {
                *(_OWORD *)v66 = *(_OWORD *)v63;
                *((_OWORD *)v66 + 1) = *(_OWORD *)(v63 + 16);
                v66 += 32;
              }
              v63 += 32LL;
            }
            v61[1] = (v66 - (char *)v61 - 8) >> 5;
            v61[4] = 1;
            v61 = v66;
          }
          --v60;
          v62 = (_DWORD *)v64;
        }
        while ( v60 >= 0 );
      }
      *a3 = v57;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = (unsigned int *)PnpCmResourcesToIoResources(0xFFFFLL, v6, 1LL);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
