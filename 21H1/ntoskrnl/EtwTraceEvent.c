/*
 * XREFs of EtwTraceEvent @ 0x1405A04E0
 * Callers:
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x14037B8F0 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1402D6FA0 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140369DEC (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A5ADC (EtwpInvokeEventCallback.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v24; // r9
  int j; // esi
  char *v26; // rdx
  size_t v27; // rcx
  size_t v28; // rbx
  unsigned __int64 v29; // rcx
  _OWORD *v30; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v33[16]; // [rsp+30h] [rbp-1C8h] BYREF
  size_t v34; // [rsp+40h] [rbp-1B8h]
  __int64 v35; // [rsp+48h] [rbp-1B0h]
  int v36; // [rsp+50h] [rbp-1A8h]
  int v37; // [rsp+54h] [rbp-1A4h]
  int v38; // [rsp+58h] [rbp-1A0h]
  int v39; // [rsp+5Ch] [rbp-19Ch]
  int v40; // [rsp+60h] [rbp-198h]
  unsigned int Size; // [rsp+64h] [rbp-194h]
  unsigned int Size_4; // [rsp+68h] [rbp-190h]
  void *v43; // [rsp+70h] [rbp-188h]
  __int64 v44; // [rsp+78h] [rbp-180h]
  LARGE_INTEGER v45[3]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v46; // [rsp+98h] [rbp-160h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-150h]
  void *Src[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  Size = a3;
  v33[8] = a5;
  v46 = 0LL;
  v47 = 0LL;
  v37 = 0;
  v33[0] = 0;
  v36 = 0;
  v34 = 0LL;
  v45[0].QuadPart = 0LL;
  v7 = a1;
  Size_4 = a1;
  if ( a5 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  v44 = v8;
  v35 = v8;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v10 = EtwpOpenLogger(v7, v8, a5, v33);
    v11 = v10;
    v45[1].QuadPart = v10;
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
          LODWORD(v34) = *a2;
          if ( (unsigned int)v34 < (unsigned int)v5 )
          {
            ReserveTraceBufferStatus = -1073741811;
            HIDWORD(v34) = -1073741811;
            v13 = v35;
            goto LABEL_72;
          }
          v37 = *((_DWORD *)a2 + 11);
          v14 = v37;
          v40 = v37;
          v15 = v34;
          if ( (v37 & 0x100000) != 0 )
          {
            v38 = 0;
            v16 = (char *)a2 + v5;
            v17 = v34 - v5;
            if ( (unsigned int)(v34 - v5) > 0x100 )
            {
              ReserveTraceBufferStatus = -1073741684;
              HIDWORD(v34) = -1073741684;
              v13 = v35;
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
              LODWORD(v34) = v5;
              v36 = v19 >> 4;
              for ( i = 0; ; ++i )
              {
                v38 = i;
                if ( i >= v36 )
                  break;
                v21 = (unsigned int)Src[2 * i + 1];
                v15 += v21;
                LODWORD(v34) = v15;
                if ( v15 < v21 )
                {
                  ReserveTraceBufferStatus = -2147483643;
                  HIDWORD(v34) = -2147483643;
                  v13 = v35;
                  goto LABEL_72;
                }
              }
              v14 = v40;
            }
          }
          v22 = (char *)EtwpReserveTraceBuffer((unsigned int *)v11, v15, (__int64)&v46, v45, 0);
          v23 = v22;
          v45[2].QuadPart = (LONGLONG)v22;
          if ( v22 )
          {
            if ( (v14 & 0x100000) != 0 )
            {
              v39 = 0;
              v43 = &v22[Size];
              memmove(v22, a2, Size);
              for ( j = 0; ; ++j )
              {
                v39 = j;
                if ( j >= v36 )
                  break;
                v26 = (char *)Src[2 * j];
                v27 = LODWORD(Src[2 * j + 1]);
                if ( v26 && (_DWORD)v27 )
                {
                  if ( a5 && ((unsigned __int64)&v26[v27] > 0x7FFFFFFF0000LL || &v26[v27] < v26) )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v28 = v27;
                  memmove(v43, v26, v27);
                  v43 = (char *)v43 + v28;
                }
              }
              v14 = v40;
            }
            else
            {
              if ( a5 && v15 )
              {
                if ( ((unsigned __int8)a2 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v29 = (unsigned __int64)a2 + v15;
                if ( v29 > 0x7FFFFFFF0000LL || v29 < (unsigned __int64)a2 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v22, a2, v15);
            }
            if ( (v14 & 0x80000) != 0 )
            {
              v30 = (_OWORD *)*((_QWORD *)a2 + 3);
              if ( a5 && ((unsigned __int8)v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(_OWORD *)(v23 + 24) = *v30;
            }
            v13 = v35;
            CurrentThread = KeGetCurrentThread();
            *(_DWORD *)v23 = a4 | v34;
            *((LARGE_INTEGER *)v23 + 2) = v45[0];
            *((_DWORD *)v23 + 10) = CurrentThread->SchedulerApc.SpareLong0;
            *((_DWORD *)v23 + 11) = CurrentThread->UserTime;
            *((_DWORD *)v23 + 2) = CurrentThread[1].CurrentRunTime;
            *((_DWORD *)v23 + 3) = CurrentThread[1].CycleTime;
            if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v11, &v46);
            }
            if ( *(_QWORD *)(v11 + 1304) )
            {
              LOBYTE(v24) = a5;
              EtwpInvokeEventCallback(v11, &v46, v23 + 24, v24);
            }
            EtwpReleaseTraceBuffer((signed __int64 *)&v46);
            ReserveTraceBufferStatus = HIDWORD(v34);
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
      v13 = v35;
LABEL_72:
      EtwpCloseLogger(Size_4, v13, v33[0]);
      return ReserveTraceBufferStatus;
    }
  }
  return (unsigned int)-1073741816;
}
