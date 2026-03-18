/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0161ADC
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DE6A4 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C01975A4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019634 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  char *v5; // rbx
  void *v6; // rbp
  char *v9; // rcx
  unsigned int v10; // edx
  char **v11; // rbx
  char **i; // rax
  char **v13; // r8
  char *v14; // rax

  *((_DWORD *)this + 63) = -1;
  v5 = (char *)this + 952;
  v6 = 0LL;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 46) = a4;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 344) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 53;
  *((_DWORD *)this + 106) = -1;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 178) = 0;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = -1;
  *((_DWORD *)this + 188) = 53;
  *((_DWORD *)this + 236) = 0;
  `vector constructor iterator'((char *)this + 952, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v5 + 216) = 0LL;
  v9 = (char *)this + 232;
  *((_DWORD *)v5 + 434) = 0;
  *(_OWORD *)((char *)this + 2824) = 0LL;
  *((_QWORD *)this + 337) = 0LL;
  v10 = 0;
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_DWORD *)this + 700) = 0;
  *((_QWORD *)this + 351) = 0LL;
  *((_QWORD *)this + 352) = 0LL;
  *((_DWORD *)this + 710) = 0;
  *((_QWORD *)this + 356) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_DWORD *)this + 718) = -1;
  *((_DWORD *)this + 717) = 53;
  *((_DWORD *)this + 716) = 0;
  *((_QWORD *)this + 362) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 360) = 1LL;
  *((_DWORD *)this + 722) = 0;
  v11 = (char **)(v5 + 8);
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_DWORD *)this + 34) = 2 - (a5 != 0);
  for ( i = (char **)*((_QWORD *)this + 30); ; i = v13 )
  {
    v13 = v11;
    if ( *i != v9 )
      __fastfail(3u);
    *v11 = v9;
    ++v10;
    v11[1] = (char *)i;
    *i = (char *)v11;
    *((_QWORD *)this + 30) = v11;
    v11 += 72;
    if ( v10 >= 3 )
      break;
  }
  *((_DWORD *)this + 62) = a3;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *(_QWORD *)((char *)this + 476) = 0LL;
  *((_QWORD *)this + 45) = 0x100000040LL;
  *((_DWORD *)this + 97) = 0;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *(_OWORD *)((char *)this + 328) = 0LL;
  *((_OWORD *)this + 35) = 0LL;
  *((_OWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 26, NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 648),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 624);
  KeSetImportanceDpc((PRKDPC)((char *)this + 648), HighImportance);
  memset((char *)this + 760, 0, 0xB0uLL);
  KeInitializeEvent((PRKEVENT)((char *)this + 488), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 512), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 536), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 160), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 256), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2704), 0);
  v14 = (char *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( v14 )
  {
    v6 = v14 + 8;
    *(_QWORD *)v14 = 8LL;
    `vector constructor iterator'(
      v14 + 8,
      64LL,
      8LL,
      (void (__fastcall *)(char *))_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE);
  }
  *((_QWORD *)this + 362) = v6;
  memset(v6, 0, 0x200uLL);
  return this;
}
