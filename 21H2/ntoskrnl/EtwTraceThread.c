/*
 * XREFs of EtwTraceThread @ 0x14068FC44
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     PsGetCurrentThreadTeb @ 0x1402722C0 (PsGetCurrentThreadTeb.c)
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PsLockThreadNameShared @ 0x1403F8534 (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x1403F854C (PsUnlockThreadNameShared.c)
 *     Feature_1694225722__private_IsEnabledDeviceUsage @ 0x1403F93D4 (Feature_1694225722__private_IsEnabledDeviceUsage.c)
 *     EtwpPsProvTraceThread @ 0x14068FFBC (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // r8
  _DWORD *CurrentThreadTeb; // rax
  unsigned __int64 v9; // rdx
  __int16 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  __int16 v19; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+38h] [rbp-C0h]
  _DWORD v21[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A0h]
  __int64 v23; // [rsp+60h] [rbp-98h]
  __int64 v24; // [rsp+68h] [rbp-90h]
  __int64 v25; // [rsp+70h] [rbp-88h]
  __int64 v26; // [rsp+78h] [rbp-80h]
  __int64 v27; // [rsp+80h] [rbp-78h]
  __int64 v28; // [rsp+88h] [rbp-70h]
  int v29; // [rsp+90h] [rbp-68h]
  char v30; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v33; // [rsp+97h] [rbp-61h]
  __int64 v34; // [rsp+98h] [rbp-60h]
  _QWORD v35[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v36; // [rsp+B0h] [rbp-48h]
  __int64 v37; // [rsp+B8h] [rbp-40h]
  __int64 *v38; // [rsp+C0h] [rbp-38h]
  __int64 v39; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v34 = 0LL;
  v20 = 5249283;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 2) != 0 )
    EtwpPsProvTraceThread();
  v21[0] = *(_DWORD *)(a1 + 1144);
  v21[1] = *(_DWORD *)(a1 + 1152);
  v22 = *(_QWORD *)(a1 + 56);
  v23 = *(_QWORD *)(a1 + 48);
  v26 = *(_QWORD *)(a1 + 576);
  v27 = *(_QWORD *)(a1 + 1232);
  v24 = 0LL;
  v25 = 0LL;
  v28 = *(_QWORD *)(a1 + 240);
  v29 = 0;
  v30 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v33 = 0;
  if ( a3 )
  {
    v19 = 1281;
    if ( a2 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      v25 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v9 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v9 && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452) )
        v11 = CurrentThreadTeb[3032];
      else
        v11 = CurrentThreadTeb[1480];
      v29 = v11;
    }
  }
  else
  {
    v19 = 1282;
    v20 = 72358147;
    if ( v7 )
    {
      v12 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v12 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
      {
        v29 = *(_DWORD *)(v7 + 12128);
        v24 = *(unsigned int *)(v7 + 8196);
        v14 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v29 = *(_DWORD *)(v7 + 5920);
        v24 = *(_QWORD *)(v7 + 8);
        v14 = *(_QWORD *)(v7 + 16);
      }
      v25 = v14;
    }
  }
  v35[0] = v21;
  v35[1] = 72LL;
  if ( (unsigned int)Feature_1694225722__private_IsEnabledDeviceUsage() )
    PsLockThreadNameShared();
  v15 = *(unsigned __int16 **)(a1 + 1552);
  if ( v15 && *((_QWORD *)v15 + 1) )
  {
    v16 = 2048;
    if ( *v15 < 0x800u )
      v16 = *v15;
    v36 = (__int64 *)*((_QWORD *)v15 + 1);
    v37 = v16;
    if ( !v16 || *(_WORD *)(*((_QWORD *)v15 + 1) + 2 * ((unsigned __int64)v16 >> 1) - 2) )
    {
      v38 = &EtwpNull;
      v39 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v36 = &EtwpNull;
    v37 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v35, v6, 2u, v19, v20);
  result = Feature_1694225722__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared();
  return result;
}
