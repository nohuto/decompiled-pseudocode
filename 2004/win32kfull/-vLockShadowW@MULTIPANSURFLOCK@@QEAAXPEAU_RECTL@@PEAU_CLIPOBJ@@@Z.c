/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0297924
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0294FEC (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0298070 (-vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // eax
  LONG v6; // eax
  LONG right; // ecx
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rsi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  char *v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  char *v42; // [rsp+30h] [rbp-20h] BYREF
  int v43; // [rsp+38h] [rbp-18h]
  int v44; // [rsp+3Ch] [rbp-14h]
  __int128 v45; // [rsp+40h] [rbp-10h] BYREF
  __int64 v46; // [rsp+90h] [rbp+40h]
  __int64 v47; // [rsp+A0h] [rbp+50h]
  __int64 v48; // [rsp+A8h] [rbp+58h]

  v45 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v45) = left;
    v6 = a2->top;
    if ( top > v6 )
      v6 = top;
    right = a3->rclBounds.right;
    DWORD1(v45) = v6;
    v8 = a2->right;
    if ( right < v8 )
      v8 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v45) = v8;
    v10 = a2->bottom;
    if ( bottom < v10 )
      v10 = bottom;
    HIDWORD(v45) = v10;
  }
  else
  {
    v45 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v45);
  v11 = *((_QWORD *)this + 4);
  v12 = v11;
  if ( v11 )
  {
    v13 = *((_QWORD *)this + 4);
  }
  else
  {
    v12 = *((_QWORD *)this + 5);
    v13 = v12;
  }
  v14 = *(_QWORD *)(v13 + 64);
  v42 = 0LL;
  v15 = *(_DWORD *)(v14 + 32);
  v16 = *(_QWORD *)(v12 + 64);
  v43 = v15;
  v44 = *(_DWORD *)(v16 + 36);
  ERECTL::operator*=((int *)&v45, (int *)&v42);
  if ( !ERECTL::bEmpty((ERECTL *)&v45) )
  {
    v17 = v11;
    if ( !v11 )
      v17 = *((_QWORD *)this + 5);
    v18 = (unsigned int)v45 / *(_DWORD *)(v17 + 768);
    v19 = v11;
    v20 = v18;
    if ( !v11 )
      v19 = *((_QWORD *)this + 5);
    v21 = DWORD2(v45) / *(_DWORD *)(v19 + 768);
    v22 = v11;
    v23 = v21;
    if ( !v11 )
      v22 = *((_QWORD *)this + 5);
    v24 = DWORD1(v45) / *(_DWORD *)(v22 + 772);
    if ( !v11 )
      v11 = *((_QWORD *)this + 5);
    v25 = HIDWORD(v45) / *(_DWORD *)(v11 + 772);
    *((_BYTE *)this + 49) = 1;
    v26 = v25;
    memset((char *)this + 131, 0, 0x51uLL);
    v27 = v20;
    v28 = v26 + 1;
    v29 = v24;
    v47 = v28;
    v46 = v23 + 1;
    v30 = 9 * v24;
    v48 = v24;
    v31 = (char *)this + 9 * v24 + 131;
    v42 = v31;
    v32 = 8 * (v20 + v30) + 120;
    *(_QWORD *)&v45 = v32;
LABEL_25:
    v33 = *((_QWORD *)this + 4);
    if ( !v33 )
      v33 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v33 + 784) + 32LL), UserRequest, 0, 0, 0LL);
    v34 = v46;
    v35 = v29;
    v36 = v47;
    v37 = v31;
    while ( v35 < v36 )
    {
      v38 = v27;
      if ( v27 < v34 )
      {
        v39 = v32;
        while ( 1 )
        {
          v40 = *((_QWORD *)this + 4);
          if ( !v40 )
            v40 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v39 + v40)) )
            break;
          v37[v38] = 1;
          v39 += 8LL;
          v34 = v46;
          if ( ++v38 >= v46 )
          {
            v36 = v47;
            goto LABEL_36;
          }
        }
        MULTIPANSURFLOCK::vUnLockShadowWAndWait(this);
        memset((char *)this + 131, 0, 0x51uLL);
        v29 = v48;
        v31 = v42;
        v32 = v45;
        goto LABEL_25;
      }
LABEL_36:
      ++v35;
      v32 += 72LL;
      v37 += 9;
    }
    v41 = *((_QWORD *)this + 4);
    if ( !v41 )
      v41 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v41 + 784) + 32LL), 0);
  }
}
