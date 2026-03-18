/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0274E10
 * Callers:
 *     DxgkLock2 @ 0x1C01012B0 (DxgkLock2.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014810 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0274F80 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  _QWORD *v18; // rax

  if ( *((DXGDEVICE **)a2 + 1) == this )
  {
    if ( !*((_DWORD *)this + 108) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v7 & 4) != 0 )
      {
        if ( (_DWORD)a3 )
        {
          v8 = *((_QWORD *)this + 231);
          v9 = (v7 >> 6) & 0xF;
          if ( v8 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 231)) )
            {
              v12 = WdLogNewEntry5_WdAssertion(v11, v10);
              *(_QWORD *)(v12 + 24) = 1153LL;
              WdLogEvent5_WdAssertion(v12);
            }
            if ( *((_DWORD *)this + 144) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v8 + 2696), this, v9)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v9) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer(this, a2);
            }
          }
        }
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                    + 824LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            *((_QWORD *)a2 + 3));
    v17 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v18[3] = this;
      v18[4] = a2;
      v18[5] = v17;
      WdLogEvent5_WdWarning(v18);
    }
    return (unsigned int)v17;
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v5[4] = this;
    v5[3] = a2;
    v5[5] = *((_QWORD *)a2 + 1);
    v5[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
