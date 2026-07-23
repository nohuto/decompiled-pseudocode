/*
 * XREFs of EtwpTraceUmEvent @ 0x18004FB84
 * Callers:
 *     EtwLogTraceEvent @ 0x18004FB40 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x180110710 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpRelogEvent @ 0x18004FEBC (EtwpRelogEvent.c)
 *     EtwpReserveTraceBuffer @ 0x180050018 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110A90 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  size_t v4; // r12
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // ebx
  __int16 v10; // r13
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int i; // ecx
  int v16; // r13d
  struct _TEB *v17; // rax
  unsigned __int64 *v18; // r9
  char *v19; // rax
  char *v20; // rsi
  unsigned int j; // r12d
  const void *v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  struct _TEB *v26; // rax
  char *v27; // rcx
  unsigned int v28; // [rsp+30h] [rbp-1B8h]
  unsigned int v29; // [rsp+34h] [rbp-1B4h]
  unsigned int v30; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-1ACh]
  _DWORD *v32; // [rsp+40h] [rbp-1A8h]
  unsigned int v33; // [rsp+48h] [rbp-1A0h]
  int v34; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v35; // [rsp+50h] [rbp-198h]
  int v36; // [rsp+54h] [rbp-194h]
  int v37; // [rsp+58h] [rbp-190h]
  void *v38; // [rsp+60h] [rbp-188h]
  __int64 v39; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-178h] BYREF
  int UniqueThread; // [rsp+78h] [rbp-170h]
  int UniqueProcess; // [rsp+7Ch] [rbp-16Ch]
  char *v43; // [rsp+80h] [rbp-168h]
  struct _TEB *v44; // [rsp+88h] [rbp-160h]
  struct _TEB *v45; // [rsp+90h] [rbp-158h]
  _CLIENT_ID *p_ClientId; // [rsp+98h] [rbp-150h]
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v37 = a4;
  v4 = a3;
  v39 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v31 = 0;
  v40 = 0LL;
  v30 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a1, &v30), !(_DWORD)result) )
  {
    v7 = 2LL * v30;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v30 + 8));
    v6 = *(_DWORD **)(EtwpLoggerArray + 8 * v7);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      v32 = *(_DWORD **)(EtwpLoggerArray + 8 * v7);
      result = 0LL;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
    return 4201LL;
  }
LABEL_5:
  v28 = result;
  if ( (_DWORD)result )
    return result;
  v9 = *a2;
  v29 = v9;
  if ( v9 < (unsigned int)v4 )
  {
    v28 = 87;
  }
  else
  {
    v36 = *((_DWORD *)a2 + 11);
    v10 = v36;
    if ( (v36 & 0x200000) != 0 )
    {
      v11 = EtwpRelogEvent(v6, a2);
    }
    else
    {
      v34 = v36 & 0x100000;
      if ( (v36 & 0x100000) != 0 )
      {
        v12 = v9 - v4;
        if ( v12 > 0x100 )
        {
          v28 = 13;
          goto LABEL_42;
        }
        memset(Src, 0, sizeof(Src));
        if ( v12 )
          memmove(Src, (char *)a2 + v4, v12);
        v13 = v4;
        v29 = v4;
        v14 = v12 >> 4;
        v31 = v14;
        for ( i = 0; ; ++i )
        {
          v33 = i;
          if ( i >= v14 )
            break;
          v13 += LODWORD(Src[2 * i + 1]);
          v29 = v13;
          if ( v13 < LODWORD(Src[2 * i + 1]) )
          {
            v28 = 234;
            goto LABEL_42;
          }
        }
      }
      v16 = v10 & 0x200;
      v17 = NtCurrentTeb();
      v44 = v17;
      v18 = &v40;
      if ( v16 )
        v18 = 0LL;
      v6 = v32;
      v19 = (char *)EtwpReserveTraceBuffer(v32, v29, v17->CurrentIdealProcessor.Reserved, v18, &v39);
      v20 = v19;
      v43 = v19;
      if ( v19 )
      {
        if ( v34 )
        {
          v38 = &v19[v4];
          memmove(v19, a2, v4);
          for ( j = 0; ; ++j )
          {
            v35 = j;
            if ( j >= v31 )
              break;
            v22 = Src[2 * j];
            v23 = (unsigned int)Src[2 * j + 1];
            if ( v22 && v23 )
            {
              v24 = v23;
              memmove(v38, v22, v23);
              v38 = (char *)v38 + v24;
            }
          }
        }
        else
        {
          memmove(v19, a2, v29);
        }
        if ( (v36 & 0x80000) != 0 )
          *(_OWORD *)(v20 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
        if ( !v16 )
        {
          v25 = v40;
          *((_QWORD *)v20 + 2) = v40;
          if ( v6[4] != 3 )
            v25 = __rdtsc();
          *((_QWORD *)v20 + 5) = v25;
        }
        *(_DWORD *)v20 = v37 | v29;
        v26 = NtCurrentTeb();
        v45 = v26;
        p_ClientId = &v26->ClientId;
        UniqueThread = (int)v26->ClientId.UniqueThread;
        v27 = v43;
        *((_DWORD *)v43 + 2) = UniqueThread;
        UniqueProcess = (int)v26->ClientId.UniqueProcess;
        *((_DWORD *)v27 + 3) = UniqueProcess;
        _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
        v6 = v32;
        goto LABEL_42;
      }
      if ( v29 <= 0xFFF8 )
        v11 = v6[53] < v29 ? 234 : 8;
      else
        v11 = 534;
    }
    v28 = v11;
  }
LABEL_42:
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)v6[5] + 8));
  return v28;
}
