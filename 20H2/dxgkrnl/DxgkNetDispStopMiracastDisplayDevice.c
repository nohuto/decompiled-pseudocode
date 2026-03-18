/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C0223BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00093C0 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003D744 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003DD88 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C00557A8 (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  SIZE_T v22; // rax
  WCHAR *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  size_t v29; // rbx
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  WCHAR *v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+48h] [rbp-30h]
  unsigned __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v35 = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v37 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v15 = RtlStringCchLengthW(a1, 0x208uLL, &v37);
    v19 = v15;
    if ( v15 >= 0 )
    {
      v21 = v37;
      v22 = 2 * (v37 + 1);
      if ( !is_mul_ok(v37 + 1, 2uLL) )
        v22 = -1LL;
      v23 = (WCHAR *)operator new[](v22, 0x4B677844u, PagedPool);
      v4 = v23;
      v35 = v23;
      if ( v23 )
      {
        v29 = v21;
        memmove(v23, a1, v29 * 2);
        v4[v29] = 0;
        if ( Handle
          && (Object = 0LL,
              v30 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v30 < 0) )
        {
          v13 = -2147483640;
          v33 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v33 + 24) = Handle;
          WdLogEvent5_WdError(v33);
        }
        else
        {
          v13 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v13 = -2147483638;
        v28 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
        *(_QWORD *)(v28 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v28);
      }
    }
    else
    {
      v13 = -2147483640;
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdWarning(v20);
    }
  }
  else
  {
    v13 = -2147483643;
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v14);
  }
  if ( v4 )
    operator delete[](v4);
  return v13;
}
