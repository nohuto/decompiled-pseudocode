/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140A46940
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x14079D1B0 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     IopCheckDiskName @ 0x1403B4298 (IopCheckDiskName.c)
 *     IopAddBootDiskInformation @ 0x1403B46C4 (IopAddBootDiskInformation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     VhdiGetDiskParameters @ 0x140A95628 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // r14d
  int v3; // edx
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  SIZE_T v6; // rbx
  unsigned int *Pool; // rax
  unsigned int *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  unsigned int v11; // r15d
  __int16 *v12; // rsi
  int *v13; // r12
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rcx
  int v18; // ecx
  __int128 v19; // xmm0
  _BYTE v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  char v22; // [rsp+36h] [rbp-CAh]
  ULONG v23; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v24[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h]
  _OWORD *v26; // [rsp+60h] [rbp-A0h] BYREF
  STRING v27; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v29[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v30[4]; // [rsp+110h] [rbp+10h] BYREF
  STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  STRING v32; // [rsp+130h] [rbp+30h] BYREF
  STRING v33; // [rsp+140h] [rbp+40h] BYREF

  v30[0] = 536871168;
  v21 = 0;
  v22 = 0;
  v25 = 0;
  v30[1] = 538968064;
  memset(v24, 0, sizeof(v24));
  v30[2] = 0x20000000;
  v27 = 0LL;
  memset(v29, 0, sizeof(v29));
  v23 = 0;
  DiskParameters = 0;
  v26 = 0LL;
  v20[0] = 0;
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v32, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v33, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v3 = 3;
  v4 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v14 = v5[7] == 0LL;
    v18 = v3 + 1;
    v5 = (_QWORD *)*v5;
    if ( v14 )
      v18 = v3;
    v3 = v18;
  }
  v6 = (unsigned int)(28 * v3 + 4);
  Pool = (unsigned int *)IopVerifierExAllocatePool(NonPagedPoolNx, v6);
  v8 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)v6);
    v9 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      do
      {
        RtlInitAnsiString(&v27, (PCSZ)v10[3]);
        v11 = 0;
        v12 = &v21;
        v13 = v30;
        do
        {
          if ( !*(_BYTE *)v12 && IopCheckDiskName(&v27, &DestinationString + v11, &v23) )
          {
            v14 = *((_BYTE *)v10 + 38) == 0;
            *(_DWORD *)&v24[4] = v23;
            v25 = *v13;
            *(_BYTE *)v12 = 1;
            if ( v14 )
            {
              v15 = *((_DWORD *)v10 + 4);
              *(_DWORD *)v24 = 0;
              *(_OWORD *)&v24[8] = 0LL;
              *(_DWORD *)&v24[8] = v15;
            }
            else
            {
              v19 = *(_OWORD *)(v10 + 5);
              *(_DWORD *)v24 = 1;
              *(_OWORD *)&v24[8] = v19;
            }
            IopAddBootDiskInformation(v8, (__int64)v24);
          }
          ++v11;
          v12 = (__int16 *)((char *)v12 + 1);
          ++v13;
        }
        while ( v11 < 3 );
        v16 = v10[7];
        if ( v16 )
        {
          DiskParameters = VhdiGetDiskParameters(v16, v29, &v26, v20, v28);
          if ( DiskParameters >= 0 )
          {
            if ( !v20[0] )
            {
              *(_DWORD *)v24 = v29[0];
              *(_DWORD *)&v24[4] = v29[6];
              v25 = 0x400000;
              if ( v29[0] )
              {
                if ( v29[0] == 1 )
                  *(_OWORD *)&v24[8] = *v26;
              }
              else
              {
                *(_OWORD *)&v24[8] = 0LL;
                *(_DWORD *)&v24[8] = *(_DWORD *)v26;
              }
              IopAddBootDiskInformation(v8, (__int64)v24);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
