/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEB70
 * Callers:
 *     ?GetBounds@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0A40 (-GetBounds@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int128 *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(a1 - 32);
  if ( v5 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v5 + 56) + 8LL) + v5 + 56);
    v9 = (**v8)(v8, a2);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x72u, 0LL);
    }
    else
    {
      v11 = *(_QWORD *)(a1 - 40);
      if ( v11 )
      {
        v20 = 0LL;
        v12 = (__int64 (__fastcall ***)(_QWORD, __int64, __int128 *))(v11 + 56 + *(int *)(*(_QWORD *)(v11 + 56) + 8LL));
        v13 = (**v12)(v12, a2, &v20);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x77u, 0LL);
        }
        else
        {
          if ( *(float *)&v20 > *(float *)a3 )
            *(_DWORD *)a3 = v20;
          if ( *((float *)&v20 + 1) > *(float *)(a3 + 4) )
            *(_DWORD *)(a3 + 4) = DWORD1(v20);
          v15 = *(float *)(a3 + 8);
          v16 = *((float *)&v20 + 2);
          if ( v15 > *((float *)&v20 + 2) )
          {
            *(_DWORD *)(a3 + 8) = DWORD2(v20);
            v15 = v16;
          }
          v17 = *(float *)(a3 + 12);
          v18 = *((float *)&v20 + 3);
          if ( v17 > *((float *)&v20 + 3) )
          {
            *(_DWORD *)(a3 + 12) = HIDWORD(v20);
            v17 = v18;
            v15 = *(float *)(a3 + 8);
          }
          if ( v15 <= *(float *)a3 || v17 <= *(float *)(a3 + 4) )
          {
            *(_DWORD *)(a3 + 12) = 0;
            *(_DWORD *)(a3 + 8) = 0;
            *(_DWORD *)(a3 + 4) = 0;
            *(_DWORD *)a3 = 0;
          }
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return v4;
}
