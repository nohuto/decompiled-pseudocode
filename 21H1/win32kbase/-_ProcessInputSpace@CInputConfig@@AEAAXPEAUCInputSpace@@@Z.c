/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A5040
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C00A4A54 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C00225C4 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00A6F24 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rcx
  struct CInputSpaceRegion *v4; // r15
  struct CInputSpaceRegion *v5; // rbx
  struct CInputSpace *v6; // rdi
  int v7; // r12d
  int v8; // r13d
  struct CInputSpaceRegion *v9; // rax
  int v10; // r9d
  struct CInputSpaceRegion *v11; // rcx
  int v12; // r8d
  int v13; // eax
  int v14; // r8d
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // [rsp+20h] [rbp-50h]
  __int128 v32; // [rsp+28h] [rbp-48h]
  _QWORD v34[3]; // [rsp+48h] [rbp-28h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  v32 = 0LL;
  v34[0] = &CInputConfig::slock;
  v4 = 0LL;
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v6 = (struct CInputSpace *)*((_QWORD *)a2 + 178);
  v7 = 0;
  v8 = 0;
  v31 = 0LL;
  v34[1] = (char *)a2 + 1424;
  while ( 1 )
  {
    v34[2] = v6;
    if ( v6 == (struct CInputSpace *)((char *)a2 + 1424) || v6 == (struct CInputSpace *)-16LL )
      break;
    v9 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v34);
    v10 = v31;
    v11 = v9;
    v12 = HIDWORD(v31);
    v13 = *(_DWORD *)v9;
    if ( (int)v31 >= v13 )
      v10 = v13;
    LODWORD(v31) = v10;
    LODWORD(v32) = v10;
    if ( SHIDWORD(v31) >= *((_DWORD *)v11 + 1) )
      v12 = *((_DWORD *)v11 + 1);
    HIDWORD(v31) = v12;
    DWORD1(v32) = v12;
    v14 = *((_DWORD *)v11 + 4);
    if ( v8 <= *((_DWORD *)v11 + 2) )
      v8 = *((_DWORD *)v11 + 2);
    DWORD2(v32) = v8;
    if ( v7 <= *((_DWORD *)v11 + 3) )
      v7 = *((_DWORD *)v11 + 3);
    HIDWORD(v32) = v7;
    if ( (v14 & 1) != 0 )
      v4 = v11;
    if ( !v5 || (unsigned int)PtInRect(v11, 0LL) )
      v5 = v11;
    v15 = *((_WORD *)v11 + 10);
    v16 = *((_WORD *)v11 + 11);
    if ( (unsigned __int16)v15 < 0x60u )
    {
      if ( v16 <= 0x60u )
        v15 = 96;
      else
        v15 = *((_WORD *)v11 + 11);
      *((_WORD *)v11 + 10) = v15;
    }
    if ( !v16 )
      *((_WORD *)v11 + 11) = v15;
    if ( (v14 & 2) != 0 )
      CInputSpaceRegion::PopulatePanelId(v11);
    v6 = *(struct CInputSpace **)v6;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v4 )
    v5 = v4;
  *((_DWORD *)a2 + 10) = 0;
  v17 = (_OWORD *)((char *)a2 + 24);
  v18 = (_OWORD *)((char *)a2 + 720);
  v19 = 5LL;
  *(_OWORD *)((char *)a2 + 24) = v32;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) |= 1u;
    do
    {
      *v18 = *(_OWORD *)v5;
      v18[1] = *((_OWORD *)v5 + 1);
      v18[2] = *((_OWORD *)v5 + 2);
      v18[3] = *((_OWORD *)v5 + 3);
      v18[4] = *((_OWORD *)v5 + 4);
      v18[5] = *((_OWORD *)v5 + 5);
      v18[6] = *((_OWORD *)v5 + 6);
      v18 += 8;
      v20 = *((_OWORD *)v5 + 7);
      v5 = (struct CInputSpaceRegion *)((char *)v5 + 128);
      *(v18 - 1) = v20;
      --v19;
    }
    while ( v19 );
    *v18 = *(_OWORD *)v5;
    v18[1] = *((_OWORD *)v5 + 1);
    v18[2] = *((_OWORD *)v5 + 2);
    v21 = *((_QWORD *)v5 + 6);
  }
  else
  {
    do
    {
      v22 = v17[1];
      *v18 = *v17;
      v23 = v17[2];
      v18[1] = v22;
      v24 = v17[3];
      v18[2] = v23;
      v25 = v17[4];
      v18[3] = v24;
      v26 = v17[5];
      v18[4] = v25;
      v27 = v17[6];
      v18[5] = v26;
      v28 = v17[7];
      v17 += 8;
      v18[6] = v27;
      v18 += 8;
      *(v18 - 1) = v28;
      --v19;
    }
    while ( v19 );
    v29 = v17[1];
    *v18 = *v17;
    v30 = v17[2];
    v21 = *((_QWORD *)v17 + 6);
    v18[1] = v29;
    v18[2] = v30;
  }
  *((_QWORD *)v18 + 6) = v21;
}
