/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x14077B4FC
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x14036F0B8 (PnpValidateMultiSzData.c)
 *     PnpValidateStringData @ 0x14036F128 (PnpValidateStringData.c)
 *     PnpMultiSzContainsString @ 0x140392F50 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x140392FCC (PnpValidateRegistryMultiSz.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        unsigned int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  _WORD *v8; // r15
  size_t v9; // rbx
  _WORD *v11; // r14
  unsigned int *v13; // r13
  char v14; // al
  NTSTATUS RegistryValue; // eax
  unsigned int v16; // edi
  unsigned int v17; // esi
  _WORD *v18; // rax
  unsigned int v19; // ecx
  int v20; // r12d
  const WCHAR *v21; // r13
  __int64 v22; // rax
  unsigned int v23; // r12d
  const WCHAR *v25; // r12
  unsigned int v26; // edi
  bool v27; // zf
  unsigned int v28; // ebx
  unsigned int v29; // eax
  _WORD *PoolWithTag; // rax
  NTSTATUS v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+20h] [rbp-30h]
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0LL;
  v9 = a2;
  P = 0LL;
  v11 = a3;
  *a7 = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  *a8 = 0LL;
  if ( !a1 )
    goto LABEL_58;
  if ( a1 <= 2 )
  {
    v14 = PnpValidateStringData((__int64)a3, a2);
  }
  else
  {
    if ( a1 != 7 )
      goto LABEL_58;
    v14 = PnpValidateMultiSzData(a3, a2);
  }
  if ( !v14 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v13 = (unsigned int *)P;
  v16 = RegistryValue;
  v31 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
    {
      v16 = 0;
      if ( (a4 & 0x40000) == 0 )
      {
        v17 = 0;
        goto LABEL_24;
      }
      v29 = v9 + 2;
      if ( a1 == 7 )
        v29 = v9;
      v17 = v29;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x63647050u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v11, v9);
        goto LABEL_24;
      }
      v13 = (unsigned int *)P;
      v16 = -1073741670;
    }
    goto LABEL_27;
  }
  if ( !PnpValidateRegistryMultiSz(P) )
  {
LABEL_58:
    v16 = -1073741823;
    goto LABEL_27;
  }
  if ( (a4 & 0x40000) != 0 )
  {
    v17 = v13[3];
    Src[0] = (char *)v13 + v13[2];
    if ( !v17 )
      v17 = 2;
    v18 = ExAllocatePoolWithTag(PagedPool, v17 + (unsigned int)v9, 0x63647050u);
    v19 = 0;
    v8 = v18;
    if ( v18 )
    {
      if ( v17 > 2 )
      {
        memmove(v18, Src[0], v17);
        v19 = v17 - 2;
      }
      v20 = a4 & 0x20000;
      v32 = v19;
      if ( a1 != 7 )
      {
        if ( v20 || v17 == 2 || !PnpMultiSzContainsString((PCWSTR)Src[0], v11) )
        {
          memmove((char *)v8 + v32, v11, v9);
          v17 += v9;
        }
        goto LABEL_24;
      }
      if ( v20 )
      {
        memmove((char *)v8 + v19, v11, v9);
        v17 = v17 + v9 - 2;
        goto LABEL_24;
      }
      if ( !*v11 )
      {
LABEL_24:
        if ( v8 )
          v8[((unsigned __int64)v17 >> 1) - 1] = 0;
        *a7 = v17;
        *a8 = v8;
        goto LABEL_27;
      }
      v21 = (const WCHAR *)Src[0];
      do
      {
        v22 = -1LL;
        do
          ++v22;
        while ( v11[v22] );
        v23 = 2 * v22 + 2;
        if ( !PnpMultiSzContainsString(v21, v11) )
        {
          memmove((char *)v8 + v32, v11, v23);
          v32 += v23;
          v17 += v23;
        }
        v11 += (unsigned __int64)v23 >> 1;
      }
      while ( *v11 );
LABEL_23:
      v13 = (unsigned int *)P;
      goto LABEL_24;
    }
  }
  else
  {
    v8 = ExAllocatePoolWithTag(PagedPool, v13[3], 0x63647050u);
    if ( v8 )
    {
      if ( a1 != 7 )
        RtlInitUnicodeString(&DestinationString, v11);
      v17 = 2;
      v25 = (const WCHAR *)((char *)v13 + v13[2]);
      if ( !*v25 )
        goto LABEL_24;
      v26 = 0;
      do
      {
        RtlInitUnicodeString((PUNICODE_STRING)Src, v25);
        if ( a1 == 7 )
          v27 = PnpMultiSzContainsString(v11, (const WCHAR *)Src[1]) == 0LL;
        else
          v27 = RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)Src, 1u) == 0;
        if ( v27 )
        {
          v28 = LOWORD(Src[0]) + 2;
          memmove((char *)v8 + v26, Src[1], v28);
          v26 += v28;
          v17 += v28;
        }
        v25 += ((unsigned __int64)LOWORD(Src[0]) >> 1) + 1;
      }
      while ( *v25 );
      v16 = v31;
      goto LABEL_23;
    }
  }
  v16 = -1073741670;
LABEL_27:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return v16;
}
