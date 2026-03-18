/*
 * XREFs of ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C000CE30
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     NtConfigureInputSpace @ 0x1C012DA80 (NtConfigureInputSpace.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall CInputSpace::AddRegion(
        CInputSpace *this,
        const struct CInputSpaceRegion *a2,
        struct CInputSpaceRegion **a3)
{
  __int64 v6; // rax
  CInputSpace *v7; // r9
  struct CInputSpaceRegion *v8; // rdx
  __int64 v9; // rax
  struct CInputSpaceRegion *v10; // rcx
  __int128 v11; // xmm1
  CInputSpace **v12; // rcx

  if ( a3 )
    *a3 = 0LL;
  v6 = Win32AllocPoolZInit(0x2C8uLL);
  v7 = (CInputSpace *)v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = (struct CInputSpaceRegion *)(v6 + 16);
  v9 = 5LL;
  v10 = v8;
  do
  {
    *(_OWORD *)v10 = *(_OWORD *)a2;
    *((_OWORD *)v10 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v10 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v10 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v10 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v10 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v10 + 6) = *((_OWORD *)a2 + 6);
    v10 = (struct CInputSpaceRegion *)((char *)v10 + 128);
    v11 = *((_OWORD *)a2 + 7);
    a2 = (const struct CInputSpaceRegion *)((char *)a2 + 128);
    *((_OWORD *)v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *(_OWORD *)a2;
  *((_OWORD *)v10 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v10 + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)v10 + 6) = *((_QWORD *)a2 + 6);
  v12 = (CInputSpace **)*((_QWORD *)this + 179);
  if ( *v12 != (CInputSpace *)((char *)this + 1424) )
    __fastfail(3u);
  *(_QWORD *)v7 = (char *)this + 1424;
  *((_QWORD *)v7 + 1) = v12;
  *v12 = v7;
  *((_QWORD *)this + 179) = v7;
  ++*((_DWORD *)this + 355);
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
