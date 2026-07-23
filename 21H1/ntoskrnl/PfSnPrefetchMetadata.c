/*
 * XREFs of PfSnPrefetchMetadata @ 0x1406C3990
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1406C3480 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x1406013B0 (NtCreateEvent.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14063A33C (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfpPrefetchEntireDirectory @ 0x1406C3C78 (PfpPrefetchEntireDirectory.c)
 *     PfSnLogPrefetchMetadata @ 0x1406C3DEC (PfSnLogPrefetchMetadata.c)
 *     PfSnPrefetchFileMetadata @ 0x1406C3E84 (PfSnPrefetchFileMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  unsigned int v6; // r13d
  NTSTATUS v7; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int *v11; // rdi
  _QWORD *PrefetchVolumeInfoInList; // rax
  _QWORD *v13; // r14
  _DWORD *v14; // rdx
  unsigned int i; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned __int16 *v22; // r13
  unsigned int v23; // r12d
  unsigned int v24; // eax
  unsigned int *v25; // rdi
  __int64 v26; // r15
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h]
  __int64 v37; // [rsp+80h] [rbp-9h]
  __int64 v38; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v40; // [rsp+F0h] [rbp+67h]
  unsigned int v41; // [rsp+F8h] [rbp+6Fh]
  int v42; // [rsp+100h] [rbp+77h]
  HANDLE EventHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v41 = a2;
  v3 = *a1;
  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v37 = v3;
  EventHandle = 0LL;
  v34 = 0LL;
  LOBYTE(a3) = 1;
  v6 = a2;
  DestinationString = 0LL;
  v33 = 0LL;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 >= 0 )
    {
      v8 = v3 + *(unsigned int *)(v3 + 108);
      v9 = 0LL;
      v38 = v8;
      v42 = 0;
      if ( *(_DWORD *)(v3 + 112) )
      {
        v10 = a1 + 5;
        do
        {
          v11 = (unsigned int *)(v8 + 96 * v9);
          PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v8 + *v11), v10, 1);
          v13 = PrefetchVolumeInfoInList;
          if ( PrefetchVolumeInfoInList && (*((_DWORD *)PrefetchVolumeInfoInList + 27) & 1) != 0 )
          {
            v14 = v11 + 9;
            for ( i = 0; i < 7; ++i )
            {
              if ( _bittest((const int *)&v6, i) )
                v4 += *v14 + v14[7];
              ++v14;
            }
            PfSnPrefetchFileMetadata(
              a1,
              PrefetchVolumeInfoInList[4],
              v8 + v11[5],
              *((unsigned int *)PrefetchVolumeInfoInList + 26),
              v4,
              EventHandle);
            *((_DWORD *)v13 + 26) += v4;
            v16 = a1[10];
            v36 = v16;
            *(_DWORD *)v16 = 4;
            v17 = *((_DWORD *)a1 + 24);
            v18 = *((_DWORD *)a1 + 25) & 7 | 8;
            *(_DWORD *)(v16 + 4) = 768;
            *(_QWORD *)(v16 + 8) = v17 & 7 | (unsigned __int64)(unsigned int)(8 * v18);
            v19 = 0;
            v20 = (_QWORD *)(v16 + 16);
            do
            {
              v21 = v19++;
              *v20++ = v21 << 12;
            }
            while ( v19 < 0x300 );
            v22 = (unsigned __int16 *)v13[12];
            v23 = 0;
            v24 = v41;
            v25 = v11 + 16;
            v26 = v36;
            v40 = 0;
            do
            {
              if ( _bittest((const int *)&v24, v23) )
              {
                v28 = 0;
                if ( *v25 )
                {
                  do
                  {
                    RtlInitUnicodeString(&DestinationString, &v22[*((unsigned int *)v13 + 6) + 2]);
                    v29 = a1[1];
                    ObjectAttributes.RootDirectory = (HANDLE)v13[8];
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = &DestinationString;
                    ObjectAttributes.Attributes = 576;
                    v34 = 0LL;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    v33 = 0LL;
                    PfpPrefetchEntireDirectory(v29, v13 + 4, v26, &v33, &ObjectAttributes);
                    if ( (_QWORD)v33 && *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31) )
                    {
                      v30 = v34;
                      v31 = 3LL * *((unsigned int *)a1 + 30);
                      v32 = a1[14];
                      *(_OWORD *)(v32 + 8 * v31) = v33;
                      *(_QWORD *)(v32 + 8 * v31 + 16) = v30;
                      ++*((_DWORD *)a1 + 30);
                    }
                    ++v28;
                    v22 += *v22 + 2;
                  }
                  while ( v28 < *v25 );
                  v23 = v40;
                  v24 = v41;
                }
              }
              ++v23;
              ++v25;
              v40 = v23;
            }
            while ( v23 < 7 );
            v3 = v37;
            v4 = 0;
            v8 = v38;
            v13[12] = v22;
            v6 = v41;
          }
          v10 = a1 + 5;
          v9 = (unsigned int)(v42 + 1);
          v42 = v9;
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v3 + 112) );
      }
      v7 = 0;
    }
    if ( EventHandle )
      NtClose(EventHandle);
  }
  else
  {
    v7 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v3, v6, 0LL);
  return (unsigned int)v7;
}
