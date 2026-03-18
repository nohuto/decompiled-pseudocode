/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0160824
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0160258 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C020F200 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(
        BLTQUEUE *this,
        struct DXGDODPRESENT *a2,
        int a3,
        struct _KEVENT *a4,
        unsigned __int8 a5)
{
  char *v5; // rbx
  __int64 v6; // rbp
  char *v10; // rcx
  unsigned int v11; // edx
  char **v12; // rbx
  char **i; // rax
  char **v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  BLTQUEUE *result; // rax

  *((_DWORD *)this + 65) = -1;
  v5 = (char *)this + 968;
  v6 = 0LL;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 47) = a4;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 107) = 64;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 108) = -1;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_DWORD *)this + 190) = 0;
  *((_DWORD *)this + 191) = -1;
  *((_DWORD *)this + 192) = 64;
  *((_DWORD *)this + 240) = 0;
  `vector constructor iterator'((char *)this + 968, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v5 + 216) = 0LL;
  v10 = (char *)this + 232;
  *((_DWORD *)v5 + 434) = 0;
  *(_OWORD *)((char *)this + 2840) = 0LL;
  *((_QWORD *)this + 339) = 0LL;
  v11 = 0;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = 0LL;
  *((_DWORD *)this + 704) = 0;
  *((_QWORD *)this + 353) = 0LL;
  *((_QWORD *)this + 354) = 0LL;
  *((_DWORD *)this + 714) = 0;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_DWORD *)this + 722) = -1;
  *((_DWORD *)this + 721) = 64;
  *((_DWORD *)this + 720) = 0;
  *((_QWORD *)this + 364) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 362) = 1LL;
  *((_DWORD *)this + 726) = 0;
  v12 = (char **)(v5 + 8);
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_DWORD *)this + 34) = 2 - (a5 != 0);
  for ( i = (char **)*((_QWORD *)this + 30); ; i = v14 )
  {
    v14 = v12;
    if ( *i != v10 )
      __fastfail(3u);
    *v12 = v10;
    ++v11;
    v12[1] = (char *)i;
    *i = (char *)v12;
    *((_QWORD *)this + 30) = v12;
    v12 += 72;
    if ( v11 >= 3 )
      break;
  }
  if ( a2 )
    *((_QWORD *)this + 31) = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(a2) + 404);
  *((_DWORD *)this + 64) = a3;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *(_QWORD *)((char *)this + 484) = 0LL;
  *((_QWORD *)this + 46) = 0x100000040LL;
  *((_DWORD *)this + 99) = 0;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *(_OWORD *)((char *)this + 568) = 0LL;
  *(_OWORD *)((char *)this + 584) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 632), NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 656),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 632);
  KeSetImportanceDpc((PRKDPC)((char *)this + 656), HighImportance);
  memset((char *)this + 776, 0, 0xB0uLL);
  KeInitializeEvent((PRKEVENT)((char *)this + 496), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 520), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 544), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 160), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 264), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2720), 0);
  v16 = operator new[](0x208uLL, 0x4B677844u, 256LL, v15);
  if ( v16 )
  {
    v6 = v16 + 8;
    *(_QWORD *)v16 = 8LL;
    `vector constructor iterator'(
      (char *)(v16 + 8),
      64LL,
      8LL,
      (void (__fastcall *)(char *))_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE);
  }
  result = this;
  *((_QWORD *)this + 364) = v6;
  return result;
}
