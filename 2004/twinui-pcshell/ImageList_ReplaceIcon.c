/*
 * XREFs of ImageList_ReplaceIcon @ 0x18013F300
 * Callers:
 *     CreateBitmapFromIcon @ 0x18038661C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18013F3B8 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805CBC18;
  if ( qword_1805CBC18 == -1 )
  {
    GetProcFromComCtl32(&qword_1805CBC18, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1805CBC18;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
