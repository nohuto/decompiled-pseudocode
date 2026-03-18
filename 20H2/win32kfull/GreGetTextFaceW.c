/*
 * XREFs of GreGetTextFaceW @ 0x1C005AF50
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C005AE40 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0021028 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C005B3A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  void *v5; // r13
  int v6; // r14d
  int v7; // esi
  __int64 v8; // rdx
  DC *v9; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  struct PFE *v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  const wchar_t *v17; // r15
  __int64 v18; // rsi
  struct _DC_ATTR *v19; // rax
  __int64 v20; // rbx
  const wchar_t *v22; // r14
  int v23; // r13d
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rsi
  int v27; // r14d
  bool v28; // di
  __int64 v29; // rax
  const wchar_t *v30; // r14
  int v31; // r12d
  __int64 v32; // rax
  unsigned int v33; // [rsp+38h] [rbp-19h] BYREF
  int v34; // [rsp+3Ch] [rbp-15h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-11h] BYREF
  __int64 v36; // [rsp+48h] [rbp-9h] BYREF
  __int64 v37; // [rsp+50h] [rbp-1h] BYREF
  struct _POINTL v38; // [rsp+58h] [rbp+7h] BYREF
  __int64 v39; // [rsp+60h] [rbp+Fh] BYREF
  DC *v40; // [rsp+68h] [rbp+17h] BYREF
  __int64 v41; // [rsp+70h] [rbp+1Fh]
  int v42; // [rsp+C0h] [rbp+6Fh]

  v42 = a2;
  v5 = a3;
  v6 = a2;
  LOBYTE(a2) = 1;
  v41 = 0LL;
  v7 = 0;
  v40 = (DC *)HmgLockEx(a1, a2, 0LL);
  v9 = v40;
  if ( !v40 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_65;
  }
  if ( (*((_DWORD *)v40 + 11) & 2) != 0 )
  {
LABEL_6:
    if ( (*((_DWORD *)v9 + 130) & 4) == 0 )
      goto LABEL_7;
    DC::vMarkTransformDirty(v9);
LABEL_65:
    v9 = v40;
LABEL_7:
    if ( !v9 )
      goto LABEL_33;
    v37 = *((_QWORD *)v9 + 6);
    if ( (*(_DWORD *)(v37 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v37);
      v9 = v40;
    }
    LOBYTE(v8) = 10;
    v11 = *(_QWORD *)(*((_QWORD *)v9 + 122) + 296LL);
    v12 = HmgShareLock(v11, v8);
    v36 = v12;
    v13 = v12;
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 28) & 1) != 0 )
      {
        UserGetHDEV();
        v24 = *(_DWORD *)(v13 + 24);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
        v13 = 0LL;
        if ( !v37 )
          goto LABEL_30;
        if ( v24 == 6 )
        {
          v11 = *(_QWORD *)(v37 + 1448);
        }
        else
        {
          v27 = v24 - 4;
          if ( v27 )
          {
            if ( v27 == 1 )
              v11 = *(_QWORD *)(v37 + 1440);
          }
          else
          {
            v11 = *(_QWORD *)(v37 + 1432);
          }
        }
        LOBYTE(v25) = 10;
        v6 = v42;
        v13 = HmgShareLock(v11, v25);
        v36 = v13;
      }
      if ( !v13 )
        goto LABEL_32;
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
        && UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
      {
        if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
          && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
          && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
        {
          goto LABEL_18;
        }
        v28 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
        if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
          goto LABEL_18;
        if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
        {
LABEL_77:
          v13 = v36;
LABEL_18:
          v39 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v35 = 0;
          v33 = 0;
          v38 = 0LL;
          v14 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v36, (struct XDCOBJ *)&v40, &v35, &v38, &v33, 0);
          if ( !v14 )
          {
            SEMOBJ::vUnlock((SEMOBJ *)&v39);
            goto LABEL_31;
          }
          v15 = 0;
          if ( (v33 & 2) == 0 || (v17 = (const wchar_t *)(v13 + 304), !*(_WORD *)(v13 + 304)) )
          {
            v16 = *((_QWORD *)v14 + 4);
            v17 = (const wchar_t *)(v16 + *(int *)(v16 + 8));
            v15 = (*(_DWORD *)(v16 + 48) >> 27) & 1;
          }
          if ( v5 )
          {
            if ( v6 >= 1 )
            {
              v18 = -1LL;
              if ( a4 && v15 )
              {
                v22 = v17;
                v23 = 0;
                if ( *v17 )
                {
                  while ( _wcsicmp((const wchar_t *)(v13 + 304), v22) )
                  {
                    v29 = -1LL;
                    do
                      ++v29;
                    while ( v22[v29] );
                    v23 += v29 + 1;
                    v22 = &v17[v23];
                    if ( !*v22 )
                      goto LABEL_49;
                  }
                }
                if ( *v22 )
                  v17 = v22;
LABEL_49:
                v6 = v42;
                v5 = a3;
              }
              do
                ++v18;
              while ( v17[v18] );
              v7 = v18 + 1;
              if ( v6 < v7 )
                v7 = v6;
              memmove(v5, v17, 2LL * v7);
              *((_WORD *)v5 + v7 - 1) = 0;
            }
          }
          else
          {
            v26 = -1LL;
            if ( a4 && v15 )
            {
              v30 = v17;
              v31 = 0;
              if ( *v17 )
              {
                while ( _wcsicmp((const wchar_t *)(v13 + 304), v30) )
                {
                  v32 = -1LL;
                  do
                    ++v32;
                  while ( v30[v32] );
                  v31 += v32 + 1;
                  v30 = &v17[v31];
                  if ( !*v30 )
                    goto LABEL_57;
                }
              }
              if ( *v30 )
                v17 = v30;
            }
            do
LABEL_57:
              ++v26;
            while ( v17[v26] );
            v7 = v26 + 1;
          }
          if ( ghsemPublicPFT )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
            GreReleaseSemaphoreInternal(ghsemPublicPFT);
          }
          goto LABEL_30;
        }
        if ( (v28 || !(unsigned int)UserIsUserCritSecIn())
          && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
          && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
        {
          KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
          goto LABEL_77;
        }
        v13 = v36;
      }
    }
LABEL_30:
    if ( v13 )
LABEL_31:
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
LABEL_32:
    v9 = v40;
    goto LABEL_33;
  }
  UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v40);
  if ( !UserAttr || DC::SaveAttributes(v40, UserAttr) )
  {
    *((_DWORD *)v40 + 11) |= 2u;
    v9 = v40;
    LODWORD(v41) = 1;
    goto LABEL_6;
  }
  v9 = 0LL;
  _InterlockedDecrement((volatile signed __int32 *)v40 + 3);
  v40 = 0LL;
LABEL_33:
  if ( v9 )
  {
    if ( (_DWORD)v41 && (*((_DWORD *)v9 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v41) )
      {
        v19 = XDCOBJ::GetUserAttr((XDCOBJ *)&v40);
        if ( v19 )
          DC::RestoreAttributes(v40, v19);
        v9 = v40;
      }
      *((_DWORD *)v9 + 11) &= ~2u;
      v9 = v40;
      LODWORD(v41) = 0;
    }
    v34 = 0;
    v20 = *(_QWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, HIDWORD(v41), &v34);
    if ( v34 )
      bDeleteDCInternalEx(v20, 0LL);
  }
  return (unsigned int)v7;
}
