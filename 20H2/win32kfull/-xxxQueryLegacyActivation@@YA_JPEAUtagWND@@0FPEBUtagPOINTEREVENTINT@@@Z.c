/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F17E4
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     GetDPITransformationMonitor @ 0x1C01E4F00 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v6; // r14
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = 0LL;
  v6 = a3;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 104LL) )
    return 3LL;
  v7 = *(_QWORD *)(gptiCurrent + 764LL);
  v8 = *(_QWORD *)(gptiCurrent + 776LL);
  v19 = *(_DWORD *)(gptiCurrent + 772LL);
  *(_QWORD *)(gptiCurrent + 776LL) = *((_QWORD *)a4 + 5);
  v9 = *((_QWORD *)a1 + 5);
  v10 = *((_QWORD *)a4 + 5);
  v20 = v10;
  v18 = v7;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(v10, (__int64)a1);
    PhysicalToLogicalDPIPoint(&v20, &v20, 0LL, &DPITransformationMonitor);
    LODWORD(v10) = v20;
  }
  *(_DWORD *)(gptiCurrent + 764LL) = v10;
  *(_DWORD *)(gptiCurrent + 768LL) = HIDWORD(v20);
  v11 = a2 ? *(_QWORD *)a2 : 0LL;
  _InterlockedAdd(&glSendMessage, 1u);
  v12 = xxxSendTransformableMessageTimeout(
          (unsigned __int64)a1,
          0x21u,
          v11,
          (struct _LARGE_STRING *)(v6 | 0x2460000),
          0,
          0,
          0LL,
          1,
          1);
  v13 = v18;
  *(_QWORD *)(gptiCurrent + 776LL) = v8;
  v14 = v19;
  *(_QWORD *)(gptiCurrent + 764LL) = v13;
  *(_DWORD *)(gptiCurrent + 772LL) = v14;
  v15 = v12 - 3;
  result = 1LL;
  if ( v15 <= 1 )
    return 3LL;
  return result;
}
