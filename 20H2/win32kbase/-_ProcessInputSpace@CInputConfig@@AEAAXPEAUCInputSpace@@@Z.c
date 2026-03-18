/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C000B160
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000E3D8 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C000A31C (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C000C354 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     PtInRect @ 0x1C002F07C (PtInRect.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct CInputSpaceRegion *v7; // r15
  struct CInputSpaceRegion *v8; // rbx
  struct CInputSpace *v9; // rdi
  int v10; // r12d
  int v11; // r13d
  struct CInputSpaceRegion *v12; // rax
  int v13; // r9d
  struct CInputSpaceRegion *v14; // rcx
  int v15; // r8d
  int v16; // eax
  int v17; // r8d
  __int16 v18; // dx
  unsigned __int16 v19; // ax
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // [rsp+20h] [rbp-50h]
  __int128 v35; // [rsp+28h] [rbp-48h]
  _QWORD v37[3]; // [rsp+48h] [rbp-28h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  v35 = 0LL;
  v37[0] = &CInputConfig::slock;
  v7 = 0LL;
  v8 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v9 = (struct CInputSpace *)*((_QWORD *)a2 + 178);
  v10 = 0;
  v11 = 0;
  v34 = 0LL;
  v37[1] = (char *)a2 + 1424;
  while ( 1 )
  {
    v37[2] = v9;
    if ( v9 == (struct CInputSpace *)((char *)a2 + 1424) || v9 == (struct CInputSpace *)-16LL )
      break;
    v12 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v37);
    v13 = v34;
    v14 = v12;
    v15 = HIDWORD(v34);
    v16 = *(_DWORD *)v12;
    if ( (int)v34 >= v16 )
      v13 = v16;
    LODWORD(v34) = v13;
    LODWORD(v35) = v13;
    if ( SHIDWORD(v34) >= *((_DWORD *)v14 + 1) )
      v15 = *((_DWORD *)v14 + 1);
    HIDWORD(v34) = v15;
    DWORD1(v35) = v15;
    v17 = *((_DWORD *)v14 + 4);
    if ( v11 <= *((_DWORD *)v14 + 2) )
      v11 = *((_DWORD *)v14 + 2);
    DWORD2(v35) = v11;
    if ( v10 <= *((_DWORD *)v14 + 3) )
      v10 = *((_DWORD *)v14 + 3);
    HIDWORD(v35) = v10;
    if ( (v17 & 1) != 0 )
      v7 = v14;
    if ( !v8 || (unsigned int)PtInRect(v14, 0LL) )
      v8 = v14;
    v18 = *((_WORD *)v14 + 10);
    v19 = *((_WORD *)v14 + 11);
    if ( (unsigned __int16)v18 < 0x60u )
    {
      if ( v19 <= 0x60u )
        v18 = 96;
      else
        v18 = *((_WORD *)v14 + 11);
      *((_WORD *)v14 + 10) = v18;
    }
    if ( !v19 )
      *((_WORD *)v14 + 11) = v18;
    if ( (v17 & 2) != 0 )
      CInputSpaceRegion::PopulatePanelId(v14);
    v9 = *(struct CInputSpace **)v9;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v7 )
    v8 = v7;
  *((_DWORD *)a2 + 10) = 0;
  v20 = (_OWORD *)((char *)a2 + 24);
  v21 = (_OWORD *)((char *)a2 + 720);
  v22 = 5LL;
  *(_OWORD *)((char *)a2 + 24) = v35;
  if ( v8 )
  {
    *((_DWORD *)v8 + 4) |= 1u;
    do
    {
      *v21 = *(_OWORD *)v8;
      v21[1] = *((_OWORD *)v8 + 1);
      v21[2] = *((_OWORD *)v8 + 2);
      v21[3] = *((_OWORD *)v8 + 3);
      v21[4] = *((_OWORD *)v8 + 4);
      v21[5] = *((_OWORD *)v8 + 5);
      v21[6] = *((_OWORD *)v8 + 6);
      v21 += 8;
      v23 = *((_OWORD *)v8 + 7);
      v8 = (struct CInputSpaceRegion *)((char *)v8 + 128);
      *(v21 - 1) = v23;
      --v22;
    }
    while ( v22 );
    *v21 = *(_OWORD *)v8;
    v21[1] = *((_OWORD *)v8 + 1);
    v21[2] = *((_OWORD *)v8 + 2);
    v24 = *((_QWORD *)v8 + 6);
  }
  else
  {
    do
    {
      v25 = v20[1];
      *v21 = *v20;
      v26 = v20[2];
      v21[1] = v25;
      v27 = v20[3];
      v21[2] = v26;
      v28 = v20[4];
      v21[3] = v27;
      v29 = v20[5];
      v21[4] = v28;
      v30 = v20[6];
      v21[5] = v29;
      v31 = v20[7];
      v20 += 8;
      v21[6] = v30;
      v21 += 8;
      *(v21 - 1) = v31;
      --v22;
    }
    while ( v22 );
    v32 = v20[1];
    *v21 = *v20;
    v33 = v20[2];
    v24 = *((_QWORD *)v20 + 6);
    v21[1] = v32;
    v21[2] = v33;
  }
  *((_QWORD *)v21 + 6) = v24;
}
