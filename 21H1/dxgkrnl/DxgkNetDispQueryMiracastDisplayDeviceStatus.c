/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C0220690
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0009C20 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003C958 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02CB028 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, __int64 a2)
{
  _DWORD *v2; // r15
  char *v4; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  SIZE_T v17; // rax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  size_t v24; // rbx
  unsigned __int64 v26[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+70h] [rbp+18h] BYREF
  int v28; // [rsp+78h] [rbp+20h] BYREF

  v2 = (_DWORD *)a2;
  v4 = 0LL;
  v28 = 0;
  v27 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v26[0] = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v10 = RtlStringCchLengthW(a1, 0x208uLL, v26);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = v26[0];
      v17 = 2 * (v26[0] + 1);
      if ( !is_mul_ok(v26[0] + 1, 2uLL) )
        v17 = -1LL;
      v18 = (char *)operator new[](v17, 0x4B677844u, PagedPool);
      v4 = v18;
      if ( v18 )
      {
        v24 = 2 * v16;
        memmove(v18, a1, v24);
        *(_WORD *)&v4[v24] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v4, &v28, &v27) >= 0 )
        {
          if ( (unsigned __int64)v2 >= MmUserProbeAddress )
            v2 = (_DWORD *)MmUserProbeAddress;
          *v2 = v28;
        }
      }
      else
      {
        v27 = -2147483638;
        v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v23);
      }
    }
    else
    {
      v27 = -2147483640;
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdWarning(v15);
    }
  }
  else
  {
    v27 = -2147483643;
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v9);
  }
  if ( v4 )
    operator delete[](v4);
  return v27;
}
