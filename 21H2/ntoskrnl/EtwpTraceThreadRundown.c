/*
 * XREFs of EtwpTraceThreadRundown @ 0x1403AE970
 * Callers:
 *     EtwpThreadRundownApc @ 0x1405ABA80 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405ABABC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x140797E50 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEC8C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PsLockThreadNameShared @ 0x1403F8534 (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x1403F854C (PsUnlockThreadNameShared.c)
 *     Feature_1694225722__private_IsEnabledDeviceUsage @ 0x1403F93D4 (Feature_1694225722__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r13
  int v5; // esi
  __int16 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r8
  char v9; // r10
  char v10; // cl
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int16 *v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  __int64 result; // rax
  _DWORD v20[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-B0h]
  __int64 v22; // [rsp+70h] [rbp-A8h]
  __int64 v23; // [rsp+78h] [rbp-A0h]
  __int64 v24; // [rsp+80h] [rbp-98h]
  __int64 v25; // [rsp+88h] [rbp-90h]
  __int64 v26; // [rsp+90h] [rbp-88h]
  __int64 v27; // [rsp+98h] [rbp-80h]
  int v28; // [rsp+A0h] [rbp-78h]
  char v29; // [rsp+A4h] [rbp-74h]
  char PagePriorityThread; // [rsp+A5h] [rbp-73h]
  char IoPriorityThread; // [rsp+A6h] [rbp-72h]
  char v32; // [rsp+A7h] [rbp-71h]
  __int64 v33; // [rsp+A8h] [rbp-70h]
  _QWORD v34[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 *v35; // [rsp+C0h] [rbp-58h]
  __int64 v36; // [rsp+C8h] [rbp-50h]
  __int64 *v37; // [rsp+D0h] [rbp-48h]
  __int64 v38; // [rsp+D8h] [rbp-40h]

  v3 = 2;
  v33 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v20[0] = *(_DWORD *)(a1 + 1144);
  v20[1] = *(_DWORD *)(a1 + 1152);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 576);
  v26 = *(_QWORD *)(a1 + 1232);
  v7 = *(_QWORD *)(a1 + 240);
  v23 = 0LL;
  v24 = 0LL;
  v27 = v7;
  v28 = 0;
  v29 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v32 = 0;
  if ( (*(_BYTE *)(a1 + 1304) & 8) != 0 )
  {
    v10 = v32;
    if ( *(_QWORD *)(a1 + 1096) != a1 + 1096 )
      v10 = 1;
    v32 = v10;
  }
  if ( v8 && v9 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1408LL);
    if ( v11 && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
    {
      v28 = *(_DWORD *)(v8 + 12128);
      v23 = *(unsigned int *)(v8 + 8196);
      v13 = *(unsigned int *)(v8 + 8200);
    }
    else
    {
      v28 = *(_DWORD *)(v8 + 5920);
      v23 = *(_QWORD *)(v8 + 8);
      v13 = *(_QWORD *)(v8 + 16);
    }
    v24 = v13;
  }
  v34[0] = v20;
  v34[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1694225722__private_IsEnabledDeviceUsage() )
    PsLockThreadNameShared(a1, CurrentThread);
  v15 = *(unsigned __int16 **)(a1 + 1552);
  if ( v15 && (v16 = (__int64 *)*((_QWORD *)v15 + 1)) != 0LL )
  {
    v17 = *v15;
    v18 = 2048LL;
    if ( (unsigned __int16)v17 < 0x800u )
      v18 = v17;
    v35 = v16;
    v36 = (unsigned int)v18;
    if ( !(_DWORD)v18 || *((_WORD *)v16 + (v18 >> 1) - 1) )
    {
      v37 = &EtwpNull;
      v38 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v35 = &EtwpNull;
    v36 = 2LL;
  }
  EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1080), (unsigned int)v34, a1, *(_DWORD *)v4, v3, v6, v5, 0);
  result = Feature_1694225722__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1, CurrentThread);
  return result;
}
