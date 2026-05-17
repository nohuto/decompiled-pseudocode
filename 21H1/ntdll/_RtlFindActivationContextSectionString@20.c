/*
 * XREFs of _RtlFindActivationContextSectionString@20 @ 0x4B2CA130
 * Callers:
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __stdcall RtlFindActivationContextSectionString(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  struct _TEB *v5; // ecx
  _PEB *ProcessEnvironmentBlock; // eax
  _DWORD *v7; // eax
  const char *SystemDefaultActivationContextData; // edi
  struct _TEB *v9; // edx
  int v10; // ebx
  _PEB *v11; // ecx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax
  int result; // eax
  volatile signed __int32 *v15; // esi
  int v16; // ebx
  _DWORD *v17; // eax
  struct _TEB *v18; // edx
  const char *ActivationContextData; // eax
  unsigned int v20; // ebx
  volatile signed __int32 *v21; // edx
  int ActivationContext; // eax
  struct _TEB *v23; // eax
  _ACTIVATION_CONTEXT_STACK *v24; // ecx
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v25; // ecx
  int v26; // ecx
  signed __int32 v27; // esi
  int v28; // [esp+2h] [ebp-50h]
  int v29; // [esp+6h] [ebp-4Ch]
  char v30; // [esp+19h] [ebp-39h] BYREF
  int v31; // [esp+1Ah] [ebp-38h]
  _DWORD *v32; // [esp+1Eh] [ebp-34h] BYREF
  int v33; // [esp+22h] [ebp-30h]
  unsigned int v34; // [esp+26h] [ebp-2Ch] BYREF
  _PEB *v35; // [esp+2Ah] [ebp-28h]
  int v36; // [esp+2Eh] [ebp-24h] BYREF
  int v37; // [esp+32h] [ebp-20h] BYREF
  struct _TEB *v38; // [esp+36h] [ebp-1Ch]
  _DWORD v39[4]; // [esp+3Ah] [ebp-18h] BYREF
  int v40; // [esp+4Ah] [ebp-8h]
  int v41; // [esp+4Eh] [ebp-4h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v34 = 0;
  v37 = -1;
  v36 = 0;
  if ( !a4 || (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  v7 = a5;
  if ( (a1 & 7) != 0 )
  {
    if ( !a5 )
      return -1073741811;
  }
  else if ( !a5 )
  {
    goto LABEL_7;
  }
  if ( *a5 < 0x24u )
    return -1073741811;
LABEL_7:
  if ( (a1 & 2) != 0 )
  {
    if ( a5 + 11 > (_DWORD *)((char *)a5 + *a5) )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
        "RtlpFindActivationContextSection_CheckParameters",
        -1073741811);
      return -1073741811;
    }
    v7 = a5;
  }
  if ( (a1 & 4) != 0 && v7 + 16 > (_DWORD *)((char *)v7 + *v7) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return -1073741811;
  }
  SystemDefaultActivationContextData = 0;
  v39[1] = a1;
  v9 = NtCurrentTeb();
  v39[3] = a3;
  v40 = 0;
  v10 = 0;
  v11 = v9->ProcessEnvironmentBlock;
  v39[0] = 24;
  v41 = 0;
  v39[2] = a2;
  v31 = 0;
  v33 = (int)v9;
  v35 = v11;
  while ( 1 )
  {
    if ( !v10 )
    {
      ActivationContextStackPointer = v9->ActivationContextStackPointer;
      if ( ActivationContextStackPointer )
      {
        ActiveFrame = ActivationContextStackPointer->ActiveFrame;
        if ( ActiveFrame )
        {
          ActivationContext = (int)ActiveFrame->ActivationContext;
          v31 = ActivationContext;
          if ( ActivationContext )
          {
            if ( ActivationContext == -4 )
            {
              SystemDefaultActivationContextData = (const char *)v11->SystemDefaultActivationContextData;
            }
            else
            {
              if ( ActivationContext == -3 )
              {
                SystemDefaultActivationContextData = "Actx ";
LABEL_53:
                v10 = 1;
                v40 = 1;
                goto LABEL_17;
              }
              SystemDefaultActivationContextData = *(const char **)(ActivationContext + 16);
            }
          }
          if ( SystemDefaultActivationContextData )
            goto LABEL_53;
        }
      }
LABEL_15:
      SystemDefaultActivationContextData = (const char *)v11->ActivationContextData;
      v31 = 0;
      if ( SystemDefaultActivationContextData )
      {
        v10 = 2;
        v40 = 2;
        goto LABEL_17;
      }
      goto LABEL_34;
    }
    if ( v10 == 1 )
      goto LABEL_15;
LABEL_34:
    SystemDefaultActivationContextData = (const char *)v11->SystemDefaultActivationContextData;
    v31 = -4;
    if ( SystemDefaultActivationContextData )
    {
      v10 = 3;
      v40 = 3;
    }
LABEL_17:
    if ( !SystemDefaultActivationContextData )
      return -1072365567;
    result = RtlpLocateActivationContextSection(a3, &v32, &v34);
    if ( result >= 0 )
      break;
    v15 = 0;
    if ( result != -1072365567 || v10 == 3 )
      goto LABEL_20;
    v11 = v35;
    v9 = (struct _TEB *)v33;
  }
  v41 = (v31 == 0) | (v31 != -4 ? 0 : 2);
  v15 = v31 != -4 ? (volatile signed __int32 *)v31 : 0;
  result = 0;
LABEL_20:
  if ( result < 0 )
    return result;
  v16 = v34;
  if ( v34 < 0x2C )
    goto LABEL_101;
  while ( 2 )
  {
    v17 = v32;
    if ( *v32 != 1682469715 )
      goto LABEL_102;
    result = RtlpFindUnicodeStringInSection(a4, a5, &v37, &v36, v28, v29);
    if ( result >= 0 )
    {
      if ( (((unsigned int)v15 - 1) | 7) != 0xFFFFFFFF )
      {
        v23 = (struct _TEB *)*((_DWORD *)v15 + 5);
        v38 = v23;
        if ( v23 )
        {
          if ( (v15[7] & 8) == 0 || (v15[15] & 8) == 0 )
          {
            v30 = 0;
            ((void (__thiscall *)(struct _TEB *, int, volatile signed __int32 *, _DWORD, _DWORD, _DWORD, char *))v38)(
              v23,
              3,
              v15,
              *((_DWORD *)v15 + 4),
              *((_DWORD *)v15 + 6),
              0,
              &v30);
            *((_DWORD *)v15 + 7) |= 8u;
            if ( v30 )
              *((_DWORD *)v15 + 15) |= 8u;
          }
        }
      }
      if ( !a5 )
        return 0;
      result = RtlpFindActivationContextSection_FillOutReturnedData(
                 a1,
                 a5,
                 (int)v15,
                 (int)v39,
                 (int)v32,
                 v32[9],
                 v32[10],
                 v16);
      if ( result >= 0 )
        return 0;
      return result;
    }
    if ( result != -1072365560 )
      return result;
    v18 = NtCurrentTeb();
    ActivationContextData = 0;
    v31 = 0;
    v38 = v18;
    v33 = 0;
    v35 = v18->ProcessEnvironmentBlock;
    v20 = v40;
    while ( 2 )
    {
      if ( v20 > 2 )
      {
LABEL_27:
        if ( v20 <= 3 )
          goto LABEL_28;
        result = -1073741595;
LABEL_30:
        if ( result == -1072365567 )
          return -1072365560;
        return result;
      }
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_41;
        goto LABEL_64;
      }
      v24 = v18->ActivationContextStackPointer;
      if ( !v24 )
        goto LABEL_64;
      v25 = v24->ActiveFrame;
      if ( !v25 )
        goto LABEL_64;
      v26 = (int)v25->ActivationContext;
      v33 = v26;
      if ( v26 )
      {
        if ( v26 == -4 )
        {
          ActivationContextData = (const char *)v35->SystemDefaultActivationContextData;
          goto LABEL_92;
        }
        if ( v26 == -3 )
        {
          ActivationContextData = "Actx ";
          v31 = (int)"Actx ";
          goto LABEL_94;
        }
        ActivationContextData = *(const char **)(v26 + 16);
LABEL_92:
        v31 = (int)ActivationContextData;
      }
      if ( ActivationContextData )
      {
LABEL_94:
        v20 = 1;
        v40 = 1;
      }
      else
      {
LABEL_64:
        v33 = 0;
        ActivationContextData = (const char *)v35->ActivationContextData;
        v31 = (int)ActivationContextData;
        if ( ActivationContextData )
        {
          v20 = 2;
          v40 = 2;
        }
        else
        {
LABEL_41:
          v33 = -4;
          ActivationContextData = (const char *)v35->SystemDefaultActivationContextData;
          v31 = (int)ActivationContextData;
          if ( !ActivationContextData )
            goto LABEL_27;
          v20 = 3;
          v40 = 3;
        }
      }
LABEL_28:
      if ( !ActivationContextData )
      {
        result = -1072365567;
        goto LABEL_30;
      }
      result = RtlpLocateActivationContextSection(a3, &v32, &v34);
      if ( result < 0 )
      {
        v21 = 0;
        if ( result != -1072365567 || v20 == 3 )
          goto LABEL_45;
        ActivationContextData = (const char *)v31;
        v18 = v38;
        continue;
      }
      break;
    }
    v41 = (v33 == 0) | (v33 != -4 ? 0 : 2);
    v21 = v33 != -4 ? (volatile signed __int32 *)v33 : 0;
    result = 0;
LABEL_45:
    if ( result < 0 )
      goto LABEL_30;
    if ( v21 && (((unsigned int)v21 - 1) | 7) != 0xFFFFFFFF && *v21 != 0x7FFFFFFF )
    {
      do
      {
        if ( *v21 == 0x7FFFFFFF )
          break;
        v27 = *v21;
      }
      while ( _InterlockedCompareExchange(v21, v27 + 1, v27) != v27 );
    }
    v15 = v21;
    v16 = v34;
    if ( v34 >= 0x2C )
      continue;
    break;
  }
LABEL_101:
  v17 = v32;
LABEL_102:
  DbgPrintEx(
    51,
    0,
    "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
    v17,
    v16);
  return -1072365565;
}
