/*
 * XREFs of _RtlpGetActivationContextDataStorageMapAndRosterHeader@24 @ 0x4B2E262C
 * Callers:
 *     _RtlGetAssemblyStorageRoot@24 @ 0x4B2E2564 (_RtlGetAssemblyStorageRoot@24.c)
 * Callees:
 *     _RtlpUninitializeAssemblyStorageMap@4 @ 0x4B2A92C3 (_RtlpUninitializeAssemblyStorageMap@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeAssemblyStorageMap@12 @ 0x4B2E33A0 (_RtlpInitializeAssemblyStorageMap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpGetActivationContextDataStorageMapAndRosterHeader(
        int a1,
        int a2,
        int *a3,
        _DWORD *a4,
        int **a5,
        int *a6)
{
  wchar_t *StringRoutine; // ebx
  volatile signed __int32 *v7; // esi
  int v8; // edi
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  const void *v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  int *v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *Heap; // ebx
  int v22; // esi
  size_t v24; // [esp-4h] [ebp-244h]
  int v25; // [esp+Ch] [ebp-234h]
  _UNICODE_STRING UnicodeString; // [esp+1Ch] [ebp-224h] BYREF
  volatile signed __int32 *v27; // [esp+24h] [ebp-21Ch]
  int v28; // [esp+28h] [ebp-218h]
  _DWORD *v29; // [esp+2Ch] [ebp-214h]
  _WORD v30[262]; // [esp+30h] [ebp-210h] BYREF

  StringRoutine = v30;
  v7 = 0;
  v8 = 0;
  v28 = a1;
  v30[0] = 0;
  v9 = 0;
  UnicodeString.Length = 0;
  UnicodeString.MaximumLength = 2;
  v29 = 0;
  v27 = 0;
  UnicodeString.Buffer = v30;
  if ( a3 == dword_4B28120C )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() passed the empty activation context\n",
      (int)"RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return -1073741811;
  }
  if ( a4 )
  {
    *a4 = 0;
    v7 = 0;
  }
  if ( a5 )
  {
    *a5 = 0;
    v7 = 0;
  }
  if ( a6 )
  {
    *a6 = 0;
    v9 = 0;
  }
  if ( (v28 & 0xFFFFFFFC) != 0 || !a2 || !a4 || !a5 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters:\n"
           "SXS:    Flags                : 0x%lx\n"
           "SXS:    Peb                  : %p\n"
           "SXS:    ActivationContextData: %p\n"
           "SXS:    AssemblyStorageMap   : %p\n",
      (int)"RtlpGetActivationContextDataStorageMapAndRosterHeader");
    v22 = -1073741811;
    goto LABEL_38;
  }
  if ( a3 )
  {
    if ( a3 == (int *)-4 )
    {
LABEL_24:
      v9 = (_DWORD *)(a2 + 512);
      v19 = *(_DWORD *)(a2 + 512);
      v7 = (volatile signed __int32 *)(a2 + 516);
      v29 = (_DWORD *)(a2 + 512);
      v27 = (volatile signed __int32 *)(a2 + 516);
      if ( v19 )
      {
        v8 = v19 + *(_DWORD *)(v19 + 24);
        goto LABEL_26;
      }
      goto LABEL_34;
    }
    if ( (v28 & 3) == 0 )
    {
      v9 = a3 + 4;
      v17 = a3[4];
      if ( !v17 )
        return -1073741595;
      v8 = v17 + *(_DWORD *)(v17 + 24);
      v18 = a3 + 23;
      goto LABEL_35;
    }
  }
  if ( (v28 & 2) != 0 )
    goto LABEL_24;
  if ( a3 && (v28 & 1) == 0 )
    goto LABEL_26;
  v9 = (_DWORD *)(a2 + 504);
  v10 = *(_DWORD *)(a2 + 504);
  v7 = (volatile signed __int32 *)(a2 + 508);
  v29 = (_DWORD *)(a2 + 504);
  v27 = (volatile signed __int32 *)(a2 + 508);
  if ( !v10 )
  {
LABEL_34:
    v18 = (int *)*v7;
LABEL_35:
    *a5 = v18;
    *a4 = *v9;
    if ( a6 )
      *a6 = v8;
    v22 = 0;
    goto LABEL_38;
  }
  v8 = v10 + *(_DWORD *)(v10 + 24);
  v25 = v8;
  if ( !*v7 )
  {
    v11 = *(_DWORD *)(a2 + 16);
    v12 = *(_DWORD *)(v11 + 56);
    v13 = *(const void **)(v11 + 60);
    v14 = (unsigned __int16)v12;
    v28 = v12;
    v15 = (unsigned __int16)v12 + 14;
    if ( v15 > 0x208 )
    {
      if ( v15 > 0xFFFE )
        return -1073741562;
      UnicodeString.MaximumLength = v12 + 14;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)(v12 + 14));
      UnicodeString.Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
    }
    else
    {
      StringRoutine = v30;
      UnicodeString.MaximumLength = 520;
      UnicodeString.Buffer = v30;
    }
    LODWORD(v24) = v14;
    memcpy(StringRoutine, v13, v24);
    v9 = v29;
    UnicodeString.Length = v28 + 12;
    v16 = &StringRoutine[v14 >> 1];
    *(_DWORD *)v16 = *(_DWORD *)L".Local";
    v16 += 2;
    *(_DWORD *)v16 = *(_DWORD *)L"ocal";
    v16 += 2;
    *(_DWORD *)v16 = *(_DWORD *)L"al";
    v16[2] = aLocal[6];
    v8 = v25;
    v7 = v27;
  }
LABEL_26:
  if ( !*v9 || *v7 )
    goto LABEL_34;
  v20 = *(_DWORD *)(v8 + 8);
  if ( v20 > 0x3FFFFFFC )
  {
    v22 = -1073741675;
  }
  else
  {
    LODWORD(v24) = 4 * v20 + 12;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
    if ( Heap )
    {
      v22 = RtlpInitializeAssemblyStorageMap(Heap + 3);
      if ( v22 >= 0 )
      {
        v7 = v27;
        if ( _InterlockedCompareExchange(v27, (signed __int32)Heap, 0) )
        {
          RtlpUninitializeAssemblyStorageMap(Heap);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
        v9 = v29;
        StringRoutine = UnicodeString.Buffer;
        goto LABEL_34;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      v22 = -1073741801;
    }
    StringRoutine = UnicodeString.Buffer;
  }
LABEL_38:
  if ( StringRoutine && StringRoutine != v30 )
    RtlFreeAnsiString(&UnicodeString);
  return v22;
}
