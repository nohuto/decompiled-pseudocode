/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C00062B0
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x1C0005FA0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007624C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3)
{
  int v6; // esi
  char *v7; // rdi
  char *v8; // rsi
  char *v9; // r12
  char *v10; // r15
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( (*((_QWORD *)this + 6) != a2 || !a2) && *((int *)this + 6) > 0 )
  {
    v7 = 0LL;
    if ( !*((_DWORD *)this + 22) )
      goto LABEL_14;
    v8 = (char *)*((_QWORD *)this + 10);
    v9 = (char *)this + 72;
    if ( v8 == (char *)this + 72 )
      goto LABEL_14;
    do
    {
      v10 = v8 - 24;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v8 - 3) + 16LL))((_QWORD *)v8 - 3) )
        break;
      v8 = (char *)*((_QWORD *)v8 + 1);
      v7 = v10;
    }
    while ( v8 != v9 );
    if ( !v7 )
    {
LABEL_14:
      memset((char *)a3 + 4, 0, 0xDCuLL);
      *(_DWORD *)a3 = 2;
      v6 = 0;
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 2);
      goto LABEL_10;
    }
    v11 = *(_QWORD *)v7;
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(char *, __int64 *))(v11 + 224))(v7, &v14);
    if ( v6 >= 0 )
    {
      *(_DWORD *)a3 = 3 - ((*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 160LL))(v7) != 0);
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a3 + 2) = *((_QWORD *)v7 + 2);
      *((_DWORD *)a3 + 6) = *(_DWORD *)(v14 + 28);
      *((_DWORD *)a3 + 7) = *((_DWORD *)v7 + 69);
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 35) + 56LL))(*((_QWORD *)v7 + 35), (char *)a3 + 32);
      *(_OWORD *)((char *)a3 + 40) = *((_OWORD *)v7 + 18);
      *((_QWORD *)a3 + 7) = *((_QWORD *)v7 + 38);
      *((_DWORD *)a3 + 16) = *((_DWORD *)v7 + 78);
      v12 = *((_OWORD *)v7 + 3);
      *((_DWORD *)v7 + 72) = 0;
      v7[42] = 0;
      *(_OWORD *)((char *)a3 + 72) = v12;
      *(_OWORD *)((char *)a3 + 88) = *((_OWORD *)v7 + 4);
      *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)v7 + 5);
      *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)v7 + 6);
      *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)v7 + 7);
      *(_OWORD *)((char *)a3 + 152) = *((_OWORD *)v7 + 8);
      *(_OWORD *)((char *)a3 + 168) = *((_OWORD *)v7 + 9);
      *(_OWORD *)((char *)a3 + 184) = *((_OWORD *)v7 + 10);
      *(_OWORD *)((char *)a3 + 200) = *((_OWORD *)v7 + 11);
      *((_DWORD *)a3 + 54) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 184LL))(v7);
      *((_DWORD *)a3 + 55) = *(_DWORD *)(v14 + 80);
LABEL_10:
      *((_QWORD *)this + 6) = a2;
    }
  }
  return (unsigned int)v6;
}
