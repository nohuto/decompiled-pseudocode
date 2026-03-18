/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FDB60
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0273FA0 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C02FB6F4 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00098E0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001A644 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C021B574 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C02649D4 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C02FE728 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C02FEE14 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(struct _KEVENT *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int8 v10; // bp
  int v11; // edx
  __int64 v12; // r14
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)&this[30], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v17, Current);
  if ( *(_DWORD *)(*(_QWORD *)&this->Header.Lock + 140LL) )
  {
    v7 = -1073741823;
  }
  else
  {
    KeClearEvent(this + 26);
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)&this->Header.Lock) + 27) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v8 = *(_QWORD *)&this->Header.Lock;
    LODWORD(this[29].Header.WaitListHead.Blink) = 1;
    v10 = 0;
    v7 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*(ADAPTER_DISPLAY **)(v8 + 88), a2, v9);
    v11 = 259;
    if ( v7 >= 0 && g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
    {
      v10 = 1;
      v7 = v11;
    }
    if ( v7 == v11 )
    {
      v7 = 258;
      v12 = 10000000LL * (unsigned int)dword_1C00B1168;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C00B1168;
      while ( 1 )
      {
        v13 = KeWaitForSingleObject(&this[26], Executive, 0, 0, &Timeout);
        LODWORD(this[29].Header.WaitListHead.Blink) = 0;
        if ( !v10 && !*(_DWORD *)(*(_QWORD *)&this->Header.Lock + 140LL) && (v13 != 258 || KeReadStateEvent(this + 26)) )
          break;
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)&this->Header.Lock,
                             (v10 ^ 1u) + 4,
                             LODWORD(this[10].Header.WaitListHead.Flink),
                             v12) != 1 )
          goto LABEL_14;
      }
      v7 = 0;
    }
    else
    {
LABEL_14:
      KeSetEvent(this + 26, 0, 0);
    }
  }
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v14);
  return (unsigned int)v7;
}
