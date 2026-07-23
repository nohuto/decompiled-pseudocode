/*
 * XREFs of PfSnPrefetchMetadata @ 0x140676A74
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140674F94 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PfSnPrefetchFileMetadata @ 0x14067563C (PfSnPrefetchFileMetadata.c)
 *     PfSnLogPrefetchMetadata @ 0x1406760B8 (PfSnLogPrefetchMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x140676D5C (PfpPrefetchEntireDirectory.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140677B7C (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     NtCreateEvent @ 0x14071B0B0 (NtCreateEvent.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r12d
  int v5; // r13d
  NTSTATUS v6; // edi
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int *v9; // rdi
  __int64 PrefetchVolumeInfoInList; // rax
  __int64 v11; // r14
  _DWORD *v12; // rdx
  unsigned int j; // ecx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned __int16 *v20; // r13
  unsigned int v21; // r12d
  int v22; // eax
  unsigned int *v23; // rdi
  __int64 v24; // r15
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // xmm1_8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int128 v31; // [rsp+30h] [rbp-59h] BYREF
  __int64 v32; // [rsp+40h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  __int64 v34; // [rsp+78h] [rbp-11h]
  __int64 v35; // [rsp+80h] [rbp-9h]
  __int64 v36; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v38; // [rsp+F0h] [rbp+67h]
  int i; // [rsp+100h] [rbp+77h]
  HANDLE EventHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v35 = v2;
  EventHandle = 0LL;
  v32 = 0LL;
  v5 = a2;
  DestinationString = 0LL;
  v31 = 0LL;
  PfSnLogPrefetchMetadata(v2, a2, 1);
  if ( v2 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v6 >= 0 )
    {
      v7 = v2 + *(unsigned int *)(v2 + 108);
      v8 = 0LL;
      v36 = v7;
      for ( i = 0; (unsigned int)v8 < *(_DWORD *)(v2 + 112); i = v8 )
      {
        v9 = (unsigned int *)(v7 + 96 * v8);
        PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v7 + *v9));
        v11 = PrefetchVolumeInfoInList;
        if ( PrefetchVolumeInfoInList && (*(_DWORD *)(PrefetchVolumeInfoInList + 108) & 1) != 0 )
        {
          v12 = v9 + 9;
          for ( j = 0; j < 7; ++j )
          {
            if ( _bittest(&v5, j) )
              v3 += *v12 + v12[7];
            ++v12;
          }
          PfSnPrefetchFileMetadata(
            a1,
            *(_QWORD *)(PrefetchVolumeInfoInList + 32),
            v7 + v9[5],
            *(_DWORD *)(PrefetchVolumeInfoInList + 104),
            v3,
            EventHandle);
          *(_DWORD *)(v11 + 104) += v3;
          v14 = *(_QWORD *)(a1 + 80);
          v34 = v14;
          *(_DWORD *)v14 = 4;
          v15 = *(_DWORD *)(a1 + 96);
          v16 = *(_DWORD *)(a1 + 100) & 7 | 8;
          *(_DWORD *)(v14 + 4) = 768;
          *(_QWORD *)(v14 + 8) = v15 & 7 | (unsigned __int64)(unsigned int)(8 * v16);
          v17 = 0;
          v18 = (_QWORD *)(v14 + 16);
          do
          {
            v19 = v17++;
            *v18++ = v19 << 12;
          }
          while ( v17 < 0x300 );
          v20 = *(unsigned __int16 **)(v11 + 96);
          v21 = 0;
          v22 = a2;
          v23 = v9 + 16;
          v24 = v34;
          v38 = 0;
          do
          {
            if ( _bittest(&v22, v21) )
            {
              v26 = 0;
              if ( *v23 )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, &v20[*(unsigned int *)(v11 + 24) + 2]);
                  v27 = *(_QWORD *)(a1 + 8);
                  ObjectAttributes.RootDirectory = *(HANDLE *)(v11 + 64);
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Attributes = 576;
                  v32 = 0LL;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v31 = 0LL;
                  PfpPrefetchEntireDirectory(v27, v11 + 32, v24, &v31, &ObjectAttributes);
                  if ( (_QWORD)v31 && *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124) )
                  {
                    v28 = v32;
                    v29 = 3LL * *(unsigned int *)(a1 + 120);
                    v30 = *(_QWORD *)(a1 + 112);
                    *(_OWORD *)(v30 + 8 * v29) = v31;
                    *(_QWORD *)(v30 + 8 * v29 + 16) = v28;
                    ++*(_DWORD *)(a1 + 120);
                  }
                  ++v26;
                  v20 += *v20 + 2;
                }
                while ( v26 < *v23 );
                v21 = v38;
                v22 = a2;
              }
            }
            ++v21;
            ++v23;
            v38 = v21;
          }
          while ( v21 < 7 );
          v2 = v35;
          v3 = 0;
          v7 = v36;
          *(_QWORD *)(v11 + 96) = v20;
          v5 = a2;
        }
        v8 = (unsigned int)(i + 1);
      }
      v6 = 0;
    }
    if ( EventHandle )
      NtClose(EventHandle);
  }
  else
  {
    v6 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v2, v5, 0);
  return (unsigned int)v6;
}
