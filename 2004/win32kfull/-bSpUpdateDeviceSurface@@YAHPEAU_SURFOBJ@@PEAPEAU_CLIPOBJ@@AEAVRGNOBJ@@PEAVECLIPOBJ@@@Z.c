/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0124E60
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  DC **v17; // rdi
  __int64 v18; // r13
  struct RGNOBJ *v19; // r14
  struct REGION *v20; // rax
  __int64 v21; // r10
  HDEV hdev; // rax
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  struct _POINTL v24; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-28h] BYREF
  struct REGION *v27; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 0 || a1->iType != 1 )
    return 1LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemVisRgnUniqueness, v10, v11);
  v14 = *(_DWORD *)(v12 + 336);
  if ( v14 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v14 <= giVisRgnUniqueness || v14 >= giVisRgnUniquenessStable )
        goto LABEL_6;
    }
    else if ( v14 >= giVisRgnUniquenessStable && v14 <= giVisRgnUniqueness )
    {
      goto LABEL_6;
    }
    v5 = 0;
  }
LABEL_6:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
  if ( v5 || !a2 || !*a2 )
    return v5;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemVisRgnPublish, v15, v16);
  v17 = *(DC ***)(v12 + 312);
  if ( !v17 )
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
    return 1LL;
  }
  v18 = (__int64)*a2;
  v19 = (struct RGNOBJ *)((unsigned __int64)&(*a2)[2].rclBounds.top & -(__int64)(*a2 != 0LL));
  v23 = *((_QWORD *)*v17 + 140);
  v20 = DC::prgnVisSnap(*v17);
  v27 = v20;
  if ( v21 && v20 )
  {
    if ( RGNOBJ::bEqual((RGNOBJ *)&v27, (struct RGNOBJ *)&v23) )
    {
LABEL_34:
      v5 = 1;
      goto LABEL_33;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a3 != *(_QWORD *)v19 )
      {
        if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v23) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v28);
          if ( v28[0] )
          {
            if ( (*(_DWORD *)(*((_QWORD *)*v17 + 6) + 40LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v24.x = -*((_DWORD *)hdev + 646);
              v24.y = -*((_DWORD *)hdev + 647);
              RGNOBJ::bOffset(a3, &v24);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v28, v19, a3, 8u) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v28) != 1 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v28, a3);
              XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)(v18 + 4), 1);
              if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
              {
                *a2 = (struct _CLIPOBJ *)a4;
                v5 = 1;
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v28);
        }
        goto LABEL_33;
      }
      goto LABEL_34;
    }
  }
LABEL_33:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v5;
}
