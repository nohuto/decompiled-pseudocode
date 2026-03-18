/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C006C500
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C006C470 (LinkNodepRunSrsAsync.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  char v6; // r14
  int v7; // ecx
  int v8; // ecx
  __int64 *v9; // rcx
  int v10; // eax
  char *v11; // r8
  char *v12; // rdx
  char v13; // cl
  char v14; // r10
  char v15; // r15
  const void *v16; // r12
  unsigned __int16 v17; // si
  int v18; // ebp
  char v19; // r13
  unsigned __int16 v20; // r9
  unsigned int v21; // ebp
  void *Pool2; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  char *i; // rax
  __int64 *v26; // rsi
  __int64 v28; // [rsp+80h] [rbp+8h]

  v28 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 >= 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a4 + 36), 1u);
    v7 = *(_DWORD *)(a4 + 32);
    v5 = 0;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          KeBugCheckEx(0xA3u, 1uLL, 0x508E8uLL, 0LL, 0LL);
        goto LABEL_43;
      }
    }
    else
    {
      v9 = *(__int64 **)a4;
      *(_DWORD *)(a4 + 32) = 1;
      v10 = ACPIGet((__int64)v9, 1397903455, 738263048, 0LL, 0, (__int64)LinkNodepRunSrsWorker, a4, a4 + 16, 0LL);
      v5 = v10;
      if ( v10 == 259 )
        return 259LL;
      if ( v10 < 0 )
        goto LABEL_45;
    }
    v11 = *(char **)(a4 + 16);
    *(_DWORD *)(a4 + 32) = 2;
    if ( !v11 )
    {
      v5 = -1073741772;
      goto LABEL_45;
    }
    v12 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xDu,
        (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
        v11);
      v11 = *(char **)(a4 + 16);
      v12 = v11;
    }
    v13 = *v12;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( !*v12 )
      goto LABEL_44;
    while ( 1 )
    {
      if ( v13 < 0 )
      {
        v20 = *(_WORD *)(v12 + 1) + 3;
      }
      else
      {
        v20 = (v13 & 7) + 1;
        v13 &= 0x78u;
      }
      if ( v13 == 120 )
        break;
      if ( v13 == 32 || v13 == -119 )
      {
        v16 = v12;
        if ( v13 == -119 )
        {
          v17 = 9;
          v19 = 1;
        }
        else
        {
          v17 = v20;
        }
        v14 = 1;
        v18 += v17;
      }
      v12 += v20;
      v13 = *v12;
      if ( !*v12 )
        goto LABEL_27;
    }
    v18 += v20;
    if ( v20 > 1u )
      v15 = 1;
LABEL_27:
    if ( !v14 )
    {
LABEL_44:
      ExFreePoolWithTag(v11, 0);
      v5 = -1073741275;
      goto LABEL_45;
    }
    v21 = v18 + 1;
    Pool2 = (void *)ExAllocatePool2(64LL, v21, 1097884481LL);
    *(_QWORD *)(a4 + 24) = Pool2;
    if ( !Pool2 )
    {
      ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
      v5 = -1073741670;
      goto LABEL_45;
    }
    memmove(Pool2, v16, v17);
    ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
    v23 = *(_QWORD *)(a4 + 24);
    if ( v19 )
    {
      *(_BYTE *)(v23 + 4) = 1;
      *(_WORD *)(v23 + 1) = v17 - 3;
      *(_DWORD *)(v23 + 5) = *(_DWORD *)(a4 + 8);
    }
    else
    {
      *(_WORD *)(v23 + 1) = 1 << *(_DWORD *)(a4 + 8);
    }
    v24 = *(_QWORD *)(a4 + 24);
    *(_BYTE *)(v17 + v24) = 120;
    if ( v15 )
    {
      *(_BYTE *)(v17 + v24) = 121;
      for ( i = *(char **)(a4 + 24); *i != 121; ++i )
        v6 = *i;
      *(_BYTE *)(v17 + v24 + 1) = -v6;
    }
    v26 = AMLIGetNamedChild(*(__int64 **)a4, 1397904223);
    if ( !v26 )
    {
      v5 = -1073741772;
      ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      goto LABEL_45;
    }
    *(_QWORD *)(a4 + 72) = *(_QWORD *)(a4 + 24);
    *(_WORD *)(a4 + 42) = 3;
    *(_DWORD *)(a4 + 64) = v21;
    v5 = AMLIAsyncEvalObject(v26, 0LL, 1u, a4 + 40, LinkNodepRunSrsWorker, a4);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v26);
    if ( v5 != 259 )
    {
      if ( v5 >= 0 )
      {
        v5 = 0;
LABEL_43:
        ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      }
LABEL_45:
      a1 = v28;
      goto LABEL_46;
    }
    return 259LL;
  }
LABEL_46:
  if ( *(_DWORD *)(a4 + 36) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a4 + 80))(a1, (unsigned int)v5, 0LL, *(_QWORD *)(a4 + 88));
  ExFreePoolWithTag((PVOID)a4, 0);
  return (unsigned int)v5;
}
