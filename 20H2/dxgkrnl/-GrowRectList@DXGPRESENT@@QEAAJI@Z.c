/*
 * XREFs of ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C01559E0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FC160 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015519C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPRESENT::GrowRectList(DXGPRESENT *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // rdi
  unsigned int v5; // r8d
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  v2 = a2;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = 1;
    if ( *((_DWORD *)this + 17) )
      v5 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v5 )
      return 0LL;
    if ( *((_DWORD *)this + i + 40) < (unsigned int)v2 )
      break;
LABEL_6:
    ;
  }
  operator delete[](*((void **)this + i + 28));
  v7 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4B677844u, PagedPool);
  *((_QWORD *)this + i + 28) = v8;
  if ( v8 )
  {
    *((_DWORD *)this + i + 40) = v2;
    goto LABEL_6;
  }
  *((_DWORD *)this + i + 40) = 0;
  v13 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v13 + 24) = this;
  *(_QWORD *)(v13 + 32) = v2;
  WdLogEvent5_WdLowResource(v13);
  return 3221225495LL;
}
