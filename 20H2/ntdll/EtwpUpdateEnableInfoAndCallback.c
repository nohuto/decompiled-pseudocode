/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x180043594
 * Callers:
 *     EtwpSetProviderTraits @ 0x180042B88 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042F0C (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x180045034 (EtwpDisableTraceProviders.c)
 *     EtwpProcessNotification @ 0x180045830 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x1800433D4 (EtwpFindGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180043974 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180046670 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050C48 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050CD0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800832A4 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800836EC (EtwpAllocateUmGuidEntry.c)
 *     EtwpIsPrivateLoggerOn @ 0x1800848E0 (EtwpIsPrivateLoggerOn.c)
 *     EtwpReferenceUmGuidEntry @ 0x180084E20 (EtwpReferenceUmGuidEntry.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800872D4 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r14d
  _QWORD *GuidEntry; // rbx
  unsigned int v4; // r12d
  char v7; // bp
  char v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // r8
  char v11; // dl
  _BYTE *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // rcx
  _QWORD *v17; // r8
  unsigned int v18; // ecx
  _BYTE *v19; // rax

  v2 = *(_DWORD *)(a2 + 72);
  GuidEntry = *(_QWORD **)(a1 + 248);
  v4 = 4;
  v7 = 0;
  v8 = 0;
  v9 = 0x3FFFLL;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v10 = (_QWORD *)(a1 + 104);
LABEL_4:
      v7 = *((_BYTE *)v10 + 20);
      *v10 = *(_QWORD *)(a2 + 96);
      v10[1] = *(_QWORD *)(a2 + 88);
      *((_BYTE *)v10 + 21) = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v10 + 4) = *(_DWORD *)(a2 + 80);
      *((_BYTE *)v10 + 20) = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v14 = 3LL * v4;
          *(_OWORD *)(a1 + 8 * v14 + 128) = *(_OWORD *)v10;
          *(_QWORD *)(a1 + 8 * v14 + 144) = v10[2];
        }
        EtwpUpdatePrivateEnableInfo(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *((_DWORD *)GuidEntry + 12) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
        if ( v4 < 4 && !v2 )
          EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
      }
      goto LABEL_6;
    }
    v8 = 1;
    if ( v2 == 1 && !(unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !GuidEntry )
    {
      if ( !v2 )
        return;
      GuidEntry = EtwpFindGuidEntry((_QWORD *)(a1 + 32));
      if ( !GuidEntry )
      {
        GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 32);
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 248) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry, v9);
    v11 = *(_BYTE *)(a2 + 78);
    v12 = (char *)GuidEntry + 78;
    v13 = 0;
    while ( !*(v12 - 2) || *v12 != v11 )
    {
      ++v13;
      v12 += 24;
      if ( v13 >= 4 )
      {
        v10 = 0LL;
        goto LABEL_21;
      }
    }
    v4 = v13;
    v10 = &GuidEntry[2 * v13 + 7 + v13];
LABEL_21:
    if ( v10 )
      goto LABEL_4;
    if ( v2 )
    {
      v15 = 0LL;
      v16 = (char *)GuidEntry + 76;
      do
      {
        if ( !*v16 )
        {
          v4 = v15;
          v17 = &GuidEntry[2 * v15 + 7 + v15];
          goto LABEL_36;
        }
        v15 = (unsigned int)(v15 + 1);
        v16 += 24;
      }
      while ( (unsigned int)v15 < 4 );
      v17 = 0LL;
LABEL_36:
      if ( v17 )
      {
        *((_BYTE *)v17 + 22) = v11;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_4;
      }
    }
    else
    {
      v18 = 0;
      v19 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v19 - 2) && *v19 == v11 )
        {
          v10 = (_QWORD *)(a1 + 8 * (v18 + 2 * (v18 + 8LL)));
          goto LABEL_48;
        }
        ++v18;
        v19 += 24;
      }
      while ( v18 < 4 );
      v10 = 0LL;
LABEL_48:
      if ( v10 )
        goto LABEL_4;
    }
    *((_DWORD *)GuidEntry + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      EtwpRegisterGuidsApiCallback(a2, a1, 0LL);
    else
      EtwpEventApiCallback(a2, a1);
  }
}
