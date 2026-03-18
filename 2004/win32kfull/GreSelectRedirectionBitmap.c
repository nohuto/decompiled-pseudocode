/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C00E8850
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x1C00E8550 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x1C00E87D8 (InvalidateDCE.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E7EAC (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C02744F0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02745BC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02A4050 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP a2)
{
  unsigned int v2; // ebp
  HBITMAP BitmapForDisplayDevice; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  HDEV v10; // rbx
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rbx
  HDEV v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 *v31[7]; // [rsp+20h] [rbp-38h] BYREF
  int v32; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  BitmapForDisplayDevice = a2;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v31[1] = 0LL;
    LOBYTE(a2) = 1;
    v7 = HmgShareLockEx(v5, a2, 0LL);
    v31[0] = (__int64 *)v7;
    v9 = v7;
    if ( !v7 )
      return v2;
    v10 = *(HDEV *)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v23 = *(_DWORD *)(v7 + 36);
      v24 = *(_QWORD *)(v9 + 504);
      if ( (v23 & 0x4000) != 0 )
      {
        if ( !v24 )
          v24 = **(_QWORD **)(v9 + 496);
        LOBYTE(v8) = 5;
        v26 = HmgShareLockCheck(v24, v8);
        if ( v26 )
        {
          if ( BitmapForDisplayDevice )
          {
            LOBYTE(v25) = 5;
            v28 = HmgShareLockCheck(BitmapForDisplayDevice, v25);
            v29 = v28;
            if ( v28 )
            {
              if ( v26 != v28 )
              {
                v30 = *(_DWORD *)(v9 + 36);
                if ( (v30 & 0x40000) == 0 )
                {
                  INC_SHARE_REF_CNT(v26);
                  v30 = *(_DWORD *)(v9 + 36);
                }
                *(_DWORD *)(v9 + 36) = v30 | 0x40000;
                *(_QWORD *)(v9 + 2104) = BitmapForDisplayDevice;
              }
              v2 = 1;
              DEC_SHARE_REF_CNT(v29);
            }
          }
          else
          {
            v27 = *(_DWORD *)(v9 + 36);
            if ( (v27 & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v26);
              v27 = *(_DWORD *)(v9 + 36);
            }
            *(_DWORD *)(v9 + 36) = v27 | 0x40000;
            *(_QWORD *)(v9 + 2104) = 0LL;
            v2 = 1;
          }
          DEC_SHARE_REF_CNT(v26);
        }
      }
      else
      {
        v2 = 1;
        *(_DWORD *)(v9 + 36) = v23 | 0x40000;
        *(_QWORD *)(v9 + 2104) = BitmapForDisplayDevice;
      }
LABEL_51:
      if ( v9 )
        XDCOBJ::vAltUnlockFast(v31);
      return v2;
    }
    if ( BitmapForDisplayDevice && a1 == v5 )
    {
      v15 = (HDEV)*((_QWORD *)v10 + 3);
      if ( v10 != v15 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v15, v10, BitmapForDisplayDevice);
      LOBYTE(v8) = 5;
      v16 = HmgShareLockCheck(BitmapForDisplayDevice, v8);
      v6 = v16;
      if ( !v16 )
        goto LABEL_51;
      DEC_SHARE_REF_CNT(v16);
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v20 = *(_QWORD *)(v9 + 496);
      if ( v20 )
      {
        LOBYTE(v8) = 5;
        v21 = HmgShareLockCheck(*(_QWORD *)(v20 + 32), v8);
        v22 = v21;
        if ( v21 )
        {
          DEC_SHARE_REF_CNT(v21);
          DEC_SHARE_REF_CNT(v22);
        }
      }
    }
    if ( BitmapForDisplayDevice )
    {
      LOBYTE(v8) = 5;
      v17 = HmgShareLockCheck(BitmapForDisplayDevice, v8);
      v18 = v17;
      if ( v17 )
        INC_SHARE_REF_CNT(v17);
      *(_DWORD *)(v9 + 36) |= 0x4000u;
      v19 = *(_DWORD *)(v6 + 112);
      if ( (v19 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v19 | 0x800;
      if ( v18 )
        DEC_SHARE_REF_CNT(v18);
    }
    else
    {
      v6 = *((_QWORD *)v10 + 319);
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    v11 = *(_DWORD *)(v9 + 36) | 0x8000;
    if ( (*(_DWORD *)(v6 + 112) & 0x200) == 0 )
      v11 = *(_DWORD *)(v9 + 36) & 0xFFFF7FFF;
    *(_DWORD *)(v9 + 36) = v11;
    *(_QWORD *)(v9 + 496) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v9,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 660), (__m128)*(unsigned int *)(v6 + 664)).m128_u64[0]);
    }
    else
    {
      v12 = *(_DWORD *)(v9 + 520);
      if ( (v12 & 1) != 0 )
      {
        *(_DWORD *)(v9 + 36) |= 0x10u;
        *(_QWORD *)(v9 + 524) = 0LL;
        *(_DWORD *)(v9 + 520) = v12 & 0xFFFFFFF8 | 4;
        *(_QWORD *)(v9 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue((DC *)v9);
      }
    }
    *(_QWORD *)(v9 + 512) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v9 + 316) |= 0xFu;
    if ( *(int *)(v9 + 104) > 1 )
      v5 = *(_QWORD *)(v9 + 112);
    else
      v5 = 0LL;
    v32 = 0;
    v13 = *(_QWORD *)v9;
    HmgDecrementShareReferenceCountEx(v9, &v32);
    if ( v32 )
      bDeleteDCInternalEx(v13, 0LL);
    if ( !v5 )
      return 1LL;
  }
}
