/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007FCBC
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C007FA1C (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C007FDB0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007FDF4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C007FE20 (HmgFree.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007FEE8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C5250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01F787C (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  int v4; // eax
  DC *v5; // rax
  _QWORD *v6; // rdi
  DC *v7; // rcx
  DC *v8; // rdx
  _QWORD *v10; // rsi
  unsigned int v11; // ebp
  struct PFT *v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v13, *((struct RFONT **)*this + 218));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1184));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1320));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1456));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1592));
  DC::hpath(*this, 0LL);
  if ( qword_1C0251750 )
    v4 = qword_1C0251750();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251758 )
    qword_1C0251758(this, a2);
  v5 = *this;
  v6 = (_QWORD *)*((_QWORD *)*this + 257);
  if ( v6 )
  {
    do
    {
      v10 = v6;
      v6 = (_QWORD *)v6[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
      v11 = 32;
      v12 = *(struct PFT **)(*v10 + 128LL);
      if ( v12 == gpPFTPrivate )
        v11 = 64;
      --*(_DWORD *)(*v10 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C0251708 )
        qword_1C0251708(&v12, *v10, 0LL, v11);
      Win32FreePool(v10);
    }
    while ( v6 );
    v5 = *this;
  }
  v7 = (DC *)*((_QWORD *)v5 + 37);
  v8 = v5;
  if ( v7 && v7 != (DC *)((char *)v5 + 264) )
  {
    Win32FreePool(v7);
    *((_QWORD *)*this + 37) = 0LL;
    v8 = *this;
  }
  HmgFree(*(_QWORD *)v8);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  return 1LL;
}
