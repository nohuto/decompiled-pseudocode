/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A5C40
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00F6024 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0272E6C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C003D068 (GreUpdateSprite.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0159B34 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(HDC **a1, int a2)
{
  int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  HDC *v7; // r10
  struct tagSIZE v8; // rax
  HDC v9; // rdi
  HWND v10; // r12
  __int64 v12; // r10
  __int64 v13; // rcx
  struct tagRECT v14; // xmm0
  unsigned int v15; // r12d
  unsigned int left; // eax
  struct tagRECT *v17; // r13
  __int64 v18; // r9
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // eax
  LONG v22; // ecx
  NTSTATUS v23; // eax
  void *v24; // [rsp+58h] [rbp-B0h]
  int v25; // [rsp+88h] [rbp-80h]
  struct tagSIZE v26; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v29; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v32; // [rsp+E0h] [rbp-28h]
  HDC v33; // [rsp+E8h] [rbp-20h]
  POINTL *v34; // [rsp+F0h] [rbp-18h]
  __int64 v35; // [rsp+F8h] [rbp-10h]
  struct tagRECT *v36; // [rsp+100h] [rbp-8h]
  __int64 v37; // [rsp+108h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+8h]
  int v39; // [rsp+114h] [rbp+Ch]
  int v40; // [rsp+118h] [rbp+10h]
  int v41; // [rsp+11Ch] [rbp+14h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  int v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+148h] [rbp+40h]
  _DWORD v45[84]; // [rsp+158h] [rbp+50h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( g_pDwmState )
  {
    if ( (unsigned int)GreGetBounds(**a1, &v29, 4LL) )
    {
      v7 = *a1;
      v8 = (struct tagSIZE)(*a1)[64];
      v26 = v8;
      v27 = (struct REGION *)v7[146];
      if ( !v27 )
      {
        EtwDevLockEndUpdate(
          v7[59],
          (unsigned int)v8.cx,
          (unsigned int)v26.cy,
          (unsigned int)v29.left,
          v29.top,
          v29.right,
          v29.bottom);
        v9 = **a1;
        v10 = (HWND)(*a1)[59];
        if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
        {
          Parameter.m256i_i64[0] = (__int64)v6;
          v32 = &v26;
          Parameter.m256i_i64[1] = (__int64)v10;
          v36 = &v29;
          v31 = 0LL;
          v42 = 0LL;
          *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
          v33 = v9;
          v34 = &gptlZero;
          v35 = 0LL;
          v37 = 0LL;
          v38 = 0;
          v39 = 1075838976;
          v40 = 1;
          v41 = a2;
          v23 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
          updated = v42;
          if ( v23 < 0 )
            updated = 0;
        }
        else
        {
          LODWORD(v24) = 1075838976;
          updated = GreUpdateSpriteInternal(
                      v6,
                      v10,
                      0LL,
                      0LL,
                      0LL,
                      &v26,
                      v9,
                      (struct tagPOINT *)&gptlZero,
                      0,
                      0LL,
                      v24,
                      &v29,
                      0LL,
                      1,
                      a2);
        }
        goto LABEL_8;
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v27) != 1 )
      {
        v13 = 1016LL;
        if ( (*(_DWORD *)(v12 + 40) & 1) != 0 )
          v13 = 1024LL;
        RGNOBJ::bOffset((RGNOBJ *)&v27, (struct _POINTL *)(v12 + v13));
        v37 = 0LL;
        v38 = 0;
        v43 = 1;
        v44 = 0LL;
        v34 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v27, (struct ERECTL *)&v29, 1);
        memset(v45, 0, 0x144uLL);
        switch ( Parameter.m256i_i8[20] )
        {
          case 1:
            v14 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_17:
            *(struct tagRECT *)&v45[1] = v14;
            v45[0] = 1;
            v25 = 0;
LABEL_18:
            updated = 1;
            if ( v3 )
              goto LABEL_38;
            while ( 1 )
            {
              v15 = 0;
              if ( v45[0] )
              {
                do
                {
                  left = v29.left;
                  v17 = (struct tagRECT *)&v45[4 * v15 + 1];
                  v18 = (unsigned int)v17->left;
                  if ( (int)v18 < v29.left )
                  {
                    v17->left = v29.left;
                    v18 = left;
                  }
                  top = v17->top;
                  if ( top < v29.top )
                  {
                    v17->top = v29.top;
                    top = v45[4 * v15 + 2];
                  }
                  right = v17->right;
                  if ( right > v29.right )
                  {
                    v17->right = v29.right;
                    right = v45[4 * v15 + 3];
                  }
                  bottom = v17->bottom;
                  v22 = v29.bottom;
                  if ( bottom > v29.bottom )
                  {
                    v17->bottom = v29.bottom;
                    bottom = v22;
                  }
                  EtwDevLockEndTightUpdate(
                    (*a1)[59],
                    (unsigned int)v26.cx,
                    (unsigned int)v26.cy,
                    v18,
                    top,
                    right,
                    bottom);
                  LODWORD(v24) = 1075838976;
                  if ( !(unsigned int)GreUpdateSprite(
                                        v6,
                                        (HWND)(*a1)[59],
                                        0LL,
                                        0LL,
                                        0LL,
                                        &v26,
                                        **a1,
                                        (struct tagPOINT *)&gptlZero,
                                        0,
                                        0LL,
                                        v24,
                                        v17,
                                        0LL,
                                        1,
                                        a2) )
                    updated = 0;
                  ++v15;
                }
                while ( v15 < v45[0] );
                v3 = v25;
              }
              if ( !v3 )
                break;
LABEL_38:
              v3 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, (char *)v45, 0LL);
              v25 = v3;
            }
            break;
          case 0:
            v14 = v29;
            goto LABEL_17;
          case 3:
            v3 = 1;
            v25 = 1;
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
