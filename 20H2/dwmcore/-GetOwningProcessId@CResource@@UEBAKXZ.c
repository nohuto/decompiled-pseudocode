/*
 * XREFs of ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x180163260
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x18025789C (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::GetOwningProcessId(CResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 || *(_DWORD *)(v1 + 16) == 1 )
    return 0LL;
  else
    return *(unsigned int *)(v1 + 20);
}
