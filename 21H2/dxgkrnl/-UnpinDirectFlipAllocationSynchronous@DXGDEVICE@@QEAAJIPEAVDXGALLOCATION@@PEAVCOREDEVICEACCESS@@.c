/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0256B58
 * Callers:
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172F58 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0001C68 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C017300C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rdx
  struct DXGALLOCATION *v10; // r9
  char v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  char *v17; // rdx
  unsigned int v19[10]; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(v8) = 0;
  if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, a3) )
  {
    v19[0] = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 696LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            *((_QWORD *)a3 + 3),
            v19);
    if ( a4 )
      COREDEVICEACCESS::Release(a4, v9);
    if ( v11 )
    {
      if ( v19[0] <= 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                            + 8LL)
                                                                + 704LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                *((_QWORD *)a3 + 3),
                a2);
        v8 = v12;
        if ( v12 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v16[3] = a3;
          v16[4] = *((_QWORD *)a3 + 3);
          v16[5] = v8;
          WdLogEvent5_WdWarning(v16);
        }
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, v10);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck(a4, v17);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
      *((_QWORD *)a3 + 3));
  }
  return (unsigned int)v8;
}
