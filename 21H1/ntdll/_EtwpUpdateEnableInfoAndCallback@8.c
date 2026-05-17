/*
 * XREFs of _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F
 * Callers:
 *     _EtwpProcessNotification@20 @ 0x4B2AE63A (_EtwpProcessNotification@20.c)
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _EtwpDisableTraceProviders@4 @ 0x4B2EDBE4 (_EtwpDisableTraceProviders@4.c)
 * Callees:
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwpRegisterGuidsApiCallback@12 @ 0x4B2ADEE1 (_EtwpRegisterGuidsApiCallback@12.c)
 *     _EtwpEventApiCallback@8 @ 0x4B2B1011 (_EtwpEventApiCallback@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpDereferenceUmGuidEntry@4 @ 0x4B2EE4C1 (_EtwpDereferenceUmGuidEntry@4.c)
 *     _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78 (_EtwpGetUmProcessImageInfo@8.c)
 *     _EtwpUpdatePrivateEnableInfo@4 @ 0x4B2F239B (_EtwpUpdatePrivateEnableInfo@4.c)
 *     _EtwpAllocateUmGuidEntry@4 @ 0x4B2F2509 (_EtwpAllocateUmGuidEntry@4.c)
 *     _EtwpIsPrivateLoggerOn@4 @ 0x4B2F25E2 (_EtwpIsPrivateLoggerOn@4.c)
 *     _EtwpReferenceUmGuidEntry@4 @ 0x4B2F2700 (_EtwpReferenceUmGuidEntry@4.c)
 */

int __fastcall EtwpUpdateEnableInfoAndCallback(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  char v5; // cl
  _DWORD *GuidEntry; // ebx
  _BYTE *v7; // esi
  int v8; // esi
  _BYTE *v9; // esi
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // eax
  _DWORD *v13; // esi
  int v14; // ecx
  _BYTE *v15; // esi
  char v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  unsigned int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  char v20; // [esp+27h] [ebp-1h]

  v2 = *(_DWORD *)(a2 + 72);
  v16 = 0;
  result = 2;
  v19 = a2;
  v5 = 0;
  GuidEntry = *(_DWORD **)(a1 + 200);
  v18 = 4;
  v17 = v2;
  if ( v2 != 2 )
  {
    result = *(unsigned __int16 *)(a2 + 78);
    if ( (result & 0x8000u) == 0 )
    {
      v7 = (_BYTE *)(a1 + 56);
LABEL_4:
      v5 = v7[20];
      *(_DWORD *)v7 = *(_DWORD *)(a2 + 96);
      *((_DWORD *)v7 + 1) = *(_DWORD *)(a2 + 100);
      *((_DWORD *)v7 + 2) = *(_DWORD *)(a2 + 88);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(a2 + 92);
      v7[21] = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v7 + 4) = *(_DWORD *)(a2 + 80);
      v7[20] = v17 != 0;
      result = 0;
      v20 = v5;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v18 < 4 )
          qmemcpy((void *)(24 * v18 + a1 + 80), v7, 0x18u);
        EtwpUpdatePrivateEnableInfo(a1);
        v14 = *(unsigned __int16 *)(a1 + 54);
        if ( (*(_WORD *)(a1 + 54) & 0x3FFF) == 2 || (v14 & 0x8000u) != 0 )
        {
          v8 = v19;
          LOWORD(v14) = *(_WORD *)(v19 + 78);
          EtwpGetUmProcessImageInfo(v14, a1);
        }
        else
        {
          v8 = v19;
        }
        v5 = v20;
        result = 0;
      }
      else
      {
        v8 = v19;
      }
      if ( v16 )
      {
        GuidEntry[8] = 0;
        result = RtlReleaseSRWLockExclusive(GuidEntry + 7);
        if ( !v17 && v18 < 4 )
          result = EtwpDereferenceUmGuidEntry(GuidEntry);
        v5 = v20;
      }
      goto LABEL_7;
    }
    v16 = 1;
    if ( v2 == 1 )
    {
      result = EtwpIsPrivateLoggerOn(result);
      if ( !(_BYTE)result )
        return result;
    }
    if ( !GuidEntry )
    {
      if ( !v2 )
        return result;
      GuidEntry = EtwpFindGuidEntry((void *)(a1 + 12));
      if ( !GuidEntry )
      {
        result = EtwpAllocateUmGuidEntry(a1 + 12);
        GuidEntry = (_DWORD *)result;
        if ( !result )
          return result;
      }
      *(_DWORD *)(a1 + 200) = GuidEntry;
    }
    RtlAcquireSRWLockExclusive(GuidEntry + 7);
    v9 = (char *)GuidEntry + 62;
    a2 = v19;
    GuidEntry[8] = NtCurrentTeb()->ClientId.UniqueThread;
    v10 = 0;
    v11 = *(_BYTE *)(v19 + 78);
    while ( !*(v9 - 2) || *v9 != v11 )
    {
      ++v10;
      v9 += 24;
      if ( v10 >= 4 )
      {
        v12 = 0;
        v7 = 0;
        goto LABEL_24;
      }
    }
    v18 = v10;
    v7 = v9 - 22;
    v12 = 0;
LABEL_24:
    if ( v7 )
      goto LABEL_4;
    if ( v17 )
    {
      v13 = GuidEntry;
      do
      {
        if ( !*((_BYTE *)v13 + 60) )
        {
          v18 = v12;
          v7 = v13 + 10;
          goto LABEL_29;
        }
        ++v12;
        v13 += 6;
      }
      while ( v12 < 4 );
      v7 = 0;
LABEL_29:
      if ( v7 )
      {
        v7[22] = v11;
        EtwpReferenceUmGuidEntry(GuidEntry);
        a2 = v19;
        goto LABEL_4;
      }
    }
    else
    {
      v15 = (_BYTE *)(a1 + 102);
      do
      {
        if ( *(v15 - 2) && *v15 == v11 )
        {
          v7 = v15 - 22;
          goto LABEL_50;
        }
        ++v12;
        v15 += 24;
      }
      while ( v12 < 4 );
      v7 = 0;
LABEL_50:
      if ( v7 )
        goto LABEL_4;
    }
    GuidEntry[8] = 0;
    return RtlReleaseSRWLockExclusive(GuidEntry + 7);
  }
  v8 = a2;
LABEL_7:
  if ( *(_DWORD *)(v8 + 72) || v5 )
  {
    if ( (*(_WORD *)(a1 + 54) & 0x3FFF) == 2 )
      return EtwpRegisterGuidsApiCallback(v8, a1, 0);
    else
      return EtwpEventApiCallback(v8, a1);
  }
  return result;
}
