/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140734F60 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14073BD54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  const wchar_t *v3; // rsi
  int inited; // ebx
  unsigned int v6; // r13d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  PVOID PoolWithTag; // r14
  ULONG v13; // r12d
  int v14; // eax
  const wchar_t *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  wchar_t v18; // ax
  __int64 v20; // rax
  ULONG v21; // edi
  ULONG v22; // esi
  int v23; // eax
  int v24; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-20h]
  int v26; // [rsp+4Ch] [rbp-1Ch]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int MaxCount; // [rsp+B0h] [rbp+48h] BYREF
  int MaxCount_4; // [rsp+B4h] [rbp+4Ch]
  HANDLE KeyHandle; // [rsp+B8h] [rbp+50h]
  const wchar_t *v31; // [rsp+C0h] [rbp+58h]
  ULONG v32; // [rsp+C8h] [rbp+60h] BYREF

  v31 = a3;
  KeyHandle = a2;
  MaxCount_4 = HIDWORD(a1);
  v3 = a3;
  v32 = 0;
  MaxCount = 0;
  v24 = 0;
  v26 = PnpCtxRegQueryInfoKey(a1, a2, 0LL, 0LL, &v32, &MaxCount, 0LL);
  inited = v26;
  if ( v26 >= 0 )
  {
    v6 = MaxCount + 1;
    v25 = MaxCount + 1;
    if ( v3 )
    {
      v7 = v3;
      if ( *v3 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        inited = v26;
        v25 = v6;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( PoolWithTag )
      {
        v13 = 0;
        if ( v32 )
        {
          while ( 1 )
          {
            MaxCount = v6;
            v14 = PnpCtxRegEnumValue(0LL, KeyHandle, v13, PoolWithTag, &MaxCount, &v24, 0LL, 0LL);
            inited = v14;
            if ( v14 < 0 )
              break;
            if ( v24 == 3 || !v24 )
            {
              v15 = v3;
              if ( *v3 )
              {
                v16 = MaxCount;
                do
                {
                  if ( !wcsncmp(v15, (const wchar_t *)PoolWithTag, v16) )
                  {
                    v18 = v15[v16];
                    if ( v18 == 92 || !v18 )
                      break;
                  }
                  v17 = -1LL;
                  do
                    ++v17;
                  while ( v15[v17] );
                  v15 += v17 + 1;
                }
                while ( *v15 );
                v3 = v31;
                v6 = v25;
              }
              if ( !*v15 )
              {
                DestinationString = 0LL;
                inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
                if ( inited >= 0 )
                  inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
                if ( inited == -1073741772 )
                {
                  inited = 0;
                }
                else if ( inited < 0 )
                {
                  goto LABEL_28;
                }
              }
            }
            if ( ++v13 >= v32 )
              goto LABEL_27;
          }
          if ( v14 == -2147483622 )
            inited = 0;
        }
LABEL_27:
        if ( inited >= 0 )
        {
          while ( *v3 )
          {
            inited = DrvDbSplitDeviceIdDriverInfMatch(v3, (NTSTRSAFE_PWSTR)PoolWithTag, v6);
            if ( inited < 0 )
              break;
            inited = RegRtlSetValue(KeyHandle, 0);
            if ( inited < 0 )
              break;
            v20 = -1LL;
            do
              ++v20;
            while ( v3[v20] );
            v3 += v20 + 1;
          }
        }
LABEL_28:
        ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)inited;
      }
    }
    else
    {
      v21 = v32;
      if ( !v32 )
        return 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v6, 0x42444450u);
      if ( PoolWithTag )
      {
        v22 = 0;
        if ( v21 )
        {
          while ( 1 )
          {
            MaxCount = v6;
            inited = PnpCtxRegEnumValue(0LL, a2, v22, PoolWithTag, &MaxCount, 0LL, 0LL, 0LL);
            if ( inited < 0 )
              break;
            DestinationString = 0LL;
            inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
            if ( inited >= 0 )
              inited = ZwDeleteValueKey(a2, &DestinationString);
            if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
            {
              v23 = 0;
              if ( inited != -1073741772 )
                v23 = inited;
              ++v22;
              inited = v23;
              if ( v22 < v21 )
                continue;
            }
            goto LABEL_28;
          }
          if ( inited == -2147483622 )
            inited = 0;
        }
        goto LABEL_28;
      }
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inited;
}
