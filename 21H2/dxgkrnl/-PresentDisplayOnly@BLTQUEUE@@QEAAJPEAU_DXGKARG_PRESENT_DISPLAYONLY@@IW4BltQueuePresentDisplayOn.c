/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03BDC58
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0317470 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C03BB35C (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A4D0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0xqdqq_EtwWriteTransfer @ 0x1C006D470 (McTemplateK0xqdqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02CA834 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C0306504 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C03BE9F0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03BF2E0 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(_QWORD *a1, struct _DXGKARG_PRESENT_DISPLAYONLY *a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  int v13; // ebx
  DXGDODPRESENT *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // bp
  __int64 v20; // r14
  NTSTATUS v21; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-68h]
  _BYTE v24[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER v26; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(a1 + 91), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v25, Current);
  if ( *(_DWORD *)(*a1 + 140LL) )
  {
    v13 = -1073741823;
    goto LABEL_17;
  }
  KeClearEvent((PRKEVENT)(a1 + 79));
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter((DXGDODPRESENT *)*a1) + 27) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v14 = (DXGDODPRESENT *)*a1;
  *((_DWORD *)a1 + 180) = 1;
  v16 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v14 + 11), a2, v15);
  v13 = v16;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    Timeout = *((_DWORD *)a1 + 65);
    McTemplateK0xqdqq_EtwWriteTransfer(Timeout, v17, v18, a1[31], Timeout, a3, v16, a4);
  }
  if ( v13 >= 0 && g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
  {
    v19 = 1;
  }
  else
  {
    v19 = 0;
    if ( v13 != 259 )
    {
LABEL_16:
      KeSetEvent((PRKEVENT)(a1 + 79), 0, 0);
      goto LABEL_17;
    }
  }
  v13 = 258;
  v20 = 10000000LL * (unsigned int)dword_1C0130C00;
  v26.QuadPart = -10000000LL * (unsigned int)dword_1C0130C00;
  while ( 1 )
  {
    v21 = KeWaitForSingleObject(a1 + 79, Executive, 0, 0, &v26);
    *((_DWORD *)a1 + 180) = 0;
    if ( !v19 && !*(_DWORD *)(*a1 + 140LL) && (v21 != 258 || KeReadStateEvent((PRKEVENT)(a1 + 79))) )
      break;
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *a1,
                         5 - (unsigned int)(v19 != 0),
                         *((unsigned int *)a1 + 64),
                         v20) != 1 )
      goto LABEL_16;
  }
  v13 = 0;
LABEL_17:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)a1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)v13;
}
