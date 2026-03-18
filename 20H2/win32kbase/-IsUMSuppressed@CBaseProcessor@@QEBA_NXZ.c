/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B5834
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00A7534 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C00A8588 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this)
{
  bool IsInputThreadDesktopActive; // al
  char v3; // dl

  IsInputThreadDesktopActive = CInputThread::IsInputThreadDesktopActive(this);
  v3 = 0;
  if ( IsInputThreadDesktopActive )
    return (*((_DWORD *)this + 3) & 4) != 0;
  return v3;
}
