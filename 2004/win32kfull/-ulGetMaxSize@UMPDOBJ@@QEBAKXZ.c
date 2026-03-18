/*
 * XREFs of ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1C02AD8D4
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00EF3F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02AD5B4 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::ulGetMaxSize(UMPDOBJ *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v1 = *((_QWORD *)this + 49);
  if ( v1 && (v2 = *(unsigned int *)(v1 + 56), v3 = *(_QWORD *)(v1 + 32), v3 > v2) )
    return (unsigned int)(v3 - v2);
  else
    return 0LL;
}
