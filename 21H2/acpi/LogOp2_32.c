/*
 * XREFs of LogOp2_32 @ 0x1C00276D0
 * Callers:
 *     LogOp2 @ 0x1C0015E30 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 *     memcmp @ 0x1C002FC00 (memcmp.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rcx
  __int16 v8; // ax
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  size_t v11; // r8
  const void *v12; // rdx
  const void *v13; // rcx
  int v14; // eax
  int v15; // r9d
  bool v16; // zf
  __int16 v18; // ax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // edx
  bool v23; // zf
  bool v24; // zf
  unsigned int v25; // r14d
  unsigned int v26; // ebp
  size_t v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  __int16 v30; // ax
  unsigned int v31; // eax
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // edx
  bool v35; // zf
  bool v36; // sf
  bool v37; // zf
  unsigned int v38; // r14d
  unsigned int v39; // ebp
  size_t v40; // r8
  const void *v41; // rdx
  const void *v42; // rcx
  int v43; // eax
  unsigned __int8 *v44; // rax
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax

  v2 = 0;
  LOBYTE(v5) = 0;
  v6 = 0;
  if ( *(_DWORD *)(a2[7] + 8LL) == 144 )
  {
    v6 = ValidateArgTypes(a1, a2[10], 1, "II");
    if ( v6 < 0 )
      return (unsigned int)v6;
    v49 = a2[10];
    if ( *(_DWORD *)(v49 + 16) )
    {
      LOBYTE(v5) = 1;
      if ( *(_DWORD *)(v49 + 56) )
        goto LABEL_15;
    }
    goto LABEL_92;
  }
  if ( *(_DWORD *)(a2[7] + 8LL) == 145 )
  {
    v6 = ValidateArgTypes(a1, a2[10], 1, "II");
    if ( v6 < 0 )
      return (unsigned int)v6;
    v48 = a2[10];
    if ( *(_DWORD *)(v48 + 16) || *(_DWORD *)(v48 + 56) )
    {
      LOBYTE(v5) = 1;
      goto LABEL_15;
    }
LABEL_92:
    LOBYTE(v5) = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a2[7] + 8LL) != 147 )
  {
    if ( *(_DWORD *)(a2[7] + 8LL) != 148 )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) != 149 )
        goto LABEL_15;
      v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v5 = a2[10];
      v18 = *(_WORD *)(v5 + 2);
      if ( v18 == 1 )
      {
        if ( *(_WORD *)(v5 + 42) == 1 )
        {
          LOBYTE(v5) = *(_DWORD *)(v5 + 16) < *(_DWORD *)(v5 + 56);
          goto LABEL_15;
        }
        goto LABEL_75;
      }
      if ( v18 == 2 )
      {
        if ( *(_WORD *)(v5 + 42) != 2 )
          goto LABEL_75;
        v19 = *(_DWORD *)(v5 + 64);
        if ( *(_DWORD *)(v5 + 24) <= v19 )
          v19 = *(_DWORD *)(v5 + 24);
        v20 = strncmp(*(const char **)(v5 + 32), *(const char **)(v5 + 72), v19);
        v21 = a2[10];
        v22 = *(_DWORD *)(v21 + 24);
        if ( v22 < *(_DWORD *)(v21 + 64) )
        {
          v23 = v20 == 0;
          goto LABEL_42;
        }
        if ( v22 > *(_DWORD *)(v21 + 64) )
        {
          v24 = v20 == 0;
          goto LABEL_46;
        }
      }
      else
      {
        if ( v18 != 3 || *(_WORD *)(v5 + 42) != 3 )
          goto LABEL_75;
        v25 = *(_DWORD *)(v5 + 24);
        v26 = *(_DWORD *)(v5 + 64);
        v27 = v26;
        if ( v25 <= v26 )
          v27 = v25;
        v28 = memcmp(*(const void **)(v5 + 32), *(const void **)(v5 + 72), v27);
        v20 = v28;
        if ( v25 < v26 )
        {
          v23 = v28 == 0;
LABEL_42:
          if ( v23 )
            v20 = -1;
          goto LABEL_48;
        }
        if ( v25 > v26 )
        {
          v24 = v28 == 0;
LABEL_46:
          if ( v24 )
            v20 = 1;
        }
      }
LABEL_48:
      LODWORD(v5) = v20 >> 31;
      goto LABEL_15;
    }
    v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
    if ( v6 < 0 )
      return (unsigned int)v6;
    v29 = a2[10];
    v30 = *(_WORD *)(v29 + 2);
    if ( v30 == 1 )
    {
      if ( *(_WORD *)(v29 + 42) == 1 )
      {
        LOBYTE(v5) = *(_DWORD *)(v29 + 16) > *(_DWORD *)(v29 + 56);
        goto LABEL_15;
      }
      goto LABEL_75;
    }
    if ( v30 == 2 )
    {
      if ( *(_WORD *)(v29 + 42) != 2 )
        goto LABEL_75;
      v31 = *(_DWORD *)(v29 + 64);
      if ( *(_DWORD *)(v29 + 24) <= v31 )
        v31 = *(_DWORD *)(v29 + 24);
      v32 = strncmp(*(const char **)(v29 + 32), *(const char **)(v29 + 72), v31);
      v33 = a2[10];
      v34 = *(_DWORD *)(v33 + 24);
      if ( v34 < *(_DWORD *)(v33 + 64) )
      {
        v35 = v32 == 0;
        v36 = v32 < 0;
        if ( v32 )
          goto LABEL_74;
        goto LABEL_68;
      }
      if ( v34 > *(_DWORD *)(v33 + 64) )
      {
        v37 = v32 == 0;
        goto LABEL_71;
      }
    }
    else
    {
      if ( v30 != 3 || *(_WORD *)(v29 + 42) != 3 )
        goto LABEL_75;
      v38 = *(_DWORD *)(v29 + 24);
      v39 = *(_DWORD *)(v29 + 64);
      v40 = v39;
      v41 = *(const void **)(v29 + 72);
      v42 = *(const void **)(v29 + 32);
      if ( v38 <= v39 )
        v40 = v38;
      v43 = memcmp(v42, v41, v40);
      v32 = v43;
      if ( v38 >= v39 )
      {
        if ( v38 <= v39 )
          goto LABEL_73;
        v37 = v43 == 0;
LABEL_71:
        if ( v37 )
          v32 = 1;
        goto LABEL_73;
      }
      if ( !v43 )
LABEL_68:
        v32 = -1;
    }
LABEL_73:
    v35 = v32 == 0;
    v36 = v32 < 0;
LABEL_74:
    LOBYTE(v5) = !v36 && !v35;
    goto LABEL_15;
  }
  v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = a2[10];
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 == 1 )
  {
    if ( *(_WORD *)(v7 + 42) != 1 )
      goto LABEL_75;
    v16 = *(_DWORD *)(v7 + 16) == *(_DWORD *)(v7 + 56);
  }
  else
  {
    if ( v8 != 2 )
    {
      if ( v8 == 3 && *(_WORD *)(v7 + 42) == 3 )
      {
        v9 = *(_DWORD *)(v7 + 24);
        v10 = *(_DWORD *)(v7 + 64);
        v11 = v10;
        v12 = *(const void **)(v7 + 72);
        v13 = *(const void **)(v7 + 32);
        if ( v9 <= v10 )
          v11 = v9;
        v14 = memcmp(v13, v12, v11);
        v15 = v14;
        if ( v9 < v10 )
        {
          if ( !v14 )
            v15 = -1;
        }
        else if ( v9 > v10 && !v14 )
        {
          v15 = 1;
        }
        v16 = v15 == 0;
        goto LABEL_14;
      }
LABEL_75:
      v6 = -1073741811;
      LogError(3221225485LL);
      AcpiDiagTraceAmlError(a1, 3221225485LL);
      PrintDebugMessage(238, 0, 0, 0, 0LL);
      return (unsigned int)v6;
    }
    if ( *(_WORD *)(v7 + 42) != 2 )
      goto LABEL_75;
    v44 = *(unsigned __int8 **)(v7 + 32);
    v45 = *(_QWORD *)(v7 + 72) - (_QWORD)v44;
    do
    {
      v46 = v44[v45];
      v47 = *v44 - v46;
      if ( v47 )
        break;
      ++v44;
    }
    while ( v46 );
    v16 = v47 == 0;
  }
LABEL_14:
  LOBYTE(v5) = v16;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v5 )
  {
    IsCompatableDSDTRevision();
    v2 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v2;
  return (unsigned int)v6;
}
