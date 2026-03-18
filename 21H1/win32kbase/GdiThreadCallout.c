/*
 * XREFs of GdiThreadCallout @ 0x1C000B570
 * Callers:
 *     <none>
 * Callees:
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C000B770 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C000B79C (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C0075770 (PopThreadGuardedObject.c)
 *     HmgFreeDcAttr @ 0x1C007F458 (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     bDeletePalette @ 0x1C009AEF0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rsi
  int v10; // edi
  int v11; // eax
  _QWORD *v12; // r14
  _QWORD *v13; // rbp
  HPALETTE *v14; // r14
  int v15; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // r12
  void (__fastcall *v18)(__int64); // r15

  v4 = 0;
  if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
    && (!qword_1C0257538 ? (v5 = 0) : (v5 = qword_1C0257538()), v5) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v15 = qword_1C0257550 ? qword_1C0257550() : -1073741637;
        if ( v15 >= 0 && qword_1C0257558 )
          qword_1C0257558();
      }
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 96) = ThreadWin32Thread + 88;
        *(_QWORD *)(ThreadWin32Thread + 88) = ThreadWin32Thread + 88;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      v9 = W32GetThreadWin32Thread(a1);
      v10 = -1073741637;
      if ( qword_1C02578A0 )
        v11 = qword_1C02578A0();
      else
        v11 = -1073741637;
      if ( v11 >= 0 && qword_1C02578A8 )
        qword_1C02578A8();
      if ( *(_QWORD *)(v9 + 24) )
        HmgFreeDcAttr();
      vUMPDThreadCleanup((struct _W32THREAD *)v9);
      v12 = (_QWORD *)(v9 + 88);
      while ( 1 )
      {
        v13 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 == v12 )
          break;
        if ( v13 )
        {
          KeEnterCriticalRegion();
          v17 = v13[2];
          v18 = (void (__fastcall *)(__int64))v13[3];
          PopThreadGuardedObject(v13);
          if ( v18 )
            v18(v17);
          KeLeaveCriticalRegion();
        }
      }
      v14 = *(HPALETTE **)(v9 + 288);
      if ( v14 )
      {
        *(_QWORD *)(v9 + 288) = 0LL;
        bDeletePalette(*v14);
        if ( qword_1C02578E0 )
          v10 = qword_1C02578E0();
        if ( v10 >= 0 && qword_1C02578E8 )
          qword_1C02578E8(v14);
      }
      if ( *(_QWORD *)(v9 + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C02529A0)(v9 + 80, 0LL);
    }
  }
  else
  {
    v6 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v7) = 1;
    v6[6] = v6 + 5;
    v6[5] = v6 + 5;
    v6[12] = v6 + 11;
    v6[11] = v6 + 11;
    v6[35] = v6 + 14;
    v6[10] = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C02529A0)(v6 + 10, v7);
  }
  return v4;
}
