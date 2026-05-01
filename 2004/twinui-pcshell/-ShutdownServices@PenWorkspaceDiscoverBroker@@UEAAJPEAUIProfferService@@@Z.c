/*
 * XREFs of ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x18021C360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180212CB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1802238F0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::ShutdownServices(
        PenWorkspaceDiscoverBroker *this,
        struct IProfferService *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r8d

  v2 = *((_QWORD *)this + 4);
  if ( !*(_BYTE *)(v2 + 200) )
  {
    *(_BYTE *)(v2 + 200) = 1;
    wil::details::SetEvent(*(wil::details **)(v2 + 152), a2);
    wil::handle_wait(*(wil **)(v2 + 144), (void *)0x1388, v3);
    *(_QWORD *)(v2 + 144) = 0LL;
  }
  return 0LL;
}
