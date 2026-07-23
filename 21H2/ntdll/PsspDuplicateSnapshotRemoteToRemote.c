/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180114180 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     Feature_3106716987__private_IsEnabledDeviceUsage @ 0x18009D104 (Feature_3106716987__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x18009D140 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009DD40 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009DD80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009DDE0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114200 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  PVOID v6; // rsi
  PVOID *v8; // r15
  unsigned int v9; // r13d
  int v10; // ebx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  SIZE_T v31; // r15
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v34; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v36; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BufferSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v39; // [rsp+70h] [rbp-90h]
  _QWORD v40[144]; // [rsp+80h] [rbp-80h] BYREF
  __int64 Buffer[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v42; // [rsp+878h] [rbp+778h]
  HANDLE v43; // [rsp+880h] [rbp+780h]
  __int64 v44; // [rsp+888h] [rbp+788h]
  HANDLE v45; // [rsp+898h] [rbp+798h]
  HANDLE v46; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v47; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v48; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v49; // [rsp+968h] [rbp+868h]

  v36 = BaseAddress;
  v39 = a4;
  v6 = BaseAddress;
  BaseAddressa = 0LL;
  v34 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v40, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, v6, Buffer, 0x478uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_48;
  if ( BufferSize == 1144 )
  {
    if ( LODWORD(Buffer[0]) == 1146311504 )
    {
      if ( (unsigned int)Feature_3106716987__private_IsEnabledDeviceUsage() )
      {
        v10 = PssValidateSnapshotDescriptor(Buffer);
        if ( v10 < 0 )
          goto LABEL_48;
      }
      if ( LODWORD(Buffer[0]) == 1146311504 )
      {
        v11 = (unsigned __int64)v42 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v9 = v11 + 1144;
          if ( (unsigned int)v11 < 0xFFFFFB88 )
          {
            v12 = 8LL;
            v13 = v40;
            v14 = Buffer;
            do
            {
              v15 = *((_OWORD *)v14 + 1);
              *(_OWORD *)v13 = *(_OWORD *)v14;
              v16 = *((_OWORD *)v14 + 2);
              *((_OWORD *)v13 + 1) = v15;
              v17 = *((_OWORD *)v14 + 3);
              *((_OWORD *)v13 + 2) = v16;
              v18 = *((_OWORD *)v14 + 4);
              *((_OWORD *)v13 + 3) = v17;
              v19 = *((_OWORD *)v14 + 5);
              *((_OWORD *)v13 + 4) = v18;
              v20 = *((_OWORD *)v14 + 6);
              *((_OWORD *)v13 + 5) = v19;
              v21 = *((_OWORD *)v14 + 7);
              v14 += 16;
              *((_OWORD *)v13 + 6) = v20;
              v13 += 16;
              *((_OWORD *)v13 - 1) = v21;
              --v12;
            }
            while ( v12 );
            v22 = (void *)Buffer[109];
            v23 = *((_OWORD *)v14 + 1);
            *(_OWORD *)v13 = *(_OWORD *)v14;
            v24 = *((_OWORD *)v14 + 2);
            *((_OWORD *)v13 + 1) = v23;
            v25 = *((_OWORD *)v14 + 3);
            *((_OWORD *)v13 + 2) = v24;
            v26 = *((_OWORD *)v14 + 4);
            *((_OWORD *)v13 + 3) = v25;
            v27 = *((_OWORD *)v14 + 5);
            *((_OWORD *)v13 + 4) = v26;
            v28 = *((_OWORD *)v14 + 6);
            v29 = v14[14];
            *((_OWORD *)v13 + 5) = v27;
            *((_OWORD *)v13 + 6) = v28;
            v13[14] = v29;
            v40[109] = 0LL;
            v40[112] = 0LL;
            v40[115] = 0LL;
            v40[118] = 0LL;
            v40[122] = 0LL;
            v40[126] = 0LL;
            v40[141] = 0LL;
            if ( v22 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v22, SourceProcessHandle, (PHANDLE)&v40[109], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v43 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v43, SourceProcessHandle, (PHANDLE)&v40[112], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v45 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v45, SourceProcessHandle, (PHANDLE)&v40[115], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v46 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v46, SourceProcessHandle, (PHANDLE)&v40[118], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v47 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v47, SourceProcessHandle, (PHANDLE)&v40[122], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v48 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v48, SourceProcessHandle, (PHANDLE)&v40[126], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            if ( v49 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v49, SourceProcessHandle, (PHANDLE)&v40[141], 0, 0, 2u);
              if ( v10 < 0 )
                goto LABEL_48;
            }
            RegionSize = v9;
            v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v10 < 0 )
              goto LABEL_48;
            HIDWORD(v40[0]) = HIDWORD(v40[0]) & 0xFFFFFFF8 | 1;
            if ( v40[113] )
              v40[113] = (char *)BaseAddressa + 1144;
            if ( LOWORD(v40[35]) )
              v40[36] = (char *)BaseAddressa + 296;
            v10 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v40, 0x478uLL, 0LL);
            if ( v10 < 0 )
              goto LABEL_48;
            if ( v44 )
            {
              RegionSize = 1LL;
              v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, 0LL, &RegionSize, 0x1000u, 4u);
              if ( v10 < 0 )
                goto LABEL_48;
              v30 = 0LL;
              if ( (_DWORD)v11 )
              {
                while ( 1 )
                {
                  v31 = (unsigned int)v11 - v30;
                  if ( RegionSize <= v31 )
                    v31 = RegionSize;
                  v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v30 + v44), v34, v31, &BufferSize);
                  if ( v10 < 0 )
                    break;
                  if ( BufferSize != v31 )
                    goto LABEL_46;
                  v10 = NtWriteVirtualMemory(
                          SourceProcessHandle,
                          (char *)BaseAddressa + v30 + 1144,
                          v34,
                          BufferSize,
                          &NumberOfBytesWritten);
                  if ( v10 < 0 )
                    break;
                  if ( NumberOfBytesWritten != BufferSize )
                  {
LABEL_46:
                    v10 = -2147483635;
                    break;
                  }
                  v30 += NumberOfBytesWritten;
                  if ( v30 >= (unsigned int)v11 )
                  {
                    v8 = v39;
                    goto LABEL_44;
                  }
                }
                v6 = v36;
                goto LABEL_48;
              }
LABEL_44:
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, &RegionSize, 0x8000u);
              v6 = v36;
              v34 = 0LL;
            }
            v10 = 0;
            *v8 = BaseAddressa;
            goto LABEL_66;
          }
          v9 = -1;
        }
        v10 = -1073741675;
        goto LABEL_48;
      }
    }
    v10 = -1073741816;
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_48:
  if ( v34 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v40[126] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[126], 0LL, 0LL, 0, 0, 1u);
  if ( v40[122] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[122], 0LL, 0LL, 0, 0, 1u);
  if ( v40[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[115], 0LL, 0LL, 0, 0, 1u);
  if ( v40[118] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[118], 0LL, 0LL, 0, 0, 1u);
  if ( v40[112] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[112], 0LL, 0LL, 0, 0, 1u);
  if ( v40[109] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[109], 0LL, 0LL, 0, 0, 1u);
  if ( v40[141] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v40[141], 0LL, 0LL, 0, 0, 1u);
LABEL_66:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, (PVOID *)v6);
  return (unsigned int)v10;
}
