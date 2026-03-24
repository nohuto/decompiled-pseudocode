/*
 * XREFs of UsbhBuildHardwareID @ 0x1C0050274
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004815C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051AFC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0051C60 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005A3A0 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int16 v12; // r15
  _WORD *PoolWithTag; // rbx
  _WORD *v14; // rcx
  unsigned int v15; // eax
  char *v16; // r14
  _WORD *v17; // rcx
  __int64 v18; // r9
  int v19; // r8d
  char *v20; // rbx
  char *v21; // rcx
  SIZE_T v22; // r14
  char *v23; // r15
  char *v24; // rcx
  __int64 v25; // r14
  char *v26; // rax
  char *v27; // r15
  char *v28; // rcx
  int v29; // r8d
  _QWORD *v30; // rax
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r10
  unsigned int v35; // r10d
  size_t Size; // [rsp+40h] [rbp-68h]
  unsigned int Sizea; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+68h] [rbp-40h]
  __int64 v43; // [rsp+70h] [rbp-38h]
  unsigned __int16 v44; // [rsp+B8h] [rbp+10h]
  __int16 NumberOfBytes; // [rsp+C8h] [rbp+20h]
  SIZE_T NumberOfBytesa; // [rsp+C8h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    if ( (v7[355] & 0x10004) == 0x10000 )
    {
      v8 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v8 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_Sqd(
              WPP_GLOBAL_Control->DeviceExtension,
              *(_QWORD *)(a3 + 8),
              v9,
              14,
              (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
              *(_QWORD *)(a3 + 8),
              *(_QWORD *)(a3 + 8),
              *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0LL, v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xFu,
          (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids);
    }
    v10 = *((unsigned __int16 *)v7 + 704);
    v11 = *((unsigned __int16 *)v7 + 705);
    v12 = *((_WORD *)v7 + 706);
    NumberOfBytes = *((_WORD *)v7 + 704);
    v44 = *((_WORD *)v7 + 705);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v10,
        0x10u,
        (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
        v10,
        v11,
        *((unsigned __int16 *)v7 + 706));
      LOWORD(v10) = NumberOfBytes;
      LOWORD(v11) = v44;
    }
    v38 = (unsigned __int16)v10;
    Log(a1, 4096, 1752648004, (unsigned __int16)v10, (unsigned __int16)v11);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      v14 = PoolWithTag;
      *(_OWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)"U\x00S\x00B\x00\\\x00V\x00I\x00D\x00_\x00n\x00n\x00n\x00n";
      for ( *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)"n\x00n\x00n\x00n"; *v14 != 110; ++v14 )
        ;
      v41 = v38 >> 12;
      *v14 = (unsigned __int8)Nibble[v38 >> 12];
      v42 = (v38 >> 8) & 0xF;
      v14[1] = (unsigned __int8)Nibble[v42];
      v15 = (v38 >> 4) & 0xF;
      v39 = v38 & 0xF;
      v43 = v15;
      v14[2] = (unsigned __int8)Nibble[v15];
      v14[3] = (unsigned __int8)Nibble[v39];
      Size = 42LL;
      v16 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
      if ( v16 )
      {
        v17 = v16 + 24;
        *(_OWORD *)v16 = 0LL;
        *((_OWORD *)v16 + 1) = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
        *((_WORD *)v16 + 20) = 0;
        *(_OWORD *)v16 = *(_OWORD *)PoolWithTag;
        *((_QWORD *)v16 + 2) = *((_QWORD *)PoolWithTag + 2);
        *(_OWORD *)(v16 + 24) = *(_OWORD *)L"&PID_nnnn";
        *((_WORD *)v16 + 20) = aPidNnnn[8];
        while ( *v17 != 110 )
          ++v17;
        NumberOfBytesa = 62LL;
        *v17 = (unsigned __int8)Nibble[(unsigned __int64)v44 >> 12];
        v17[1] = (unsigned __int8)Nibble[HIBYTE(v44) & 0xF];
        v17[2] = (unsigned __int8)Nibble[(unsigned __int8)v44 >> 4];
        v17[3] = (unsigned __int8)Nibble[v44 & 0xF];
      }
      else
      {
        Size = 0LL;
        NumberOfBytesa = 20LL;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v16 )
      {
        v20 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, NumberOfBytesa, 0x42554855u);
        if ( v20 )
        {
          memset(v20, 0, NumberOfBytesa);
          memmove(v20, v16, Size);
          v21 = &v20[Size];
          *(_OWORD *)v21 = *(_OWORD *)L"&REV_nnnn";
          *((_WORD *)v21 + 8) = aRevNnnn[8];
          while ( *(_WORD *)v21 != 110 )
            v21 += 2;
          *(_WORD *)v21 = (v12 >> 12) + 48;
          *((_WORD *)v21 + 1) = (HIBYTE(v12) & 0xF) + 48;
          *((_WORD *)v21 + 2) = ((unsigned __int8)v12 >> 4) + 48;
          *((_WORD *)v21 + 3) = (v12 & 0xF) + 48;
        }
        else
        {
          LODWORD(NumberOfBytesa) = 0;
        }
        ExFreePoolWithTag(v16, 0);
        v22 = (unsigned int)NumberOfBytesa + 24LL;
        Sizea = NumberOfBytesa + 24;
        v23 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v22, 0x42554855u);
        P = v23;
        if ( v23 )
        {
          memset(v23, 0, v22);
          memmove(v23, v20, (unsigned int)NumberOfBytesa);
          v24 = &v23[(unsigned int)NumberOfBytesa];
          *(_OWORD *)v24 = *(_OWORD *)"U\x00S\x00B\x00\\\x00V\x00I\x00D\x00_\x00n\x00n\x00n\x00n";
          *((_QWORD *)v24 + 2) = *(_QWORD *)"n\x00n\x00n\x00n";
          while ( *(_WORD *)v24 != 110 )
            v24 += 2;
          *(_WORD *)v24 = (unsigned __int8)Nibble[v41];
          *((_WORD *)v24 + 1) = (unsigned __int8)Nibble[v42];
          *((_WORD *)v24 + 2) = (unsigned __int8)Nibble[v43];
          *((_WORD *)v24 + 3) = (unsigned __int8)Nibble[v39];
        }
        else
        {
          LODWORD(v22) = 0;
          Sizea = 0;
        }
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        if ( v23 )
        {
          v25 = (unsigned int)v22 + 22LL;
          v26 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v25, 0x42554855u);
          v27 = v26;
          if ( v26 )
          {
            memset(v26, 0, v25);
            memmove(v27, P, Sizea);
            v28 = &v27[Sizea];
            *(_OWORD *)v28 = *(_OWORD *)L"&PID_nnnn";
            *((_WORD *)v28 + 8) = aPidNnnn[8];
            while ( *(_WORD *)v28 != 110 )
              v28 += 2;
            *(_WORD *)v28 = (unsigned __int8)Nibble[(unsigned __int64)v44 >> 12];
            *((_WORD *)v28 + 1) = (unsigned __int8)Nibble[((unsigned __int64)v44 >> 8) & 0xF];
            *((_WORD *)v28 + 2) = (unsigned __int8)Nibble[((unsigned __int64)v44 >> 4) & 0xF];
            *((_WORD *)v28 + 3) = (unsigned __int8)Nibble[v44 & 0xF];
          }
          else
          {
            LODWORD(v25) = 0;
          }
          ExFreePoolWithTag(P, 0);
          if ( v27 )
          {
            *(_QWORD *)(a3 + 8) = v27;
            *(_DWORD *)(a3 + 4) = v25;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v29,
                18,
                (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
                (__int64)v27,
                v25);
            }
            return 0LL;
          }
          v18 = a2;
          v19 = 1751725089;
        }
        else
        {
          v18 = a2;
          v19 = 1751725345;
        }
      }
      else
      {
        v18 = a2;
        v19 = 1751724321;
      }
    }
    else
    {
      v18 = a2;
      v19 = 1751724577;
    }
  }
  else
  {
    v30 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    if ( v30 )
    {
      *(_OWORD *)v30 = 0LL;
      v30[2] = 0LL;
      *((_WORD *)v30 + 12) = 0;
      *(_OWORD *)v30 = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)v30 + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)v30 + 10) = aUsbUnknown[10];
      *(_QWORD *)(a3 + 8) = v30;
      *(_DWORD *)(a3 + 4) = 26;
      Log(a1, 4096, 1751733537, (__int64)v30, 26LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v31,
          v32,
          17,
          (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
          v33,
          v33,
          26);
      return 0LL;
    }
    v18 = 0LL;
    v19 = 1751724833;
  }
  Log(a1, 4096, v19, v18, -1073741670LL);
  return v35;
}
