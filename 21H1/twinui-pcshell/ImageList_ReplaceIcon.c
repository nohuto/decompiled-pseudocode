/*
 * XREFs of ImageList_ReplaceIcon @ 0x18011ACE0
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803650EC (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18011AD98 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18059EA28;
  if ( qword_18059EA28 == -1 )
  {
    GetProcFromComCtl32(&qword_18059EA28, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18059EA28;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
