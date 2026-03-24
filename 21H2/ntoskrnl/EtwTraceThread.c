/*
 * XREFs of EtwTraceThread @ 0x14062955C
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402427D0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     EtwTraceSiloKernelEvent @ 0x14025A84C (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x1402602B0 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x1406298B8 (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // r8
  _DWORD *CurrentThreadTeb; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // r8
  unsigned __int16 *v12; // rdx
  __int64 ProcessServerSilo; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned int v18; // eax
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
      if ( v9 && ((v11 = *(_WORD *)(v9 + 8), v11 == 332) || v11 == 452) )
        v10 = CurrentThreadTeb[3032];
      else
        v10 = CurrentThreadTeb[1480];
      v29 = v10;
    }
  }
  else
  {
    v19 = 1282;
    v20 = 72358147;
    if ( v7 )
    {
      v15 = KeGetCurrentThread()->Process[1].AffinityPadding[10];
      if ( v15 && ((v17 = *(_WORD *)(v15 + 8), v17 == 332) || v17 == 452) )
      {
        v29 = *(_DWORD *)(v7 + 12128);
        v24 = *(unsigned int *)(v7 + 8196);
        v16 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v29 = *(_DWORD *)(v7 + 5920);
        v24 = *(_QWORD *)(v7 + 8);
        v16 = *(_QWORD *)(v7 + 16);
      }
      v25 = v16;
    }
  }
  v35[0] = v21;
  v35[1] = 72LL;
  v12 = *(unsigned __int16 **)(a1 + 1552);
  if ( v12 && *((_QWORD *)v12 + 1) )
  {
    v18 = 2048;
    if ( *v12 < 0x800u )
      v18 = *v12;
    v36 = (__int64 *)*((_QWORD *)v12 + 1);
    v37 = v18;
    if ( !v18 || *(_WORD *)(*((_QWORD *)v12 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) )
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
  return EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v35, v6, 2u, v19, v20);
}
