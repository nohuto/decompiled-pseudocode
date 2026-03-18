/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C027EA0C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027EC80 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02287B4 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, char **a3)
{
  unsigned int v4; // ebp
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // r8
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // rcx
  DXGDEVICE *v16; // r10
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
  v8 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)v7 + 64) )
  {
    v9 = v7[30];
    v10 = *((_DWORD *)v9 + 4 * v8 + 2);
    if ( ((v4 >> 25) & 0x60) == (*((_BYTE *)v9 + 16 * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
    {
      v11 = v10 & 0x1F;
      if ( (_BYTE)v11 == 5 )
      {
        v13 = *((_QWORD *)v9 + 2 * (unsigned int)v8);
        if ( v13 )
          *((_DWORD *)v9 + 4 * (((unsigned __int64)v4 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        goto LABEL_9;
      }
      v12 = WdLogNewEntry5_WdError(0x2000LL, v11);
      *(_QWORD *)(v12 + 24) = 267LL;
      WdLogEvent5_WdError(v12);
    }
  }
  v13 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  if ( !v13 )
    return 3221225485LL;
  v15 = *(unsigned int *)(*((_QWORD *)this + 2) + 576LL);
  v16 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v15 == 4 )
    DxgkDestroyClientAllocation(v15, v16, 0, 0LL, *(PVOID *)(v13 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v16,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v13 + 40),
      a3,
      DXGDEVICE::DestroyFlagsDefault);
  return 0LL;
}
