/*
 * XREFs of PfSnPrefetchMetadata @ 0x140633050
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1406E79A4 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x140601020 (NtCreateEvent.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     PfpPrefetchEntireDirectory @ 0x140633338 (PfpPrefetchEntireDirectory.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14063441C (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnPrefetchFileMetadata @ 0x1406D1048 (PfSnPrefetchFileMetadata.c)
 *     PfSnLogPrefetchMetadata @ 0x1406DA774 (PfSnLogPrefetchMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  unsigned int v6; // r13d
  int Event; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 PrefetchVolumeInfoInList; // rax
  __int64 v12; // r14
  _DWORD *v13; // rdx
  unsigned int j; // ecx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned __int16 *v21; // r13
  unsigned int v22; // r12d
  unsigned int v23; // eax
  unsigned int *v24; // rdi
  __int64 v25; // r15
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-69h]
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  _DWORD v35[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-31h]
  int v38; // [rsp+60h] [rbp-29h]
  int v39; // [rsp+64h] [rbp-25h]
  __int128 v40; // [rsp+68h] [rbp-21h]
  __int64 v41; // [rsp+78h] [rbp-11h]
  __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+67h]
  unsigned int v46; // [rsp+F8h] [rbp+6Fh]
  int i; // [rsp+100h] [rbp+77h]
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v46 = a2;
  v3 = *a1;
  v4 = 0;
  v35[1] = 0;
  v39 = 0;
  v42 = v3;
  Handle = 0LL;
  v34 = 0LL;
  LOBYTE(a3) = 1;
  v6 = a2;
  DestinationString = 0LL;
  v33 = 0LL;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    v35[0] = 48;
    v36 = 0LL;
    v38 = 512;
    p_DestinationString = 0LL;
    v40 = 0LL;
    Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (int)v35, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      v8 = v3 + *(unsigned int *)(v3 + 108);
      v9 = 0LL;
      v43 = v8;
      for ( i = 0; (unsigned int)v9 < *(_DWORD *)(v3 + 112); i = v9 )
      {
        v10 = (unsigned int *)(v8 + 96 * v9);
        PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v8 + *v10));
        v12 = PrefetchVolumeInfoInList;
        if ( PrefetchVolumeInfoInList && (*(_DWORD *)(PrefetchVolumeInfoInList + 108) & 1) != 0 )
        {
          v13 = v10 + 9;
          for ( j = 0; j < 7; ++j )
          {
            if ( _bittest((const int *)&v6, j) )
              v4 += *v13 + v13[7];
            ++v13;
          }
          LODWORD(v32) = v4;
          PfSnPrefetchFileMetadata(
            a1,
            *(_QWORD *)(PrefetchVolumeInfoInList + 32),
            v8 + v10[5],
            *(unsigned int *)(PrefetchVolumeInfoInList + 104),
            v32,
            Handle);
          *(_DWORD *)(v12 + 104) += v4;
          v15 = a1[10];
          v41 = v15;
          *(_DWORD *)v15 = 4;
          v16 = *((_DWORD *)a1 + 24);
          v17 = *((_DWORD *)a1 + 25) & 7 | 8;
          *(_DWORD *)(v15 + 4) = 768;
          *(_QWORD *)(v15 + 8) = v16 & 7 | (unsigned __int64)(unsigned int)(8 * v17);
          v18 = 0;
          v19 = (_QWORD *)(v15 + 16);
          do
          {
            v20 = v18++;
            *v19++ = v20 << 12;
          }
          while ( v18 < 0x300 );
          v21 = *(unsigned __int16 **)(v12 + 96);
          v22 = 0;
          v23 = v46;
          v24 = v10 + 16;
          v25 = v41;
          v45 = 0;
          do
          {
            if ( _bittest((const int *)&v23, v22) )
            {
              v27 = 0;
              if ( *v24 )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, &v21[*(unsigned int *)(v12 + 24) + 2]);
                  v28 = a1[1];
                  v36 = *(_QWORD *)(v12 + 64);
                  v35[0] = 48;
                  p_DestinationString = &DestinationString;
                  v38 = 576;
                  v34 = 0LL;
                  v40 = 0LL;
                  v33 = 0LL;
                  PfpPrefetchEntireDirectory(v28, v12 + 32, v25, &v33, v35);
                  if ( (_QWORD)v33 && *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31) )
                  {
                    v29 = v34;
                    v30 = 3LL * *((unsigned int *)a1 + 30);
                    v31 = a1[14];
                    *(_OWORD *)(v31 + 8 * v30) = v33;
                    *(_QWORD *)(v31 + 8 * v30 + 16) = v29;
                    ++*((_DWORD *)a1 + 30);
                  }
                  ++v27;
                  v21 += *v21 + 2;
                }
                while ( v27 < *v24 );
                v22 = v45;
                v23 = v46;
              }
            }
            ++v22;
            ++v24;
            v45 = v22;
          }
          while ( v22 < 7 );
          v3 = v42;
          v4 = 0;
          v8 = v43;
          *(_QWORD *)(v12 + 96) = v21;
          v6 = v46;
        }
        v9 = (unsigned int)(i + 1);
      }
      Event = 0;
    }
    if ( Handle )
      NtClose(Handle);
  }
  else
  {
    Event = -1073741811;
  }
  PfSnLogPrefetchMetadata(v3, v6, 0LL);
  return (unsigned int)Event;
}
