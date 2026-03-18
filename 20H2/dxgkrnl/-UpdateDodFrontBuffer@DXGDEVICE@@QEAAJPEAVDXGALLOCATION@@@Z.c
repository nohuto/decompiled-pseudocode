/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0273FA0
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E01E0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkUnlock2 @ 0x1C0100710 (DxgkUnlock2.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0273E30 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D0F0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F58E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0149594 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C02FC40C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FDB60 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  DXGADAPTER *v7; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm2
  __int128 v24; // xmm0
  D3DDDIFORMAT Format; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  LONG v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v35; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v36; // [rsp+70h] [rbp-90h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+C0h] [rbp-40h]
  _DWORD v39[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v40; // [rsp+140h] [rbp+40h] BYREF

  v4 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v4);
    v5[3] = -1071775482LL;
    v5[4] = this;
    v5[5] = a2;
    WdLogEvent5_WdEvent(v5);
    return 3223191814LL;
  }
  v7 = this[231];
  if ( v7 )
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v7, ((unsigned int)v4 >> 6) & 0xF);
  else
    IsVSyncAvailable = 1;
  if ( !IsVSyncAvailable )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v4);
    v9[3] = 0LL;
    v9[4] = this;
    v9[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v9);
    return 0LL;
  }
  memset(v39, 0, sizeof(v39));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v39);
  if ( !v39[8] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v14 = -1073741811LL;
LABEL_10:
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v15 = *((unsigned int *)a2 + 4);
LABEL_11:
    v13[6] = v15;
LABEL_12:
    WdLogEvent5_WdError(v13);
    return (unsigned int)v14;
  }
  v16 = *((_QWORD *)a2 + 6);
  v35.Rotation = -1;
  v35.Flags.Value = 1;
  memset(&v35.Width, 0, 32);
  v35.hAllocation = *(HANDLE *)(v16 + 16);
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v35, v12);
  v14 = v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v13[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v13[7] = *((unsigned int *)a2 + 4);
    goto LABEL_12;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((ADAPTER_DISPLAY **)this[231] + 337),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v23 = *(__m128i *)DisplayModeInfo;
  v24 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v37 = v23;
  v38 = v24;
  if ( *(_QWORD *)&v35.Width == __PAIR64__(v23.m128i_u32[1], (unsigned int)DisplayModeInfo)
    && (v35.Rotation == -1 || v35.Rotation == HIDWORD(v38)) )
  {
    v22 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v35.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v35.Format;
    if ( v37.m128i_i32[2] != 21 )
      v22 = v37.m128i_u32[2];
    if ( Format == (_DWORD)v22 )
    {
      memset(&v36, 0, sizeof(v36));
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, void **))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL)
                                                                                                + 264LL))(
              *((_QWORD *)this[2] + 81),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2LL,
              0,
              0LL,
              &v36.pSource);
      v14 = v26;
      if ( v26 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        goto LABEL_10;
      }
      v29 = *((_QWORD *)a2 + 6);
      v40 = 0LL;
      v30 = (*(_DWORD *)(v29 + 4) >> 6) & 0xF;
      v36.VidPnSourceId = (*(_DWORD *)(v29 + 4) >> 6) & 0xF;
      if ( (unsigned int)(v35.Format - 21) > 1 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v28, v30);
        LODWORD(v14) = -1073741811;
        v13[3] = -1073741811LL;
        v13[4] = this;
        v13[5] = a2;
        v15 = v35.Format;
        goto LABEL_11;
      }
      v36.BytesPerPixel = 4;
      if ( HIDWORD(v38) != 1 )
      {
        if ( HIDWORD(v38) == 2 )
        {
LABEL_31:
          *((_QWORD *)&v40 + 1) = __PAIR64__(v35.Width, v35.Height);
          v31 = v39[9];
LABEL_33:
          v36.Pitch = v31;
          goto LABEL_34;
        }
        if ( HIDWORD(v38) != 3 )
        {
          if ( HIDWORD(v38) != 4 )
          {
LABEL_34:
            if ( HIDWORD(v38) != 1 )
              v36.Flags.Value |= 1u;
            v36.NumDirtyRects = 1;
            v36.pDirtyRect = (RECT *)&v40;
            v32 = *(_QWORD *)(*((_QWORD *)this[231] + 337) + 384LL);
            if ( v32 && (unsigned int)v30 < *(_DWORD *)v32 && (v33 = *(_QWORD *)(v32 + 8)) != 0 )
              LODWORD(v14) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v33 + 2904LL * (unsigned int)v30), &v36);
            else
              LODWORD(v14) = -1073741811;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL)
                                                                           + 272LL))(
              *((_QWORD *)this[2] + 81),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              0LL,
              0LL);
            return (unsigned int)v14;
          }
          goto LABEL_31;
        }
      }
      *((_QWORD *)&v40 + 1) = *(_QWORD *)&v35.Width;
      v31 = v39[8];
      goto LABEL_33;
    }
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21);
  v34[3] = -1071775482LL;
  v34[4] = this;
  v34[5] = a2;
  WdLogEvent5_WdEvent(v34);
  return 3223191557LL;
}
