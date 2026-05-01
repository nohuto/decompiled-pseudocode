/*
 * XREFs of sub_180030370 @ 0x180030370
 * Callers:
 *     sub_1800301E8 @ 0x1800301E8 (sub_1800301E8.c)
 * Callees:
 *     sub_18002B2B8 @ 0x18002B2B8 (sub_18002B2B8.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002E4C8 @ 0x18002E4C8 (sub_18002E4C8.c)
 *     sub_18002FAD8 @ 0x18002FAD8 (sub_18002FAD8.c)
 *     sub_18002FE4C @ 0x18002FE4C (sub_18002FE4C.c)
 *     sub_18002FF28 @ 0x18002FF28 (sub_18002FF28.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 *     sub_180036F40 @ 0x180036F40 (sub_180036F40.c)
 *     sub_180037DB0 @ 0x180037DB0 (sub_180037DB0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030370(__int64 a1, __int64 a2, int a3, void *a4)
{
  __int64 v4; // r12
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // r14
  int v11; // esi
  bool v12; // sf
  PVOID Heap; // rax
  unsigned int v14; // edi
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  unsigned int *v17; // r14
  char *v18; // r13
  unsigned int *v19; // r12
  unsigned int **v20; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  __int64 v26; // r8
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  char v36[8]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-90h]
  _BYTE Source2[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+120h] [rbp+20h] BYREF
  UUID *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  int *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+190h] [rbp+90h] BYREF
  UUID *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  int *v54; // [rsp+1C0h] [rbp+C0h]
  __int64 v55; // [rsp+1C8h] [rbp+C8h]

  v4 = a2;
  v32 = a2;
  sub_18002FAD8(*(_DWORD *)(a2 + 24), a3, (__int64)v36);
  v8 = v37;
  v9 = sub_180030794(v37);
  v33 = v9;
  v10 = *(unsigned int *)(v9 + 4);
  v29 = *(_DWORD *)(v9 + 4);
  *(_DWORD *)(a1 + 60) = v8;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 48) = _InterlockedIncrement64(&qword_1800B3E90);
  memset(Source2, 0, 0x44uLL);
  if ( RtlCompareMemory(a4, Source2, 0x44uLL) != 68 )
  {
    v11 = sub_18002FE4C(DestinationSid);
    if ( v11 >= 0 )
    {
      v11 = sub_18002FF28(DestinationSid, a4, 4, 0, a1 + 120);
      if ( v11 >= 0 )
        v11 = 0;
    }
    v12 = v11 < 0;
LABEL_6:
    if ( v12 )
      goto LABEL_22;
    goto LABEL_7;
  }
  if ( a3 == 17 )
  {
    *(_QWORD *)(a1 + 128) = 0x41C6033FA3BC1875LL;
    v27 = 255;
    v11 = RtlPublishWnfStateData(0x41C6033FA3BC1875LL, 0LL, &v27, 4LL, 0LL);
    v12 = v11 < 0;
    goto LABEL_6;
  }
LABEL_7:
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56 * v10);
  *(_QWORD *)(a1 + 104) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 88) = v10;
    v14 = 0;
    if ( (_DWORD)v10 )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 56LL * v14);
        v16 = *(int *)(v9 + 16LL * v14 + 8);
        v17 = (unsigned int *)(v15 + 1);
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15[4] = 0LL;
        v15[5] = 0LL;
        v15[6] = 0LL;
        v15[3] = a1;
        *((_OWORD *)v15 + 2) = *(_OWORD *)(v9 + 16LL * v14 + 8);
        v15[2] = 0LL;
        v15[2] = v15 + 1;
        v15[1] = v15 + 1;
        *v15 = sub_180030800;
        RtlAcquireSRWLockShared(&unk_1800B3D60);
        v18 = (char *)&unk_1800B3D60 + 8 * v16;
        v19 = (unsigned int *)*((_QWORD *)v18 + 2);
        if ( v19 )
        {
          RtlAcquireSRWLockExclusive(v19 + 2);
          v19[4] = GetCurrentThreadId();
          v20 = (unsigned int **)*((_QWORD *)v19 + 4);
          if ( *v20 != v19 + 6 )
            __fastfail(3u);
          v15[2] = v20;
          *(_QWORD *)v17 = v19 + 6;
          *v20 = v17;
          *((_QWORD *)v19 + 4) = v17;
          RtlReleaseSRWLockShared(&unk_1800B3D60);
          ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))*v15)(v15, *v19, *((_QWORD *)v19 + 5));
          v19[4] = 0;
          RtlReleaseSRWLockExclusive(v19 + 2);
          if ( (unsigned int)dword_1800B3250 > 5
            && (qword_1800B3260 & 8) != 0
            && (qword_1800B3268 & 8) == qword_1800B3268 )
          {
            v53 = 16LL;
            v52 = &Uuid;
            v28 = *v19;
            v55 = 4LL;
            v54 = &v28;
            sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A3354, 0LL, 0LL, 4u, &v51);
          }
        }
        else
        {
          RtlReleaseSRWLockShared(&unk_1800B3D60);
          v23 = sub_180037DB0((unsigned int)v16);
          v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
          v25 = v24;
          if ( !v24 )
          {
            v11 = -1073741801;
            goto LABEL_22;
          }
          sub_180036F40(v24, (unsigned int)v16);
          v11 = sub_18002B3C0(v25, (__int64)v15, v26);
          if ( v11 < 0 )
          {
            sub_180036520(v25);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
          }
          else
          {
            RtlAcquireSRWLockExclusive(&unk_1800B3D60);
            dword_1800B3D68 = GetCurrentThreadId();
            if ( *((_QWORD *)v18 + 2) )
            {
              sub_18003667C(v25);
              sub_18002B2B8(*((unsigned int **)v18 + 2), (__int64)v15, 1);
              v11 = 0;
            }
            else
            {
              *((_QWORD *)v18 + 2) = v25;
              dword_1800B3D68 = 0;
              RtlReleaseSRWLockExclusive(&unk_1800B3D60);
            }
          }
          if ( v11 < 0 )
            goto LABEL_22;
        }
        ++*(_DWORD *)(a1 + 96);
        if ( ++v14 >= v29 )
        {
          v4 = v32;
          break;
        }
        v9 = v33;
      }
    }
    if ( *(_DWORD *)(a1 + 56) == 17 )
    {
      RtlAcquireSRWLockExclusive(a1 + 72);
      *(_DWORD *)(a1 + 80) = GetCurrentThreadId();
      sub_18002E4C8(v4, a1);
      *(_DWORD *)(a1 + 80) = 0;
      RtlReleaseSRWLockExclusive(a1 + 72);
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_22:
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 4) != 0 && (qword_1800B3268 & 4) == qword_1800B3268 )
  {
    v34 = *(_QWORD *)(a1 + 48);
    v41 = &Uuid;
    v43 = &v34;
    v30 = *(_DWORD *)(a1 + 60);
    v45 = &v30;
    v42 = 16LL;
    v44 = 8LL;
    v46 = 4LL;
    v35 = *(_QWORD *)(v32 + 16);
    v47 = &v35;
    v49 = &v31;
    v48 = 8LL;
    v31 = v11;
    v50 = 4LL;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2D7C, 0LL, 0LL, 7u, &v40);
  }
  return (unsigned int)v11;
}
