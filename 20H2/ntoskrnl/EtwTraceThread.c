/*
 * XREFs of EtwTraceThread @ 0x14063BD44
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     PsGetCurrentThreadTeb @ 0x140364290 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x14063C0A0 (EtwpPsProvTraceThread.c)
 */

void __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // r8
  _DWORD *CurrentThreadTeb; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // r8
  unsigned __int16 *v12; // rdx
  __int64 ProcessServerSilo; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned __int16 v18; // [rsp+30h] [rbp-C8h]
  unsigned int v19; // [rsp+38h] [rbp-C0h]
  _DWORD v20[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A0h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  __int64 v23; // [rsp+68h] [rbp-90h]
  __int64 v24; // [rsp+70h] [rbp-88h]
  __int64 v25; // [rsp+78h] [rbp-80h]
  __int64 v26; // [rsp+80h] [rbp-78h]
  __int64 v27; // [rsp+88h] [rbp-70h]
  int v28; // [rsp+90h] [rbp-68h]
  char v29; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v32; // [rsp+97h] [rbp-61h]
  __int64 v33; // [rsp+98h] [rbp-60h]
  _QWORD v34[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v35; // [rsp+B0h] [rbp-48h]
  __int64 v36; // [rsp+B8h] [rbp-40h]
  __int64 *v37; // [rsp+C0h] [rbp-38h]
  __int64 v38; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v33 = 0LL;
  v19 = 5249283;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 2) != 0 )
    EtwpPsProvTraceThread();
  v20[0] = *(_DWORD *)(a1 + 1144);
  v20[1] = *(_DWORD *)(a1 + 1152);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 576);
  v26 = *(_QWORD *)(a1 + 1232);
  v23 = 0LL;
  v24 = 0LL;
  v27 = *(_QWORD *)(a1 + 240);
  v28 = 0;
  v29 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v32 = 0;
  if ( a3 )
  {
    v18 = 1281;
    if ( a2 )
    {
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v9 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v9 && ((v11 = *(_WORD *)(v9 + 8), v11 == 332) || v11 == 452) )
        v10 = CurrentThreadTeb[3032];
      else
        v10 = CurrentThreadTeb[1480];
      v28 = v10;
    }
  }
  else
  {
    v18 = 1282;
    v19 = 72358147;
    if ( v7 )
    {
      v14 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v14 && ((v16 = *(_WORD *)(v14 + 8), v16 == 332) || v16 == 452) )
      {
        v28 = *(_DWORD *)(v7 + 12128);
        v23 = *(unsigned int *)(v7 + 8196);
        v15 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v28 = *(_DWORD *)(v7 + 5920);
        v23 = *(_QWORD *)(v7 + 8);
        v15 = *(_QWORD *)(v7 + 16);
      }
      v24 = v15;
    }
  }
  v34[0] = v20;
  v34[1] = 72LL;
  v12 = *(unsigned __int16 **)(a1 + 1552);
  if ( v12 && *((_QWORD *)v12 + 1) )
  {
    v17 = 2048;
    if ( *v12 < 0x800u )
      v17 = *v12;
    v35 = (__int64 *)*((_QWORD *)v12 + 1);
    v36 = v17;
    if ( !v17 || *(_WORD *)(*((_QWORD *)v12 + 1) + 2 * ((unsigned __int64)v17 >> 1) - 2) )
    {
      v37 = &EtwpNull;
      v38 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v35 = &EtwpNull;
    v36 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)v34, v6, 2u, v18, v19);
}
