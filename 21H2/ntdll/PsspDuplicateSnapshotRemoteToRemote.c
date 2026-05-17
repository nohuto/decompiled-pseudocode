/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1801141C0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     Feature_3106716987__private_IsEnabledDeviceUsage @ 0x18009D104 (Feature_3106716987__private_IsEnabledDeviceUsage.c)
 *     Feature_3280147768__private_IsEnabledDeviceUsage @ 0x18009D140 (Feature_3280147768__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x18009D17C (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009DD80 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009DDC0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009DE20 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114240 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r15
  int VirtualMemory; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  int v27; // eax
  unsigned __int64 v28; // r15
  __int64 v29; // r15
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  _QWORD v34[144]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v36; // [rsp+878h] [rbp+778h]
  __int64 v37; // [rsp+880h] [rbp+780h]
  __int64 v38; // [rsp+888h] [rbp+788h]
  __int64 v39; // [rsp+898h] [rbp+798h]
  __int64 v40; // [rsp+8B0h] [rbp+7B0h]
  __int64 v41; // [rsp+8D0h] [rbp+7D0h]
  __int64 v42; // [rsp+8F0h] [rbp+7F0h]
  __int64 v43; // [rsp+968h] [rbp+868h]

  *a4 = 0LL;
  v5 = a4;
  memset(v34, 0, 0x478uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_48;
  if ( v31 == 1144 )
  {
    if ( LODWORD(v35[0]) == 1146311504 )
    {
      if ( (unsigned int)Feature_3106716987__private_IsEnabledDeviceUsage() )
      {
        VirtualMemory = PssValidateSnapshotDescriptor(v35);
        if ( VirtualMemory < 0 )
          goto LABEL_48;
      }
      if ( LODWORD(v35[0]) == 1146311504 )
      {
        v7 = (unsigned __int64)v36 << 6;
        if ( v7 > 0xFFFFFFFF || (unsigned int)v7 >= 0xFFFFFB88 )
        {
          VirtualMemory = -1073741675;
          goto LABEL_48;
        }
        v8 = 8LL;
        v9 = v34;
        v10 = v35;
        do
        {
          v11 = *((_OWORD *)v10 + 1);
          *(_OWORD *)v9 = *(_OWORD *)v10;
          v12 = *((_OWORD *)v10 + 2);
          *((_OWORD *)v9 + 1) = v11;
          v13 = *((_OWORD *)v10 + 3);
          *((_OWORD *)v9 + 2) = v12;
          v14 = *((_OWORD *)v10 + 4);
          *((_OWORD *)v9 + 3) = v13;
          v15 = *((_OWORD *)v10 + 5);
          *((_OWORD *)v9 + 4) = v14;
          v16 = *((_OWORD *)v10 + 6);
          *((_OWORD *)v9 + 5) = v15;
          v17 = *((_OWORD *)v10 + 7);
          v10 += 16;
          *((_OWORD *)v9 + 6) = v16;
          v9 += 16;
          *((_OWORD *)v9 - 1) = v17;
          --v8;
        }
        while ( v8 );
        v18 = v35[109];
        v19 = *((_OWORD *)v10 + 1);
        *(_OWORD *)v9 = *(_OWORD *)v10;
        v20 = *((_OWORD *)v10 + 2);
        *((_OWORD *)v9 + 1) = v19;
        v21 = *((_OWORD *)v10 + 3);
        *((_OWORD *)v9 + 2) = v20;
        v22 = *((_OWORD *)v10 + 4);
        *((_OWORD *)v9 + 3) = v21;
        v23 = *((_OWORD *)v10 + 5);
        *((_OWORD *)v9 + 4) = v22;
        v24 = *((_OWORD *)v10 + 6);
        v25 = v10[14];
        *((_OWORD *)v9 + 5) = v23;
        *((_OWORD *)v9 + 6) = v24;
        v9[14] = v25;
        v34[109] = 0LL;
        v34[112] = 0LL;
        v34[115] = 0LL;
        v34[118] = 0LL;
        v34[122] = 0LL;
        v34[126] = 0LL;
        v34[141] = 0LL;
        if ( v18 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v37 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v39 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v40 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v41 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v42 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        if ( v43 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
        }
        VirtualMemory = ZwAllocateVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_48;
        HIDWORD(v34[0]) = HIDWORD(v34[0]) & 0xFFFFFFF8 | 1;
        if ( v34[113] )
          v34[113] = 1144LL;
        if ( LOWORD(v34[35]) )
          v34[36] = 296LL;
        if ( (unsigned int)Feature_3280147768__private_IsEnabledDeviceUsage() )
        {
          v26 = 0LL;
          v27 = NtWriteVirtualMemory();
        }
        else
        {
          v27 = NtWriteVirtualMemory();
          v26 = 0LL;
        }
        VirtualMemory = v27;
        if ( v27 < 0 )
          goto LABEL_48;
        if ( v38 )
        {
          VirtualMemory = ZwAllocateVirtualMemory();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
          if ( (_DWORD)v7 )
          {
            while ( 1 )
            {
              v28 = (unsigned int)v7 - v26;
              v29 = v28 != 0;
              VirtualMemory = ZwReadVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_48;
              if ( v31 != v29 )
                goto LABEL_47;
              VirtualMemory = NtWriteVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_48;
              if ( v32 != v31 )
              {
LABEL_47:
                VirtualMemory = -2147483635;
                goto LABEL_48;
              }
              v26 += v32;
              if ( v26 >= (unsigned int)v7 )
              {
                v5 = a4;
                break;
              }
            }
          }
          ZwFreeVirtualMemory();
        }
        VirtualMemory = 0;
        *v5 = 0LL;
        goto LABEL_62;
      }
    }
    VirtualMemory = -1073741816;
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_48:
  if ( v34[126] )
    ZwDuplicateObject();
  if ( v34[122] )
    ZwDuplicateObject();
  if ( v34[115] )
    ZwDuplicateObject();
  if ( v34[118] )
    ZwDuplicateObject();
  if ( v34[112] )
    ZwDuplicateObject();
  if ( v34[109] )
    ZwDuplicateObject();
  if ( v34[141] )
    ZwDuplicateObject();
LABEL_62:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
