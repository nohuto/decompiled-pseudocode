/*
 * XREFs of BcdEnumerateObjects @ 0x14096ED0C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1409241E8 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14039B59C (BiIsOfflineHandle.c)
 *     RtlGUIDFromString @ 0x140644870 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x140781FD8 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x140783528 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x14096F274 (BiIsEnumerateMatch.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

int __fastcall BcdEnumerateObjects(__int64 a1, _DWORD *a2, GUID *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v5; // r12
  GUID *v6; // rsi
  char v8; // r15
  int result; // eax
  PCWSTR *v10; // rdi
  int v11; // eax
  void *v12; // r14
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // r13
  const WCHAR **v17; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v19; // rax
  _QWORD *v20; // r13
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // r14d
  ULONG i; // r12d
  int v25; // ebx
  __int64 v26; // rax
  char IsOfflineHandle; // [rsp+20h] [rbp-40h]
  ULONG v28; // [rsp+24h] [rbp-3Ch] BYREF
  void *v29; // [rsp+28h] [rbp-38h] BYREF
  PCWSTR *v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  void *v32; // [rsp+40h] [rbp-20h] BYREF
  ULONG v33; // [rsp+48h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  GUID *Guid; // [rsp+B0h] [rbp+50h]

  Guid = a3;
  v31 = 0LL;
  v5 = a4;
  v29 = 0LL;
  v6 = a3;
  v28 = 0;
  DestinationString = 0LL;
  if ( !a3 && *a4 || !a5 || !*a2 )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle(a1);
  v8 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v32 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = BiOpenKey(a1, L"Objects", 0x20019u, &v32);
    v12 = v32;
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = BiEnumerateSubKeys(v32, &v30, &v28);
      v10 = v30;
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( v28 )
        {
          v16 = v28;
          v17 = v30;
          do
          {
            if ( (int)BiOpenKey((__int64)v12, *v17, 0x20019u, &v29) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)v29, &v31);
              BiCloseKey(v29);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch((unsigned int)a2[1], HIDWORD(v31)) )
                  ++v15;
              }
            }
            ++v17;
            --v16;
          }
          while ( v16 );
          v5 = a4;
          v6 = Guid;
        }
        v19 = 24LL * v15;
        if ( v19 > 0xFFFFFFFF
          || (v20 = (_QWORD *)((char *)&v6->Data1 + (unsigned int)v19), v21 = 8LL * v15, v21 > 0xFFFFFFFF)
          || (v22 = v21 + v19, LODWORD(v30) = v21 + v19, (int)v21 + (int)v19 < (unsigned int)v19) )
        {
          v13 = -1073741675;
        }
        else if ( v22 <= *v5 )
        {
          v33 = 0;
          v23 = 0;
          if ( v28 )
          {
            for ( i = v33; i < v28; ++i )
            {
              if ( v23 >= v15 )
                break;
              if ( (int)BiOpenKey((__int64)v32, v10[i], 0x20019u, &v29) >= 0 )
              {
                v25 = BiGetObjectDescription((__int64)v29, &v31);
                BiCloseKey(v29);
                if ( v25 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch((unsigned int)a2[1], HIDWORD(v31)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v10[i]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v26 = v31;
                      *(_QWORD *)&Guid[1].Data1 = v20;
                      *v20++ = v26;
                      ++v23;
                      Guid = (GUID *)((char *)Guid + 24);
                    }
                  }
                }
              }
            }
            v22 = (unsigned int)v30;
            v5 = a4;
          }
          v13 = 0;
          *v5 = v22;
          *a5 = v23;
          v12 = v32;
        }
        else
        {
          v13 = -1073741789;
          *v5 = v22;
          *a5 = v15;
        }
        v8 = IsOfflineHandle;
      }
    }
    if ( v12 )
      BiCloseKey(v12);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B444342u);
    BiReleaseBcdSyncMutant(v8);
    return v13;
  }
  return result;
}
