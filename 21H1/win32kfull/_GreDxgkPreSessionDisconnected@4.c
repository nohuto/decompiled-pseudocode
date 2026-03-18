/*
 * XREFs of _GreDxgkPreSessionDisconnected@4 @ 0xAEF78
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 */

int __thiscall GreDxgkPreSessionDisconnected(void *this)
{
  char v3; // [esp+7h] [ebp-1h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v3);
  _gDxgkInterface[46](this);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
}
