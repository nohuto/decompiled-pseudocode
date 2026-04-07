/*
 * XREFs of ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18003B6F8
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004A1D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     memcpy_0 @ 0x1800563BA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800893A4 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::FireTimeEvents(CDesktopManager *this, bool *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  const void *v5; // r9
  __int64 v6; // rsi
  int v7; // eax
  int v9; // eax
  int v10; // eax
  _BYTE *v11; // [rsp+38h] [rbp-19h] BYREF
  _BYTE *v12; // [rsp+40h] [rbp-11h]
  int v13; // [rsp+48h] [rbp-9h]
  int v14; // [rsp+4Ch] [rbp-5h]
  unsigned int v15; // [rsp+50h] [rbp-1h]
  _BYTE v16[80]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((_DWORD *)this + 150);
  v3 = 0;
  if ( v2 )
  {
    v15 = 0;
    v5 = (const void *)*((_QWORD *)this + 72);
    v11 = v16;
    v12 = v16;
    v13 = 10;
    v14 = 10;
    *a2 = 1;
    if ( v2 > 0xA )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v11, 8u, v2, v5);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7BBu);
LABEL_16:
        DynArrayImpl<0>::~DynArrayImpl<0>(&v11);
        return (unsigned int)v3;
      }
      v2 = v15;
    }
    else
    {
      memcpy_0(v16, v5, 8LL * v2);
      v15 = v2;
    }
    v6 = 0LL;
    if ( v2 )
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v11[8 * v6] + 144LL))(*(_QWORD *)&v11[8 * v6]);
        v3 = v7;
        if ( v7 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v15 )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7BFu);
      goto LABEL_16;
    }
LABEL_7:
    if ( v11 != v12 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      v11 = 0LL;
    }
  }
  if ( *((_BYTE *)this + 23) )
  {
    v10 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37));
    v3 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x7C5u);
  }
  return (unsigned int)v3;
}
