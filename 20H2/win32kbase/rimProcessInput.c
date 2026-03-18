/*
 * XREFs of rimProcessInput @ 0x1C0174B40
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C01752DC (rimStackAttachAndProcessInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     RIMFreeUserMem @ 0x1C015B300 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C015B3A4 (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C0171258 (RIMFixUpCompleteFrame.c)
 */

char __fastcall rimProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  __m128i *v9; // rax
  int v10; // r12d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  _QWORD *v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _OWORD *v20; // rcx
  char *v21; // rcx
  PVOID v23; // [rsp+30h] [rbp-58h] BYREF
  PVOID v24; // [rsp+38h] [rbp-50h]
  __m128i v25; // [rsp+40h] [rbp-48h]

  v24 = 0LL;
  v25 = *a4;
  v8 = v25;
  LODWORD(v9) = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = (int)v9;
  v11 = *(unsigned int *)(a1 + 696);
  v12 = _mm_srli_si128(v25, 8).m128i_u64[0];
  if ( *(_DWORD *)(a1 + 656) )
  {
    if ( v12 > v11 )
    {
      v23 = 0LL;
      LOBYTE(v9) = rimAllocUserMemInternal(a1, v12, &v23);
      v24 = v23;
      if ( v23 )
      {
        v16 = *(_QWORD **)(a1 + 688);
        LOBYTE(v9) = MmUserProbeAddress;
        if ( (unsigned __int64)v16 >= MmUserProbeAddress )
          v16 = (_QWORD *)MmUserProbeAddress;
        *v16 = v23;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          LOBYTE(v9) = WPP_RECORDER_SF_(
                         (_DWORD)gRimLog,
                         v15,
                         1,
                         14,
                         (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids);
        }
        v25.m128i_i32[0] = -1073741801;
        v8 = v25;
      }
    }
    if ( v25.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 584) = 1;
    }
    else
    {
      v17 = *(_DWORD **)(a1 + 664);
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = v10;
      v18 = *(_QWORD *)(a2 + 344);
      if ( !v18 )
        v18 = *(_QWORD *)(a2 + 16);
      v19 = *(_QWORD **)(a1 + 672);
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_QWORD *)MmUserProbeAddress;
      *v19 = v18;
      v20 = *(_OWORD **)(a1 + 680);
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (_OWORD *)MmUserProbeAddress;
      *v20 = v8;
      v21 = **(char ***)(a1 + 688);
      if ( (unsigned __int64)&v21[v12] > MmUserProbeAddress || &v21[v12] <= v21 )
        *(_BYTE *)MmUserProbeAddress = 0;
      LOBYTE(v9) = (unsigned __int8)memmove(v21, a3, v12);
      if ( a5 )
        LOBYTE(v9) = (unsigned __int8)RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  else
  {
    if ( v12 > v11 )
    {
      v13 = Win32AllocPool(v12, 0x656D4B52u);
      if ( v13 )
      {
        **(_QWORD **)(a1 + 688) = v13;
      }
      else
      {
        v25.m128i_i32[0] = -1073741801;
        v8 = v25;
      }
    }
    v9 = *(__m128i **)(a1 + 680);
    *v9 = v8;
    if ( v25.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 664) = v10;
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 344);
        if ( !v14 )
          v14 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 672) = v14;
      memmove(**(void ***)(a1 + 688), a3, v12);
      LODWORD(v9) = *(_DWORD *)(a2 + 184);
      if ( ((unsigned __int16)v9 & 0x2000) != 0 || ((unsigned __int8)v9 & 0x40) != 0 )
      {
        LOBYTE(v9) = *(_BYTE *)(a2 + 48);
        if ( (_BYTE)v9 )
        {
          if ( (_BYTE)v9 == 1 )
            *(_DWORD *)(a2 + 696) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 920) = 0;
        }
      }
      if ( a5 )
        LOBYTE(v9) = (unsigned __int8)RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  return (char)v9;
}
