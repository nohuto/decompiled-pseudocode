/*
 * XREFs of PfSnPrefetchMetadata @ 0x1407DE1A8
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1407D74C4 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     PfSnLogPrefetchMetadata @ 0x1407DC44C (PfSnLogPrefetchMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x1407DE480 (PfpPrefetchEntireDirectory.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1407DFBDC (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnPrefetchFileMetadata @ 0x1407E0048 (PfSnPrefetchFileMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r12d
  int v5; // r13d
  int Event; // ebx
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int *v9; // rbx
  __int64 PrefetchVolumeInfoInList; // rax
  __int64 v11; // r14
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
  int v23; // eax
  unsigned int *v24; // rbx
  __int64 v25; // r15
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // xmm1_8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-69h]
  __int128 v32; // [rsp+30h] [rbp-59h] BYREF
  __int64 v33; // [rsp+40h] [rbp-49h]
  _DWORD v34[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v35; // [rsp+50h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-31h]
  int v37; // [rsp+60h] [rbp-29h]
  int v38; // [rsp+64h] [rbp-25h]
  __int128 v39; // [rsp+68h] [rbp-21h]
  __int64 v40; // [rsp+78h] [rbp-11h]
  __int64 v41; // [rsp+80h] [rbp-9h]
  __int64 v42; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v44; // [rsp+F0h] [rbp+67h]
  int i; // [rsp+100h] [rbp+77h]
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0;
  v34[1] = 0;
  v38 = 0;
  v33 = 0LL;
  v41 = v2;
  Handle = 0LL;
  v5 = a2;
  DestinationString = 0LL;
  v32 = 0LL;
  PfSnLogPrefetchMetadata(v2, a2, 1);
  if ( v2 )
  {
    v34[0] = 48;
    v35 = 0LL;
    v37 = 512;
    p_DestinationString = 0LL;
    v39 = 0LL;
    Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (int)v34, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      v7 = v2 + *(unsigned int *)(v2 + 108);
      v8 = 0LL;
      v42 = v7;
      for ( i = 0; (unsigned int)v8 < *(_DWORD *)(v2 + 112); i = v8 )
      {
        v9 = (unsigned int *)(v7 + 96 * v8);
        PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v7 + *v9));
        v11 = PrefetchVolumeInfoInList;
        if ( PrefetchVolumeInfoInList && (*(_DWORD *)(PrefetchVolumeInfoInList + 108) & 1) != 0 )
        {
          v13 = v9 + 9;
          for ( j = 0; j < 7; ++j )
          {
            if ( _bittest(&v5, j) )
              v3 += *v13 + v13[7];
            ++v13;
          }
          LODWORD(v31) = v3;
          PfSnPrefetchFileMetadata(
            a1,
            *(_QWORD *)(PrefetchVolumeInfoInList + 32),
            v7 + v9[5],
            *(unsigned int *)(PrefetchVolumeInfoInList + 104),
            v31,
            Handle);
          *(_DWORD *)(v11 + 104) += v3;
          v15 = *(_QWORD *)(a1 + 80);
          v40 = v15;
          *(_DWORD *)v15 = 4;
          v16 = *(_DWORD *)(a1 + 96);
          v17 = *(_DWORD *)(a1 + 100) & 7 | 8;
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
          v21 = *(unsigned __int16 **)(v11 + 96);
          v22 = 0;
          v23 = a2;
          v24 = v9 + 16;
          v25 = v40;
          v44 = 0;
          do
          {
            if ( _bittest(&v23, v22) )
            {
              v26 = 0;
              if ( *v24 )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, &v21[*(unsigned int *)(v11 + 24) + 2]);
                  v27 = *(_QWORD *)(a1 + 8);
                  v35 = *(_QWORD *)(v11 + 64);
                  v34[0] = 48;
                  p_DestinationString = &DestinationString;
                  v37 = 576;
                  v33 = 0LL;
                  v39 = 0LL;
                  v32 = 0LL;
                  PfpPrefetchEntireDirectory(v27, v11 + 32, v25, &v32, v34);
                  if ( (_QWORD)v32 && *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124) )
                  {
                    v28 = v33;
                    v29 = 3LL * *(unsigned int *)(a1 + 120);
                    v30 = *(_QWORD *)(a1 + 112);
                    *(_OWORD *)(v30 + 8 * v29) = v32;
                    *(_QWORD *)(v30 + 8 * v29 + 16) = v28;
                    ++*(_DWORD *)(a1 + 120);
                  }
                  ++v26;
                  v21 += *v21 + 2;
                }
                while ( v26 < *v24 );
                v22 = v44;
                v23 = a2;
              }
            }
            ++v22;
            ++v24;
            v44 = v22;
          }
          while ( v22 < 7 );
          v2 = v41;
          v3 = 0;
          v7 = v42;
          *(_QWORD *)(v11 + 96) = v21;
          v5 = a2;
        }
        v8 = (unsigned int)(i + 1);
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
  PfSnLogPrefetchMetadata(v2, v5, 0);
  return (unsigned int)Event;
}
