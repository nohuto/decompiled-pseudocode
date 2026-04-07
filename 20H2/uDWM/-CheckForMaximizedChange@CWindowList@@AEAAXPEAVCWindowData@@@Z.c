/*
 * XREFs of ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001879C
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010CF4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000C84C (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018A6C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18003E468 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowList::CheckForMaximizedChange(CWindowList *this, struct CWindowData *a2)
{
  char v3; // di
  bool v5; // si
  char v6; // r15
  char v7; // di
  unsigned __int8 v8; // si
  struct _LIST_ENTRY *WindowListForDesktop; // rdi
  struct _LIST_ENTRY *i; // rbx
  struct CWindowData *Buffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_BYTE *)a2 + 609);
  v5 = (*((_DWORD *)a2 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)a2 + 4);
  v6 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 392)) == 0;
  *((_BYTE *)a2 + 609) &= ~2u;
  v7 = v3 & 2;
  *((_BYTE *)a2 + 609) |= 2 * v5;
  if ( v5 )
  {
    if ( !v7 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 392), (__int64)a2);
      goto LABEL_5;
    }
  }
  else if ( !v7 )
  {
    goto LABEL_5;
  }
  if ( !v5 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 392), &Buffer);
  }
LABEL_5:
  v8 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 392)) == 0;
  if ( v6 != v8 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)a2 + 15));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v8;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[38].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v8, 0LL);
      }
    }
  }
}
