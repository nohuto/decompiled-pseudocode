/*
 * XREFs of GdiThreadCallout @ 0x1C00BD690
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     HmgFreeDcAttr @ 0x1C0086408 (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00BD890 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00BD8BC (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     bDeletePalette @ 0x1C00C0ED0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  _QWORD **v13; // r14
  _QWORD *v14; // rbp
  HPALETTE *v15; // r14
  int v16; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // r12
  void (__fastcall *v19)(__int64); // r15

  v4 = 0;
  if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
    && (!qword_1C0251578 ? (v5 = 0) : (v5 = qword_1C0251578()), v5) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v16 = qword_1C0251590 ? qword_1C0251590() : -1073741637;
        if ( v16 >= 0 && qword_1C0251598 )
          qword_1C0251598();
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
      if ( qword_1C02518E0 )
        v11 = qword_1C02518E0();
      else
        v11 = -1073741637;
      if ( v11 >= 0 && qword_1C02518E8 )
        qword_1C02518E8();
      v12 = *(_QWORD *)(v9 + 24);
      if ( v12 )
        HmgFreeDcAttr(v12);
      vUMPDThreadCleanup((struct _W32THREAD *)v9);
      v13 = (_QWORD **)(v9 + 88);
      while ( 1 )
      {
        v14 = *v13;
        if ( *v13 == v13 )
          break;
        if ( v14 )
        {
          KeEnterCriticalRegion();
          v18 = v14[2];
          v19 = (void (__fastcall *)(__int64))v14[3];
          PopThreadGuardedObject(v14);
          if ( v19 )
            v19(v18);
          KeLeaveCriticalRegion();
        }
      }
      v15 = *(HPALETTE **)(v9 + 288);
      if ( v15 )
      {
        *(_QWORD *)(v9 + 288) = 0LL;
        bDeletePalette(*v15);
        if ( qword_1C0251920 )
          v10 = qword_1C0251920();
        if ( v10 >= 0 && qword_1C0251928 )
          qword_1C0251928(v15);
      }
      if ( *(_QWORD *)(v9 + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C024C980)(v9 + 80, 0LL);
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
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C024C980)(v6 + 10, v7);
  }
  return v4;
}
