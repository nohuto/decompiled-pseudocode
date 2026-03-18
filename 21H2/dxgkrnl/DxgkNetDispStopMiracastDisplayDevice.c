/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C02D2F10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0011C8C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0049810 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C0049DC8 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C006423C (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  WCHAR *v17; // rax
  size_t v18; // rbx
  NTSTATUS v19; // eax
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  LODWORD(Object) = DxgkNetDispAccessCheck(Current);
  if ( (int)Object >= 0 )
  {
    v21 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v13 = RtlStringCchLengthW(a1, 0x208uLL, &v21);
    if ( v13 >= 0 )
    {
      v15 = v21;
      v16 = 2 * (v21 + 1);
      if ( !is_mul_ok(v21 + 1, 2uLL) )
        v16 = -1LL;
      v17 = (WCHAR *)operator new[](v16, 0x4B677844u, 256LL, v14);
      v4 = v17;
      if ( v17 )
      {
        v18 = v15;
        memmove(v17, a1, v18 * 2);
        v4[v18] = 0;
        if ( Handle
          && (Object = 0LL,
              v19 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v19 < 0) )
        {
          v12 = -2147483640;
          WdLogSingleEntry1(2LL, Handle);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)Handle,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v12 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v12 = -2147483638;
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
      v12 = -2147483640;
      WdLogSingleEntry1(3LL, v13);
    }
  }
  else
  {
    v12 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
  }
  if ( v4 )
    operator delete[](v4);
  return v12;
}
