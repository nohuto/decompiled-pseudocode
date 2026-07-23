/*
 * XREFs of EtwTraceEvent @ 0x1405A0BD0
 * Callers:
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x14037C580 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14026D558 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14026D600 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036A7AC (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCloseLogger @ 0x140377E94 (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1405A56BC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A61CC (EtwpInvokeEventCallback.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // r14
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ebx
  unsigned int v15; // esi
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int i; // edx
  unsigned int v21; // ecx
  char *v22; // rax
  char *v23; // r14
  __int64 v24; // r8
  __int64 v25; // r9
  int j; // esi
  char *v27; // rdx
  size_t v28; // rcx
  size_t v29; // rbx
  unsigned __int64 v30; // rcx
  _OWORD *v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v34[16]; // [rsp+30h] [rbp-1C8h] BYREF
  size_t v35; // [rsp+40h] [rbp-1B8h]
  __int64 v36; // [rsp+48h] [rbp-1B0h]
  int v37; // [rsp+50h] [rbp-1A8h]
  int v38; // [rsp+54h] [rbp-1A4h]
  int v39; // [rsp+58h] [rbp-1A0h]
  int v40; // [rsp+5Ch] [rbp-19Ch]
  int v41; // [rsp+60h] [rbp-198h]
  unsigned int Size; // [rsp+64h] [rbp-194h]
  unsigned int Size_4; // [rsp+68h] [rbp-190h]
  void *v44; // [rsp+70h] [rbp-188h]
  __int64 v45; // [rsp+78h] [rbp-180h]
  LARGE_INTEGER v46[3]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v47; // [rsp+98h] [rbp-160h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-150h]
  void *Src[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  Size = a3;
  v34[8] = a5;
  v47 = 0LL;
  v48 = 0LL;
  v38 = 0;
  v34[0] = 0;
  v37 = 0;
  v35 = 0LL;
  v46[0].QuadPart = 0LL;
  v7 = a1;
  Size_4 = a1;
  if ( a5 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  v45 = v8;
  v36 = v8;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v10 = EtwpOpenLogger(v7, v8, a5, v34);
    v11 = v10;
    v46[1].QuadPart = v10;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 12);
      if ( (v12 & 0x80u) == 0 )
      {
        if ( a5 || (v12 & 0x1000000) == 0 )
        {
          if ( a5 )
          {
            if ( ((unsigned __int8)a2 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          LODWORD(v35) = *a2;
          if ( (unsigned int)v35 < (unsigned int)v5 )
          {
            ReserveTraceBufferStatus = -1073741811;
            HIDWORD(v35) = -1073741811;
            v13 = v36;
            goto LABEL_72;
          }
          v38 = *((_DWORD *)a2 + 11);
          v14 = v38;
          v41 = v38;
          v15 = v35;
          if ( (v38 & 0x100000) != 0 )
          {
            v39 = 0;
            v16 = (char *)a2 + v5;
            v17 = v35 - v5;
            if ( (unsigned int)(v35 - v5) > 0x100 )
            {
              ReserveTraceBufferStatus = -1073741684;
              HIDWORD(v35) = -1073741684;
              v13 = v36;
              goto LABEL_72;
            }
            if ( v17 )
            {
              if ( a5 )
              {
                if ( ((unsigned __int8)v16 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v18 = (unsigned __int64)&v16[v17];
                if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)v16 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v19 = v17;
              memmove(Src, v16, v17);
              v15 = v5;
              LODWORD(v35) = v5;
              v37 = v19 >> 4;
              for ( i = 0; ; ++i )
              {
                v39 = i;
                if ( i >= v37 )
                  break;
                v21 = (unsigned int)Src[2 * i + 1];
                v15 += v21;
                LODWORD(v35) = v15;
                if ( v15 < v21 )
                {
                  ReserveTraceBufferStatus = -2147483643;
                  HIDWORD(v35) = -2147483643;
                  v13 = v36;
                  goto LABEL_72;
                }
              }
              v14 = v41;
            }
          }
          v22 = (char *)EtwpReserveTraceBuffer((unsigned int *)v11, v15, (__int64)&v47, v46, 0);
          v23 = v22;
          v46[2].QuadPart = (LONGLONG)v22;
          if ( v22 )
          {
            if ( (v14 & 0x100000) != 0 )
            {
              v40 = 0;
              v44 = &v22[Size];
              memmove(v22, a2, Size);
              for ( j = 0; ; ++j )
              {
                v40 = j;
                if ( j >= v37 )
                  break;
                v27 = (char *)Src[2 * j];
                v28 = LODWORD(Src[2 * j + 1]);
                if ( v27 && (_DWORD)v28 )
                {
                  if ( a5 && ((unsigned __int64)&v27[v28] > 0x7FFFFFFF0000LL || &v27[v28] < v27) )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v29 = v28;
                  memmove(v44, v27, v28);
                  v44 = (char *)v44 + v29;
                }
              }
              v14 = v41;
            }
            else
            {
              if ( a5 && v15 )
              {
                if ( ((unsigned __int8)a2 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v30 = (unsigned __int64)a2 + v15;
                if ( v30 > 0x7FFFFFFF0000LL || v30 < (unsigned __int64)a2 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v22, a2, v15);
            }
            if ( (v14 & 0x80000) != 0 )
            {
              v31 = (_OWORD *)*((_QWORD *)a2 + 3);
              if ( a5 && ((unsigned __int8)v31 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(_OWORD *)(v23 + 24) = *v31;
            }
            v13 = v36;
            CurrentThread = KeGetCurrentThread();
            *(_DWORD *)v23 = a4 | v35;
            *((LARGE_INTEGER *)v23 + 2) = v46[0];
            *((_DWORD *)v23 + 10) = CurrentThread->SchedulerApc.SpareLong0;
            *((_DWORD *)v23 + 11) = CurrentThread->UserTime;
            *((_DWORD *)v23 + 2) = CurrentThread[1].CurrentRunTime;
            *((_DWORD *)v23 + 3) = CurrentThread[1].CycleTime;
            if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v11, &v47, v24);
            }
            if ( *(_QWORD *)(v11 + 1304) )
            {
              LOBYTE(v25) = a5;
              EtwpInvokeEventCallback(v11, &v47, v23 + 24, v25);
            }
            EtwpReleaseTraceBuffer((signed __int64 *)&v47);
            ReserveTraceBufferStatus = HIDWORD(v35);
            goto LABEL_72;
          }
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v11, v15);
        }
        else
        {
          ReserveTraceBufferStatus = -1073741637;
        }
      }
      else
      {
        ReserveTraceBufferStatus = -1073741790;
      }
      v13 = v36;
LABEL_72:
      EtwpCloseLogger(Size_4, v13, v34[0]);
      return ReserveTraceBufferStatus;
    }
  }
  return (unsigned int)-1073741816;
}
