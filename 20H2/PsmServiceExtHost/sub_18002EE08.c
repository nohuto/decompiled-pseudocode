/*
 * XREFs of sub_18002EE08 @ 0x18002EE08
 * Callers:
 *     sub_18002ED60 @ 0x18002ED60 (sub_18002ED60.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002E9F0 @ 0x18002E9F0 (sub_18002E9F0.c)
 *     sub_18002EDA8 @ 0x18002EDA8 (sub_18002EDA8.c)
 *     sub_18002F070 @ 0x18002F070 (sub_18002F070.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002FDF4 @ 0x18002FDF4 (sub_18002FDF4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18002EE08(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  unsigned int i; // edx
  __int64 v14; // r8
  void *v15; // r8
  void *v16; // r8
  __int64 v17; // rax
  _WORD *v18; // rcx
  unsigned int v19; // edi
  int v21; // eax
  __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-BCh] BYREF
  _WORD *v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A0h] [rbp-60h] BYREF
  UUID *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  char v51[16]; // [rsp+110h] [rbp+10h] BYREF
  char v52[16]; // [rsp+120h] [rbp+20h] BYREF
  int *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int16 *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  _DWORD *v57; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+158h] [rbp+58h]
  int v59; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  __int64 *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  __int64 *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  __int64 *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  unsigned int *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B0h] [rbp+B0h] BYREF
  UUID *v71; // [rsp+1D0h] [rbp+D0h]
  int v72; // [rsp+1D8h] [rbp+D8h]
  int v73; // [rsp+1DCh] [rbp+DCh]
  _DWORD v74[36]; // [rsp+1E0h] [rbp+E0h] BYREF

  v32 = a3;
  v30 = a1;
  v28 = a4;
  v8 = -1LL;
  v23 = 1001;
  v9 = -1LL;
  v10 = 0LL;
  memset(v74, 0, 0x8CuLL);
  v33 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v35);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v73 = 0;
    v71 = &Uuid;
    v72 = 16;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A276E, 0LL, 0LL, 3u, &v70);
  }
  RtlAcquireSRWLockShared(a2);
  v11 = sub_18002F588(a2, a1);
  if ( v11 )
  {
    RtlReleaseSRWLockShared(a2);
    RtlAcquireSRWLockExclusive(v11 + 72);
    *(_DWORD *)(v11 + 80) = GetCurrentThreadId();
    v23 = *(_DWORD *)(v11 + 56);
    sub_18002EDA8(v11);
    v12 = *(_DWORD *)(v11 + 160);
    if ( v12 == 3 || v12 < a5 )
      *(_DWORD *)(v11 + 160) = a5;
    for ( i = 0; i < *(_DWORD *)(v11 + 96); ++i )
    {
      v14 = *(_QWORD *)(v11 + 104) + 56LL * i;
      if ( !*(_DWORD *)(v14 + 48) )
      {
        v74[v10] = *(_DWORD *)(v14 + 32);
        v10 = (unsigned int)(v10 + 1);
      }
    }
    v15 = *(void **)(v11 + 200);
    v8 = *(_QWORD *)(v11 + 144);
    v29 = *(_QWORD *)(v11 + 152);
    if ( v15 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    v16 = *(void **)(v11 + 208);
    if ( v16 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    v17 = sub_18002F070(a3);
    v18 = v28;
    *(_QWORD *)(v11 + 200) = v17;
    *(_QWORD *)(v11 + 208) = sub_18002F070(v18);
    v19 = 0;
    *(_DWORD *)(v11 + 80) = 0;
    RtlReleaseSRWLockExclusive(v11 + 72);
    v9 = v29;
  }
  else
  {
    v19 = -1073741811;
    RtlReleaseSRWLockShared(a2);
  }
  if ( v11 )
    sub_18002FDF4(v11);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v40 = &Uuid;
    v24 = *(_DWORD *)(a2 + 24);
    v42 = &v24;
    v44 = a2 + 72;
    v21 = *(unsigned __int8 *)(a2 + 73);
    v41 = 16LL;
    v43 = 4LL;
    v46 = 0;
    v48 = 4LL;
    v45 = 4 * v21 + 8;
    v25 = v23;
    v47 = &v25;
    v31 = v30;
    v49 = &v31;
    v50 = 8LL;
    sub_18002E9F0((__int64)v51, v32);
    sub_18002E9F0((__int64)v52, v28);
    v26 = a5;
    v53 = &v26;
    v22 = v10;
    v58 = 4 * (unsigned __int16)v10;
    v34 = v33;
    v60 = &v34;
    v36 = v35;
    v62 = &v36;
    v64 = &v37;
    v66 = &v38;
    v55 = &v22;
    v68 = &v27;
    v57 = v74;
    v54 = 4LL;
    v56 = 2LL;
    v59 = 0;
    v61 = 8LL;
    v63 = 8LL;
    v37 = v9;
    v65 = 8LL;
    v38 = v8;
    v67 = 8LL;
    v27 = v19;
    v69 = 4LL;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2639, 0LL, 0LL, 0x11u, &v39);
  }
  return v19;
}
