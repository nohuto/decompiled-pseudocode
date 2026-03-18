/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017B25C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0035F10 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C010FA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0179310 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0195344 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C021033C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        unsigned __int64 a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // rdx
  BOOL v7; // eax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ADAPTER_DISPLAY *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx

  v5 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v19 + 24) = 4145LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v20 + 24) = 4146LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *((_QWORD *)v5 + 65);
  if ( !v6
    || !*((_QWORD *)v5 + 66)
    || !*((_QWORD *)v5 + 67)
    || !*((_QWORD *)v5 + 69)
    || !*((_QWORD *)v5 + 70) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5)
    || !*((_QWORD *)v5 + 71) && *((int *)v5 + 649) < 2200
    || !*((_QWORD *)v5 + 58)
    || !*((_QWORD *)v5 + 59) )
  {
    if ( *((int *)v5 + 649) < 1200 && (*((_DWORD *)v5 + 87) & 0x10) == 0
      || v6
      || *((_QWORD *)v5 + 66)
      || *((_QWORD *)v5 + 67)
      || *((_QWORD *)v5 + 68)
      || *((_QWORD *)v5 + 69)
      || *((_QWORD *)v5 + 70)
      || *((_QWORD *)v5 + 71)
      || *((_QWORD *)v5 + 57)
      || *((_QWORD *)v5 + 58)
      || *((_QWORD *)v5 + 59)
      || *((_QWORD *)v5 + 73)
      || *((_QWORD *)v5 + 72)
      || *((_QWORD *)v5 + 87)
      || *((_QWORD *)v5 + 136)
      || *((_QWORD *)v5 + 137)
      || *((_QWORD *)v5 + 138)
      || *((_QWORD *)v5 + 139) )
    {
      goto LABEL_73;
    }
    if ( *((_DWORD *)v5 + 362) || *((_DWORD *)v5 + 363) )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL);
      v21[3] = *((unsigned int *)v5 + 362);
      v26 = *((unsigned int *)v5 + 363);
      v22 = -1073741735;
      v21[5] = -1073741735LL;
      v21[4] = v26;
      goto LABEL_74;
    }
    goto LABEL_66;
  }
  if ( *((_QWORD *)v5 + 338) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5) )
    {
      v7 = *((_QWORD *)v5 + 117) == 0LL;
    }
    else
    {
      if ( !*((_QWORD *)v5 + 68) )
      {
LABEL_73:
        v21 = (_QWORD *)WdLogNewEntry5_WdError(a1, v6);
        v21[3] = v5;
        v22 = -1073741735;
        v21[4] = -1073741735LL;
LABEL_74:
        WdLogEvent5_WdError(v21);
        return v22;
      }
      v7 = 0;
    }
    if ( v7 || !*((_QWORD *)v5 + 73) || !*((_QWORD *)v5 + 57) && *((int *)v5 + 649) < 1200 )
      goto LABEL_73;
  }
  else
  {
    if ( !*((_QWORD *)v5 + 92) )
      goto LABEL_73;
    a1 = *((_QWORD *)v5 + 75) == 0LL;
    if ( (*((_QWORD *)v5 + 73) == 0LL) != (_DWORD)a1 )
      goto LABEL_73;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v6, a3, a4) + 24) = v5;
  if ( *((int *)v5 + 649) >= 1200 && !*((_DWORD *)v5 + 362) && !*((_DWORD *)v5 + 363) )
  {
LABEL_66:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v6, a3, a4) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 362) - 1) > 0xF )
  {
    v23 = WdLogNewEntry5_WdError(a1, v6);
    *(_QWORD *)(v23 + 24) = v5;
    v24 = *((unsigned int *)v5 + 362);
    goto LABEL_87;
  }
  if ( !*((_DWORD *)v5 + 363) )
  {
    v23 = WdLogNewEntry5_WdError(a1, v6);
    *(_QWORD *)(v23 + 24) = v5;
    v24 = *((unsigned int *)v5 + 363);
LABEL_87:
    *(_QWORD *)(v23 + 32) = v24;
    goto LABEL_88;
  }
  if ( *((_BYTE *)v5 + 2608) && *((int *)v5 + 582) >= 4608 && (!*((_BYTE *)v5 + 2528) || !*((_BYTE *)v5 + 2529)) )
  {
    v23 = WdLogNewEntry5_WdError(a1, v6);
    *(_QWORD *)(v23 + 24) = 4319LL;
LABEL_88:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 72) )
    *((_QWORD *)v5 + 72) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)v5 + 87) )
    *((_QWORD *)v5 + 87) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v5 + 124) )
    *((_QWORD *)v5 + 124) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v5 + 137) )
    *((_QWORD *)v5 + 137) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v5 + 138) )
    *((_QWORD *)v5 + 138) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)v5 + 139) )
    *((_QWORD *)v5 + 139) = W32kStub_GreSfmOpenTokenEvent;
  v8 = operator new(0x398uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v8 )
    v13 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v8, v5);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    v22 = -1073741801;
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
    return v22;
  }
  v16 = ADAPTER_DISPLAY::Initialize(v13);
  if ( v16 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v13);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v13);
  }
  else
  {
    v17 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v17 + 24) = v13;
    *(_QWORD *)(v17 + 32) = v5;
    WdLogEvent5_WdEvent(v17);
    *a2 = v13;
  }
  return (unsigned int)v16;
}
