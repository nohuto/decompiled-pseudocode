/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00FBB38 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0274478 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CD3E8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C01571D4 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(HDC **a1, int a2)
{
  int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  HDC *v10; // r10
  struct tagSIZE v11; // rax
  HDC v12; // rdi
  HWND v13; // r12
  __int64 v15; // r10
  __int64 v16; // rcx
  struct tagRECT v17; // xmm0
  unsigned int v18; // r12d
  unsigned int left; // eax
  struct tagRECT *v20; // r13
  __int64 v21; // r9
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // eax
  LONG v25; // ecx
  NTSTATUS v26; // eax
  void *v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+88h] [rbp-80h]
  struct tagSIZE v29; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v30; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v32; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v35; // [rsp+E0h] [rbp-28h]
  HDC v36; // [rsp+E8h] [rbp-20h]
  POINTL *v37; // [rsp+F0h] [rbp-18h]
  __int64 v38; // [rsp+F8h] [rbp-10h]
  struct tagRECT *v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+110h] [rbp+8h]
  int v42; // [rsp+114h] [rbp+Ch]
  int v43; // [rsp+118h] [rbp+10h]
  int v44; // [rsp+11Ch] [rbp+14h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+148h] [rbp+40h]
  _DWORD v48[84]; // [rsp+158h] [rbp+50h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite, v7, v8, v9);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( g_pDwmState )
  {
    if ( (unsigned int)GreGetBounds(**a1, &v32, 4LL) )
    {
      v10 = *a1;
      v11 = (struct tagSIZE)(*a1)[64];
      v29 = v11;
      v30 = (struct REGION *)v10[146];
      if ( !v30 )
      {
        EtwDevLockEndUpdate(
          v10[59],
          (unsigned int)v11.cx,
          (unsigned int)v29.cy,
          (unsigned int)v32.left,
          v32.top,
          v32.right,
          v32.bottom);
        v12 = **a1;
        v13 = (HWND)(*a1)[59];
        if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
        {
          Parameter.m256i_i64[0] = (__int64)v6;
          v35 = &v29;
          Parameter.m256i_i64[1] = (__int64)v13;
          v39 = &v32;
          v34 = 0LL;
          v45 = 0LL;
          *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
          v36 = v12;
          v37 = &gptlZero;
          v38 = 0LL;
          v40 = 0LL;
          v41 = 0;
          v42 = 1075838976;
          v43 = 1;
          v44 = a2;
          v26 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
          updated = v45;
          if ( v26 < 0 )
            updated = 0;
        }
        else
        {
          LODWORD(v27) = 1075838976;
          updated = GreUpdateSpriteInternal(
                      v6,
                      v13,
                      0LL,
                      0LL,
                      0LL,
                      &v29,
                      v12,
                      (struct tagPOINT *)&gptlZero,
                      0,
                      0LL,
                      v27,
                      &v32,
                      0LL,
                      1,
                      a2);
        }
        goto LABEL_8;
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v30) != 1 )
      {
        v16 = 1016LL;
        if ( (*(_DWORD *)(v15 + 40) & 1) != 0 )
          v16 = 1024LL;
        RGNOBJ::bOffset((RGNOBJ *)&v30, (struct _POINTL *)(v15 + v16));
        v40 = 0LL;
        v41 = 0;
        v46 = 1;
        v47 = 0LL;
        v37 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v30, (struct ERECTL *)&v32, 1);
        memset(v48, 0, 0x144uLL);
        switch ( Parameter.m256i_i8[20] )
        {
          case 1:
            v17 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_17:
            *(struct tagRECT *)&v48[1] = v17;
            v48[0] = 1;
            v28 = 0;
LABEL_18:
            updated = 1;
            if ( v3 )
              goto LABEL_38;
            while ( 1 )
            {
              v18 = 0;
              if ( v48[0] )
              {
                do
                {
                  left = v32.left;
                  v20 = (struct tagRECT *)&v48[4 * v18 + 1];
                  v21 = (unsigned int)v20->left;
                  if ( (int)v21 < v32.left )
                  {
                    v20->left = v32.left;
                    v21 = left;
                  }
                  top = v20->top;
                  if ( top < v32.top )
                  {
                    v20->top = v32.top;
                    top = v48[4 * v18 + 2];
                  }
                  right = v20->right;
                  if ( right > v32.right )
                  {
                    v20->right = v32.right;
                    right = v48[4 * v18 + 3];
                  }
                  bottom = v20->bottom;
                  v25 = v32.bottom;
                  if ( bottom > v32.bottom )
                  {
                    v20->bottom = v32.bottom;
                    bottom = v25;
                  }
                  EtwDevLockEndTightUpdate(
                    (*a1)[59],
                    (unsigned int)v29.cx,
                    (unsigned int)v29.cy,
                    v21,
                    top,
                    right,
                    bottom);
                  LODWORD(v27) = 1075838976;
                  if ( !(unsigned int)GreUpdateSprite(
                                        v6,
                                        (HWND)(*a1)[59],
                                        0LL,
                                        0LL,
                                        0LL,
                                        &v29,
                                        **a1,
                                        (struct tagPOINT *)&gptlZero,
                                        0,
                                        0LL,
                                        v27,
                                        v20,
                                        0LL,
                                        1,
                                        a2) )
                    updated = 0;
                  ++v18;
                }
                while ( v18 < v48[0] );
                v3 = v28;
              }
              if ( !v3 )
                break;
LABEL_38:
              v3 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, v48, 0LL);
              v28 = v3;
            }
            break;
          case 0:
            v17 = v32;
            goto LABEL_17;
          case 3:
            v3 = 1;
            v28 = 1;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
            goto LABEL_18;
        }
      }
    }
LABEL_8:
    REGION::vDeleteREGION((REGION *)(*a1)[146]);
    (*a1)[146] = 0LL;
    goto LABEL_9;
  }
  GdiUpdateSpriteDevLockEnd((struct XDCOBJ *)a1);
LABEL_9:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
