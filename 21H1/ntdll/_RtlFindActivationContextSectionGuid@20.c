/*
 * XREFs of _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _RtlpFindNextActivationContextSection@16 @ 0x4B2CD550 (_RtlpFindNextActivationContextSection@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __stdcall RtlFindActivationContextSectionGuid(int a1, const void *a2, unsigned int a3, void *a4, _DWORD *a5)
{
  struct _TEB *v5; // ecx
  _PEB *ProcessEnvironmentBlock; // eax
  bool v7; // zf
  int result; // eax
  unsigned int v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // esi
  size_t v12; // ebx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ebx
  struct _TEB *v16; // ecx
  unsigned int v17; // esi
  char *SystemDefaultActivationContextData; // ebx
  _PEB *v19; // edx
  int v20; // ecx
  struct _TEB *v21; // eax
  const void *v22; // eax
  _DWORD *v23; // edx
  int v24; // ecx
  void (__thiscall *v25)(_DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD, char *); // ebx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax
  unsigned int ActivationContext; // eax
  char v29; // [esp+19h] [ebp-59h] BYREF
  unsigned int v30; // [esp+1Ah] [ebp-58h]
  unsigned int v31; // [esp+1Eh] [ebp-54h] BYREF
  void *Source2; // [esp+22h] [ebp-50h]
  _DWORD *v33; // [esp+26h] [ebp-4Ch]
  int v34; // [esp+2Ah] [ebp-48h] BYREF
  unsigned int *i; // [esp+2Eh] [ebp-44h]
  struct _TEB *p_StackBase; // [esp+32h] [ebp-40h]
  _DWORD *v37; // [esp+36h] [ebp-3Ch] BYREF
  _DWORD v38[2]; // [esp+3Ah] [ebp-38h] BYREF
  const void *v39; // [esp+42h] [ebp-30h]
  unsigned int v40; // [esp+46h] [ebp-2Ch]
  int v41; // [esp+4Ah] [ebp-28h]
  int v42; // [esp+4Eh] [ebp-24h]
  _DWORD Key[7]; // [esp+52h] [ebp-20h] BYREF

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  v7 = ProcessEnvironmentBlock->ActivationContextData == 0;
  Source2 = a4;
  v33 = a5;
  if ( v7
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v31 = 0;
  if ( !a4 || (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
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
  if ( (a1 & 2) != 0 && a5 + 11 > (_DWORD *)((char *)a5 + *a5) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return -1073741811;
  }
  if ( (a1 & 4) != 0 && a5 + 16 > (_DWORD *)((char *)a5 + *a5) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return -1073741811;
  }
  v40 = a3;
  v38[0] = 24;
  v38[1] = 0;
  v39 = a2;
  v42 = 0;
  v37 = 0;
  v41 = 0;
  result = RtlpFindNextActivationContextSection((int)v38, &v34, &v31, &v37);
  if ( result < 0 )
    return result;
  v9 = v31;
  if ( v31 < 0x28 )
    goto LABEL_32;
  v10 = v37;
  while ( 2 )
  {
    v11 = (_DWORD *)v34;
    if ( *(_DWORD *)v34 != 1682469703 )
    {
LABEL_85:
      DbgPrintEx(
        51,
        0,
        "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        v11,
        v9);
      return -1072365565;
    }
    v12 = *(_DWORD *)(v34 + 20);
    if ( !v12 )
      goto LABEL_18;
    v13 = *(_DWORD *)(v34 + 28);
    if ( !v13 || *(_DWORD *)(v34 + 8) != 1 )
    {
      v14 = *(_DWORD *)(v34 + 24);
      if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
      {
        Key[0] = *(_DWORD *)Source2;
        Key[1] = *((_DWORD *)Source2 + 1);
        Key[2] = *((_DWORD *)Source2 + 2);
        Key[3] = *((_DWORD *)Source2 + 3);
        v15 = bsearch(
                Key,
                (const void *)(v14 + v34),
                v12,
                0x1Cu,
                (_CoreCrtNonSecureSearchSortCompareFunction)RtlpSearchProtectedPolicyEntry);
      }
      else
      {
        v22 = (const void *)(v14 + v34);
        v30 = v14 + v34;
        while ( RtlCompareMemory(v22, Source2, 0x10u) != 16 )
        {
          v22 = (const void *)(v30 + 28);
          v30 += 28;
          if ( !--v12 )
            goto LABEL_18;
        }
        v15 = (_DWORD *)v30;
      }
      goto LABEL_17;
    }
    v30 = 0;
    v20 = *(_DWORD *)(v13 + v34 + 4) + 8 * (*(_DWORD *)Source2 % *(_DWORD *)(v13 + v34));
    v21 = (struct _TEB *)(v34 + *(_DWORD *)(v20 + v34 + 4));
    i = (unsigned int *)(v34 + v20);
    if ( *(_DWORD *)(v34 + v20) )
    {
      while ( 1 )
      {
        v15 = (_DWORD *)((char *)v11 + (unsigned int)v21->NtTib.ExceptionList);
        p_StackBase = (struct _TEB *)&v21->NtTib.StackBase;
        if ( RtlCompareMemory(v15, Source2, 0x10u) == 16 )
          break;
        ++v30;
        v21 = p_StackBase;
        if ( v30 >= *i )
          goto LABEL_18;
      }
LABEL_17:
      if ( v15 && v15[4] )
      {
        v23 = v33;
        if ( v33 )
        {
          v24 = *v33;
          v33[1] = v11[3];
          v23[2] = (char *)v11 + v15[4];
          v23[3] = v15[5];
          if ( v23 + 10 <= (_DWORD *)((char *)v23 + v24) )
            v23[9] = v15[6];
        }
        if ( (((unsigned int)v10 - 1) | 7) != 0xFFFFFFFF )
        {
          v25 = (void (__thiscall *)(_DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD, char *))v10[5];
          if ( v25 )
          {
            if ( (v10[7] & 8) == 0 || (v10[15] & 8) == 0 )
            {
              v29 = 0;
              v25(v25, 3, v10, v10[4], v10[6], 0, &v29);
              v10[7] |= 8u;
              v23 = v33;
              if ( v29 )
                v10[15] |= 8u;
            }
          }
        }
        if ( !v23 )
          return 0;
        result = RtlpFindActivationContextSection_FillOutReturnedData(
                   a1,
                   v23,
                   (int)v10,
                   (int)v38,
                   (int)v11,
                   v11[8],
                   v11[9],
                   v31);
        if ( result >= 0 )
          return 0;
        return result;
      }
    }
LABEL_18:
    v16 = NtCurrentTeb();
    v17 = v41;
    SystemDefaultActivationContextData = 0;
    v30 = 0;
    v10 = 0;
    p_StackBase = v16;
    v19 = v16->ProcessEnvironmentBlock;
    for ( i = (unsigned int *)&v19->InheritedAddressSpace; ; v19 = (_PEB *)i )
    {
      if ( v17 <= 2 )
      {
        if ( v17 )
        {
          if ( v17 != 1 )
          {
LABEL_26:
            SystemDefaultActivationContextData = (char *)v19->SystemDefaultActivationContextData;
            v30 = -4;
            if ( SystemDefaultActivationContextData )
            {
              v17 = 3;
              v41 = 3;
              goto LABEL_21;
            }
            goto LABEL_20;
          }
        }
        else
        {
          ActivationContextStackPointer = v16->ActivationContextStackPointer;
          if ( ActivationContextStackPointer )
          {
            ActiveFrame = ActivationContextStackPointer->ActiveFrame;
            if ( ActiveFrame )
            {
              ActivationContext = (unsigned int)ActiveFrame->ActivationContext;
              v30 = ActivationContext;
              if ( ActivationContext )
              {
                if ( ActivationContext == -4 )
                {
                  SystemDefaultActivationContextData = (char *)v19->SystemDefaultActivationContextData;
                }
                else
                {
                  if ( ActivationContext == -3 )
                  {
                    SystemDefaultActivationContextData = "Actx ";
LABEL_78:
                    v17 = 1;
                    v41 = 1;
                    goto LABEL_21;
                  }
                  SystemDefaultActivationContextData = *(char **)(ActivationContext + 16);
                }
              }
              if ( SystemDefaultActivationContextData )
                goto LABEL_78;
            }
          }
        }
        SystemDefaultActivationContextData = (char *)v19->ActivationContextData;
        v30 = 0;
        if ( SystemDefaultActivationContextData )
        {
          v17 = 2;
          v41 = 2;
          goto LABEL_21;
        }
        goto LABEL_26;
      }
LABEL_20:
      if ( v17 > 3 )
        return -1073741595;
LABEL_21:
      if ( !SystemDefaultActivationContextData )
        return -1072365560;
      result = RtlpLocateActivationContextSection(SystemDefaultActivationContextData, v39, v40, &v34, &v31);
      if ( result >= 0 )
        break;
      if ( result != -1072365567 || v17 == 3 )
        goto LABEL_30;
      v16 = p_StackBase;
    }
    v42 = (v30 == 0) | (v30 != -4 ? 0 : 2);
    v10 = v30 != -4 ? (_DWORD *)v30 : 0;
    result = 0;
LABEL_30:
    if ( result >= 0 )
    {
      v9 = v31;
      if ( v31 >= 0x28 )
        continue;
LABEL_32:
      v11 = (_DWORD *)v34;
      goto LABEL_85;
    }
    break;
  }
  if ( result == -1072365567 )
    return -1072365560;
  return result;
}
