/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C01A95D4
 * Callers:
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1C01A92EC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0010E48 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C001D31C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(
        __int64 (__fastcall **a1)(_QWORD, __int64),
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int *v2; // r10
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rdi
  unsigned int v11; // edi
  __int64 v12; // rax

  v2 = (unsigned int *)*a2;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = (unsigned int *)*a2;
  }
  v5 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)(a1 + 3), v2[6]);
  if ( v5 )
  {
    if ( DMMVIDPNTARGETMODE::operator!=(v5, v6) )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)*a2 + 6), *a2, a1);
      v11 = -1071774940;
LABEL_14:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
      return v11;
    }
LABEL_13:
    v12 = WdLogNewEntry5_WdTrace(v8, v7);
    v11 = -1071774956;
    *(_QWORD *)(v12 + 24) = *a2;
    *(_QWORD *)(v12 + 32) = a1;
    goto LABEL_14;
  }
  if ( !Set<DMMVIDPNTARGETMODE>::Add((__int64)(a1 + 3), v6) )
    goto LABEL_13;
  v9 = *a2;
  if ( a1 )
  {
    if ( (*a2)[5] )
      WdLogSingleEntry0(1LL);
    v9[5] = a1;
  }
  else
  {
    WdLogSingleEntry2(2LL, v9 + 4, (*a2)[5]);
  }
  *a2 = 0LL;
  return 0LL;
}
