/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x14062FB04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     PiDmGetCmObjectListFromCache @ 0x14061F234 (PiDmGetCmObjectListFromCache.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x14062EDF8 (PiDmGetCmObjectConstraintListFromCache.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // eax
  wchar_t *PoolWithTag; // rsi
  __int64 v4; // rdx
  bool v5; // cf
  char v6; // al
  _WORD *v7; // rax
  int inited; // ebx
  const WCHAR *v11; // rdx
  __int64 v12; // r9
  char v13; // al
  int CmObjectListFromCache; // eax
  PVOID v15; // rcx
  ULONG v16; // edx
  __int64 v17; // r9
  char v18; // al
  int v19; // eax
  const wchar_t *v20; // rax
  int v21; // ebx
  wchar_t *v22; // rax
  __int64 v23; // r9
  char v24; // al
  int pcchRemaining; // [rsp+20h] [rbp-49h]
  int pcchRemaininga; // [rsp+20h] [rbp-49h]
  unsigned int dwFlags; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsc; // [rsp+28h] [rbp-41h]
  unsigned int *v31; // [rsp+30h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v33; // [rsp+50h] [rbp-19h] BYREF
  __int128 v34; // [rsp+60h] [rbp-9h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+7h] BYREF
  char v36; // [rsp+78h] [rbp+Fh]
  int v37; // [rsp+79h] [rbp+10h]
  __int16 v38; // [rsp+7Dh] [rbp+14h]
  char v39; // [rsp+7Fh] [rbp+16h]
  PVOID P; // [rsp+80h] [rbp+17h]
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  __int64 v42; // [rsp+90h] [rbp+27h]
  __int64 v43; // [rsp+98h] [rbp+2Fh]
  size_t v44; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  PoolWithTag = 0LL;
  HIDWORD(v41) = 0;
  ppszDestEnd = 0LL;
  v44 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  if ( (v1 & 0x7C) != 0 )
  {
    inited = -1073741802;
LABEL_30:
    if ( PoolWithTag )
    {
      v16 = 1198550608;
      v15 = PoolWithTag;
      goto LABEL_15;
    }
  }
  else
  {
    if ( (v1 & 1) != 0 )
    {
      v20 = *(const wchar_t **)(a1 + 16);
      if ( v20 )
      {
        v21 = 0;
        while ( *v20 )
        {
          if ( *v20 == 92 )
            break;
          if ( (unsigned int)++v21 > 2 )
            break;
          v22 = wcschr(v20, 0x5Cu);
          if ( v22 )
          {
            v20 = v22 + 1;
            if ( v20 )
              continue;
          }
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, *(NTSTRSAFE_PCWSTR *)(a1 + 16), &ppszDestEnd, &v44, 0x800u);
          if ( inited >= 0 )
          {
            if ( v44 < 2 )
            {
              inited = -1073741811;
            }
            else
            {
              *(_DWORD *)ppszDestEnd = 92;
              inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
              if ( inited >= 0 )
              {
                v23 = *(_QWORD *)(a1 + 48);
                *(_QWORD *)&v33 = &DestinationString;
                v24 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
                *(_DWORD *)((char *)&v33 + 9) = 0;
                BYTE8(v33) = v24;
                v34 = *(_OWORD *)(a1 + 32);
                dwFlagsc = *(_QWORD *)(a1 + 64);
                pcchRemaininga = *(_DWORD *)(a1 + 56);
                *(_WORD *)((char *)&v33 + 13) = 0;
                HIBYTE(v33) = 0;
                inited = PiDmGetCmObjectListFromCache(
                           1,
                           (__int64)PiPnpRtlEnumeratorFilterCallback,
                           (__int64)&v33,
                           v23,
                           pcchRemaininga,
                           dwFlagsc);
              }
            }
          }
          goto LABEL_30;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( (v1 & 2) == 0 )
    {
      if ( (v1 & 0x80u) == 0 )
      {
        v17 = *(_QWORD *)(a1 + 48);
        v5 = (v1 & 0x100) != 0;
        *(_DWORD *)((char *)&v33 + 9) = 0;
        v18 = BYTE8(v33);
        if ( v5 )
          v18 = 1;
        *(_WORD *)((char *)&v33 + 13) = 0;
        BYTE8(v33) = v18;
        v34 = *(_OWORD *)(a1 + 32);
        dwFlagsb = *(_QWORD *)(a1 + 64);
        v19 = *(_DWORD *)(a1 + 56);
        HIBYTE(v33) = 0;
        return (unsigned int)PiDmGetCmObjectListFromCache(
                               1,
                               (__int64)PiPnpRtlEnumeratorFilterCallback,
                               (__int64)&v33,
                               v17,
                               v19,
                               dwFlagsb);
      }
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v5 = (v1 & 0x100) != 0;
        *(_DWORD *)((char *)&v33 + 9) = 0;
        v6 = BYTE8(v33);
        if ( v5 )
          v6 = 1;
        *(_WORD *)((char *)&v33 + 13) = 0;
        BYTE8(v33) = v6;
        v34 = *(_OWORD *)(a1 + 32);
        v31 = *(unsigned int **)(a1 + 64);
        dwFlags = *(_DWORD *)(a1 + 56);
        v7 = *(_WORD **)(a1 + 48);
        HIBYTE(v33) = 0;
        return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                               5,
                               v4,
                               (__int64)PiPnpRtlEnumeratorFilterCallback,
                               (__int64)&v33,
                               v7,
                               dwFlags,
                               v31);
      }
      return (unsigned int)-1073741811;
    }
    v11 = *(const WCHAR **)(a1 + 16);
    if ( !v11 )
      return (unsigned int)-1073741811;
    inited = RtlInitUnicodeStringEx(&DestinationString, v11);
    if ( inited >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 48);
      p_DestinationString = &DestinationString;
      v13 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
      v37 = 0;
      v36 = v13;
      v42 = *(_QWORD *)(a1 + 32);
      v43 = *(_QWORD *)(a1 + 40);
      dwFlagsa = *(_QWORD *)(a1 + 64);
      pcchRemaining = *(_DWORD *)(a1 + 56);
      v38 = 0;
      v39 = 0;
      v41 = 0LL;
      P = 0LL;
      CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                1,
                                (__int64)PiPnpRtlServiceFilterCallback,
                                (__int64)&p_DestinationString,
                                v12,
                                pcchRemaining,
                                dwFlagsa);
      v15 = P;
      inited = CmObjectListFromCache;
      if ( P )
      {
        v16 = 0;
LABEL_15:
        ExFreePoolWithTag(v15, v16);
      }
    }
  }
  return (unsigned int)inited;
}
