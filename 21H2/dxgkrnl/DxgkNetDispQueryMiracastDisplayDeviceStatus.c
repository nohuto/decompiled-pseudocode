/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02D2A60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0011C8C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0049810 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C038E8A8 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // r15
  char *v6; // rsi
  struct DXGPROCESS *Current; // rax
  int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rax
  size_t v13; // rbx
  unsigned __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+18h] BYREF
  int v17; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (_DWORD *)a2;
  v6 = 0LL;
  v17 = 0;
  v16 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v15 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v8 = RtlStringCchLengthW(a1, 0x208uLL, &v15);
    if ( v8 >= 0 )
    {
      v10 = v15;
      v11 = 2 * (v15 + 1);
      if ( !is_mul_ok(v15 + 1, 2uLL) )
        v11 = -1LL;
      v12 = (char *)operator new[](v11, 0x4B677844u, 256LL, v9);
      v6 = v12;
      if ( v12 )
      {
        v13 = 2 * v10;
        memmove(v12, a1, v13);
        *(_WORD *)&v6[v13] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v6, &v17, &v16) >= 0 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (_DWORD *)MmUserProbeAddress;
          *v4 = v17;
        }
      }
      else
      {
        v16 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate buffer for LocalDeviceName, returning 0x%I64x",
          -2147483638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v16 = -2147483640;
      WdLogSingleEntry1(3LL, v8);
    }
  }
  else
  {
    v16 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
  }
  if ( v6 )
    operator delete[](v6);
  return v16;
}
